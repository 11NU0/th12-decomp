/* Byte-for-byte override for __ctrandisp2.

 * Original bytes (72):
 *     0000: 55 8b ec 81 c4 30 fd ff
 *     0008: ff 53 ff 75 0c ff 75 08
 *     0010: e8 b4 01 00 00 83 c4 08
 *     0018: ff 75 14 ff 75 10 e8 a6
 *     0020: 01 00 00 83 c4 08 9b d9
 *     0028: bd 5c ff ff ff 80 8d 38
 *     0030: fd ff ff 02 c6 85 71 ff
 *     0038: ff ff 01 e8 2c 02 00 00
 *     0040: e8 03 00 00 00 5b c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __ctrandisp2(uint a0, int a1, uint a2, int a3)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x81
    _emit 0xC4
    _emit 0x30
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x53
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0xB4
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xE8
    _emit 0xA6
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x9B
    _emit 0xD9
    _emit 0xBD
    _emit 0x5C
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x80
    _emit 0x8D
    _emit 0x38
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x02
    _emit 0xC6
    _emit 0x85
    _emit 0x71
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x01
    _emit 0xE8
    _emit 0x2C
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
