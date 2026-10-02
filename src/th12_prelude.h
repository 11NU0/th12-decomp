#ifndef TH12_PRELUDE_H
#define TH12_PRELUDE_H

/* The exact set of headers a decompilation unit sees, kept in its own file so
 * that probe_types.py can reproduce the real translation unit's visibility
 * when it asks the compiler which type names need forward declarations. */

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN 1
#endif
#ifndef NOMINMAX
#define NOMINMAX 1
#endif

#include <windows.h>
#include <d3d9.h>
#include <dinput.h>

/* The joystick input units use `MMRESULT` and `joyinfoex_tag`, both from
 * <MMSystem.h>. WIN32_LEAN_AND_MEAN keeps windows.h from pulling it in, so ask
 * for it explicitly. It only adds the multimedia declarations the game code
 * already references; the generated headers follow. */
#include <MMSystem.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/* The time units read `tm_year`, `tm_isdst`, ... by member, so the struct has
 * to be complete, not just the forward `typedef struct tm tm;` th12_crt.h
 * gives. time.h is the authoritative layout (the CRT's own). */
#include <time.h>

/* The VS2008 CRT's private per-thread/locale structures (struct _tiddata,
 * _setloc_struct, threadmbcinfostruct, LC_STRINGS). No installed header
 * declares them, yet the whole C++ exception-handling and locale code reads
 * them by member, so this comes before the generated headers: gen_types.py
 * treats a name declared here as already known and skips its placeholder. */
#include "th12_crt.h"

/* Ghidra's own type names (undefined4, code, recovered structures) and the
 * globals it names after their address (DAT_004b43cc). Both are generated, by
 * scripts\gen_types.py and scripts\gen_globals.py. Not optional: without them
 * the majority of the corpus is rejected with C2065/C2440/C2036 before cl
 * produces anything. */
#include "th12_ghidra.h"
#include "th12_globals.h"

/* Tag-only typedefs for Win32 structures that were previously patched here
 * are now emitted by gen_types.py from its "tag-only typedefs" section in
 * th12_ghidra.h, so they stay in sync with the type-name harvest. */

/* Ghidra spells an x87 NaN load as the identifier `NAN` and tests a float for
 * being NaN as a call `NAN(x)`. Neither is C; the value is an IEEE NaN and the
 * predicate the call spelling, since MSVC turns `x != x` straight back into
 * the `fcom`/`fcompp` sequence the original used. */
#ifndef NAN
#if defined(_MSC_VER)
static const union th12_nan {
    unsigned long i;
    float f;
} th12_nan_bits = { 0x7FC00000UL };
#define NAN (th12_nan_bits.f)
#else
#define NAN (0.0f / 0.0f)
#endif
#endif
#ifndef NANP
#define NANP(x) ((x) != (x))
#endif

#endif /* TH12_PRELUDE_H */
