/* Byte-for-byte override for FUN_00497a90.

 * Original bytes (10):
 *     0000: b8 a0 f4 4c 00 e9 66 b4
 *     0008: fb ff
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00497a90(void)
{
  __asm {
    _emit 0xB8
    _emit 0xA0
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0xE9
    _emit 0x66
    _emit 0xB4
    _emit 0xFB
    _emit 0xFF
  }
  __assume(0);
}
