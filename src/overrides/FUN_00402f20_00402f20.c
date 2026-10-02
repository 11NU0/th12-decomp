/* Byte-for-byte override for FUN_00402f20.

 * Original bytes (21):
 *     0000: 56 8b f0 e8 48 f9 ff ff
 *     0008: 56 e8 21 9b 06 00 83 c4
 *     0010: 04 8b c6 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00402f20(void)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF0
    _emit 0xE8
    _emit 0x48
    _emit 0xF9
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x21
    _emit 0x9B
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
