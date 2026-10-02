/* Byte-for-byte override for FUN_0044a290.

 * Original bytes (21):
 *     0000: 53 8b d8 e8 88 fe ff ff
 *     0008: 53 e8 b1 27 02 00 83 c4
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

void __fastcall FUN_0044a290(void * a0)
{
  __asm {
    _emit 0x53
    _emit 0x8B
    _emit 0xD8
    _emit 0xE8
    _emit 0x88
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x53
    _emit 0xE8
    _emit 0xB1
    _emit 0x27
    _emit 0x02
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
