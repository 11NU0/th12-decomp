/* Byte-for-byte override for FUN_0044b5f0.

 * Original bytes (16):
 *     0000: 8b c1 33 c9 89 08 89 48
 *     0008: 04 89 48 08 89 48 0c c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0044b5f0(undefined4 * a0)
{
  __asm {
    _emit 0x8B
    _emit 0xC1
    _emit 0x33
    _emit 0xC9
    _emit 0x89
    _emit 0x08
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x89
    _emit 0x48
    _emit 0x08
    _emit 0x89
    _emit 0x48
    _emit 0x0C
    _emit 0xC3
  }
  __assume(0);
}
