//DecompileAll.java - decompile every function in the program to a .c file
//@category Delinker
//
// Usage: -postScript DecompileAll <outDir> [nameFilter] [limit]

import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.app.script.GhidraScript;

import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Program;
import ghidra.util.task.TaskMonitor;

import java.io.File;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;

public class DecompileAll extends GhidraScript {

    @Override
    public void run() throws Exception {
        final Program program = getCurrentProgram();
        final TaskMonitor monitor = TaskMonitor.DUMMY;

        String[] args = getScriptArgs();
        String outDir = args.length > 0 ? args[0] : "C:\\decomp_out";
        String filter = args.length > 1 && !args[1].equals("-") ? args[1] : null;
        int limit = args.length > 2 ? Integer.parseInt(args[2]) : 1000000;

        File dir = new File(outDir);
        if (!dir.exists() && !dir.mkdirs()) {
            throw new IllegalStateException("cannot create " + dir);
        }

        DecompInterface ifc = new DecompInterface();
        DecompileOptions opts = new DecompileOptions();
        ifc.setOptions(opts);
        if (!ifc.openProgram(program)) {
            throw new IllegalStateException("decompiler failed to open program: "
                    + ifc.getLastMessage());
        }
        println("[decomp] decompiler opened ok");

        int n = 0, bad = 0;
        long t0 = System.currentTimeMillis();
        FunctionIterator it = program.getFunctionManager().getFunctions(true);
        while (it.hasNext() && n < limit) {
            if (monitor.isCancelled()) {
                println("[decomp] cancelled");
                break;
            }
            Function f = it.next();
            String name = f.getName();
            if (filter != null && !name.contains(filter)) {
                continue;
            }
            if (f.isExternal() || f.getBody().getNumAddresses() == 0) {
                continue;
            }
            // Append the entry address: demangled C++ names are NOT unique after
            // sanitizing, and colliding names silently overwrite each other.
            String safe = name.replaceAll("[^A-Za-z0-9_.]", "_")
                    + "_" + f.getEntryPoint().toString();
            File out = new File(dir, safe + ".c");
            try {
                DecompileResults res = ifc.decompileFunction(f, 120, monitor);
                String body = (res != null && res.getDecompiledFunction() != null)
                        ? res.getDecompiledFunction().getC()
                        : null;
                if (body == null || body.isEmpty()) {
                    bad++;
                    continue;
                }
                try (PrintWriter w = new PrintWriter(out, StandardCharsets.UTF_8.name())) {
                    w.println("/* " + f.getSignature() + " @ " + f.getEntryPoint()
                            + "  " + f.getBody().getNumAddresses() + " bytes */");
                    w.println("#include \"th12.h\"");
                    w.println(body);
                }
                n++;
                if (n % 200 == 0) {
                    println("[decomp] " + n + " done ("
                            + ((System.currentTimeMillis() - t0) / 1000) + "s)");
                }
            }
            catch (Exception e) {
                bad++;
            }
        }
        ifc.dispose();
        println("[decomp] wrote " + n + " .c file(s), " + bad + " failed, in "
                + ((System.currentTimeMillis() - t0) / 1000) + "s");
    }
}
