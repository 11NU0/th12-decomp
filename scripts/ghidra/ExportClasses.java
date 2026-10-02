//ExportClasses.java - dump per-function namespace and calling convention
//@category Delinker
//
// Usage: -postScript ExportClasses <outFile>
//
// The original binary is optimised C++: its methods carry a `this` pointer in
// ECX, which VC9 only emits for a __thiscall member function. Ghidra emits
// plain C, and C cannot express __thiscall on a free function, so the C output
// can never match. To rebuild as C++ we need to know, per function, which
// namespace it belongs to and how it is called.
//
// Output is TSV: entry, name, namespace, convention, paramcount, params...

import ghidra.app.script.GhidraScript;

import ghidra.program.model.data.DataType;
import ghidra.program.model.listing.Function;
import ghidra.program.model.listing.FunctionIterator;
import ghidra.program.model.listing.Parameter;
import ghidra.program.model.symbol.Namespace;

import java.io.File;
import java.io.PrintWriter;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;

public class ExportClasses extends GhidraScript {

    private static String tsv(String s) {
        if (s == null) {
            return "";
        }
        return s.replace("\t", " ").replace("\n", " ").replace("\r", " ");
    }

    @Override
    public void run() throws Exception {
        final String[] args = getScriptArgs();
        final String out = args.length > 0 ? args[0] : "C:\\th12_classes.tsv";

        final List<String> rows = new ArrayList<>();
        rows.add("entry\tname\tnamespace\tconvention\tnparams\tparams\treturned");

        final FunctionIterator it = getCurrentProgram()
                .getFunctionManager().getFunctions(true);
        int n = 0;
        while (it.hasNext()) {
            final Function f = it.next();
            if (f.isExternal() || f.getBody().getNumAddresses() == 0) {
                continue;
            }

            final Namespace ns = f.getParentNamespace();
            final String nsName = (ns == null) ? "" : ns.getName(true);

            // Ghidra reports the convention as a free-form string such as
            // "__thiscall" or "" when it could not infer one.
            String conv = f.getCallingConventionName();
            if (conv == null) {
                conv = "";
            }

            final List<String> ps = new ArrayList<>();
            final Parameter[] params = f.getParameters();
            for (Parameter p : params) {
                DataType dt = p.getDataType();
                ps.add((dt == null ? "?" : tsv(dt.getName())) + " " + p.getName());
            }

            String ret = "?";
            try {
                DataType rdt = f.getReturnType();
                ret = (rdt == null) ? "?" : tsv(rdt.getName());
            }
            catch (Exception e) {
                ret = "?";
            }

            rows.add(tsv(f.getEntryPoint().toString())
                    + "\t" + tsv(f.getName())
                    + "\t" + tsv(nsName)
                    + "\t" + tsv(conv)
                    + "\t" + params.length
                    + "\t" + tsv(String.join(" | ", ps))
                    + "\t" + tsv(ret));
            n++;
        }

        try (PrintWriter pw = new PrintWriter(new File(out), "UTF-8")) {
            for (String r : rows) {
                pw.println(r);
            }
        }
        println("[classes] wrote " + n + " functions to " + out);
    }
}
