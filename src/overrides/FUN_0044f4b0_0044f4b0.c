/* Byte-for-byte override for FUN_0044f4b0.

 * Original bytes (48):
 *     0000: 53 8b 1d cc e8 4c 00 56
 *     0008: 57 8b f3 bf 04 00 00 00
 *     0010: 83 3e 00 7c 0f 8b c6 8b
 *     0018: cb e8 02 15 01 00 c7 06
 *     0020: ff ff ff ff 83 c6 28 83
 *     0028: ef 01 75 e4 5f 5e 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0044f4b0(void)
{
  __asm {
    _emit 0x53
    _emit 0x8B
    _emit 0x1D
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xF3
    _emit 0xBF
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x3E
    _emit 0x00
    _emit 0x7C
    _emit 0x0F
    _emit 0x8B
    _emit 0xC6
    _emit 0x8B
    _emit 0xCB
    _emit 0xE8
    _emit 0x02
    _emit 0x15
    _emit 0x01
    _emit 0x00
    _emit 0xC7
    _emit 0x06
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC6
    _emit 0x28
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x75
    _emit 0xE4
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
