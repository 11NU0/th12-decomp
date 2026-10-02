//DelinkFunctions.java - headless driver for ghidra-delinker-extension
//@category Delinker
//
// NOTE: the extension's RelocationTableSynthesizerAnalyzer discovers its
// synthesizers with ClassSearcher.getInstances(CodeRelocationSynthesizer.class).
// Ghidra's ClassSearcher does not index filesystem extensions in headless mode,
// so the analyzer silently finds ZERO synthesizers and emits objects with no
// relocations at all. We therefore replicate its added() loop by hand, using
// explicitly constructed synthesizers (all public API).

import ghidra.app.analyzers.relocations.AbsoluteDataRelocationSynthesizer;
import ghidra.app.analyzers.relocations.X86CodeRelocationSynthesizer;
import ghidra.app.analyzers.relocations.utils.CodeRelocationSynthesizer;
import ghidra.app.analyzers.relocations.utils.DataRelocationSynthesizer;
import ghidra.app.script.GhidraScript;
import ghidra.app.util.DomainObjectService;
import ghidra.app.util.Option;
import ghidra.app.util.exporter.CoffRelocatableObjectExporter;
import ghidra.app.util.importer.MessageLog;
import ghidra.framework.model.DomainObject;

import ghidra.program.model.address.Address;
import ghidra.program.model.address.AddressSet;
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Listing;
import ghidra.program.model.listing.Program;
import ghidra.program.model.mem.MemoryAccessException;
import ghidra.program.model.relocobj.RelocationTable;
import ghidra.util.exception.CancelledException;
import ghidra.util.task.TaskMonitor;

import java.io.File;
import java.util.List;

/**
 * Usage:  -postScript DelinkFunctions &lt;outDir&gt; [nameFilter] [limit]
 *
 * 1. synthesizes the relocation table over the whole program
 * 2. exports each function body as a relocatable x86 COFF object file
 */
public class DelinkFunctions extends GhidraScript {

    private final MessageLog log = new MessageLog();

    /** Replicates RelocationTableSynthesizerAnalyzer.added() with explicit synthesizers. */
    private int synthesize(Program program, AddressSet set, TaskMonitor monitor) throws CancelledException {
        List<CodeRelocationSynthesizer> codeSynth = List.of(
                new X86CodeRelocationSynthesizer());
        List<DataRelocationSynthesizer> dataSynth = List.of(
                new AbsoluteDataRelocationSynthesizer());

        RelocationTable table = RelocationTable.get(program);
        table.clear(set);

        Listing listing = program.getListing();
        int processed = 0;

        for (Function function : program.getFunctionManager().getFunctions(set, true)) {
            if (monitor.isCancelled()) {
                break;
            }
            for (CodeRelocationSynthesizer s : codeSynth) {
                if (!s.canAnalyze(program)) {
                    continue;
                }
                try {
                    s.processFunction(program, set, function, table, monitor, log);
                    processed++;
                }
                catch (MemoryAccessException e) {
                    log.appendException(e);
                }
            }
        }

        for (Data data : listing.getDefinedData(set, true)) {
            if (monitor.isCancelled()) {
                break;
            }
            processData(dataSynth, program, set, data, table, monitor);
        }

        println("[delink] synthesized relocations for " + processed + " function(s)");
        return processed;
    }

    private void processData(List<DataRelocationSynthesizer> synths, Program program,
            AddressSet set, Data parent, RelocationTable table, TaskMonitor monitor) {
        if (parent.isPointer()) {
            for (DataRelocationSynthesizer s : synths) {
                try {
                    s.processPointer(program, set, parent, table, monitor, log);
                }
                catch (MemoryAccessException e) {
                    log.appendException(e);
                }
            }
        }
        else if (parent.isArray() && parent.getNumComponents() >= 1) {
            Data first = parent.getComponent(0);
            if (first.isPointer() || first.isArray() || first.isStructure()) {
                for (int i = 0; i < parent.getNumComponents(); i++) {
                    processData(synths, program, set, parent.getComponent(i), table, monitor);
                }
            }
        }
    }

    @Override
    public void run() throws Exception {
        // Ghidra 11.2: GhidraScript exposes currentProgram; monitor is private.
        final Program program = getCurrentProgram();
        final TaskMonitor monitor = TaskMonitor.DUMMY;

        String[] args = getScriptArgs();
        String outDir = args.length > 0 ? args[0] : "C:\\delink_out";
        String filter = args.length > 1 && !args[1].equals("-") ? args[1] : null;
        int limit = args.length > 2 ? Integer.parseInt(args[2]) : 1;

        File dir = new File(outDir);
        if (!dir.exists() && !dir.mkdirs()) {
            throw new IllegalStateException("cannot create " + dir);
        }

        println("[delink] language = " + program.getLanguageID()
                + "  compiler = " + program.getCompilerSpec().getCompilerSpecID());
        println("[delink] synthesizing relocation table over the whole program...");
        long t0 = System.currentTimeMillis();
        synthesize(program, new AddressSet(program.getMemory().getLoadedAndInitializedAddressSet()), monitor);
        println("[delink] synthesizer finished in "
                + ((System.currentTimeMillis() - t0) / 1000) + "s");

        CoffRelocatableObjectExporter exp = new CoffRelocatableObjectExporter();

        // The exporter keeps its config in fields only populated by setOptions();
        // without this every export dies on a null option.
        DomainObjectService svc = new DomainObjectService() {
            @Override
            public DomainObject getDomainObject() {
                return program;
            }
        };
        List<Option> opts = exp.getOptions(svc);
        exp.setOptions(opts);

        int n = 0, failed = 0, skipped = 0;
        FunctionIterator it = program.getFunctionManager().getFunctions(true);
        while (it.hasNext() && n < limit) {
            if (monitor.isCancelled()) {
                println("[delink] cancelled");
                break;
            }
            Function f = it.next();
            String name = f.getName();
            if (filter != null && !name.contains(filter)) {
                continue;
            }
            if (f.isThunk() || f.getBody().getNumAddresses() == 0) {
                skipped++;
                continue;
            }
            AddressSet body = new AddressSet(f.getBody());
            // Append the entry address: demangled C++ names are NOT unique after
            // sanitizing, and colliding names silently overwrite each other.
            String safe = name.replaceAll("[^A-Za-z0-9_.]", "_")
                    + "_" + f.getEntryPoint().toString();
            File out = new File(dir, safe + ".o");
            try {
                boolean ok = exp.export(out, program, body, monitor);
                if (!ok) {
                    failed++;
                }
                n++;
            }
            catch (Exception e) {
                failed++;
                if (failed <= 5) {
                    println("[delink] " + name + " : " + e);
                }
            }
        }
        println("[delink] attempted " + n + " object file(s), failed " + failed
                + ", skipped " + skipped);
    }
}
