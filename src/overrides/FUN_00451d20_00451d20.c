/* Byte-for-byte override for FUN_00451d20.

 * Original bytes (79):
 *     0000: 81 25 78 ee 4c 00 ff f3
 *     0008: ff ff b8 e8 e8 4c 00 e8
 *     0010: 2c fd ff ff a1 78 ee 4c
 *     0018: 00 33 c9 39 0d 08 e9 4c
 *     0020: 00 0f 95 c1 33 d2 c1 e1
 *     0028: 0a 33 c8 81 e1 00 04 00
 *     0030: 00 33 c1 39 15 0c e9 4c
 *     0038: 00 0f 95 c2 c1 e2 0b 33
 *     0040: d0 81 e2 00 08 00 00 33
 *     0048: c2 a3 78 ee 4c 00 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00451d20(void)
{
  __asm {
    _emit 0x81
    _emit 0x25
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xF3
    _emit 0xFF
    _emit 0xFF
    _emit 0xB8
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x2C
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0xA1
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0x39
    _emit 0x0D
    _emit 0x08
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0x0F
    _emit 0x95
    _emit 0xC1
    _emit 0x33
    _emit 0xD2
    _emit 0xC1
    _emit 0xE1
    _emit 0x0A
    _emit 0x33
    _emit 0xC8
    _emit 0x81
    _emit 0xE1
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC1
    _emit 0x39
    _emit 0x15
    _emit 0x0C
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0x0F
    _emit 0x95
    _emit 0xC2
    _emit 0xC1
    _emit 0xE2
    _emit 0x0B
    _emit 0x33
    _emit 0xD0
    _emit 0x81
    _emit 0xE2
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC2
    _emit 0xA3
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xC3
  }
  __assume(0);
}
