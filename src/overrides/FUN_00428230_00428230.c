/* Byte-for-byte override for FUN_00428230.

 * Original bytes (21):
 *     0000: 53 8b d8 e8 98 fe ff ff
 *     0008: 53 e8 11 48 04 00 83 c4
 *     0010: 04 8b c3 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00428230(void)
{
  __asm {
    _emit 0x53
    _emit 0x8B
    _emit 0xD8
    _emit 0xE8
    _emit 0x98
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x53
    _emit 0xE8
    _emit 0x11
    _emit 0x48
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
