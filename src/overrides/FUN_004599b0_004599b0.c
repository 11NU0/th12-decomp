/* Byte-for-byte override for FUN_004599b0.

 * Original bytes (132):
 *     0000: d9 ee 89 88 58 01 00 00
 *     0008: 0f b6 4c 24 04 89 88 5c
 *     0010: 01 00 00 0f b6 4c 24 08
 *     0018: 89 88 34 01 00 00 0f b6
 *     0020: 4c 24 0c 33 d2 89 90 3c
 *     0028: 01 00 00 89 90 40 01 00
 *     0030: 00 89 88 38 01 00 00 8b
 *     0038: 88 54 01 00 00 f6 c1 01
 *     0040: 75 29 83 c9 01 d9 90 4c
 *     0048: 01 00 00 89 90 48 01 00
 *     0050: 00 c7 80 44 01 00 00 c1
 *     0058: bd f0 ff c7 80 50 01 00
 *     0060: 00 d0 2e 4b 00 89 88 54
 *     0068: 01 00 00 d9 98 4c 01 00
 *     0070: 00 89 90 48 01 00 00 c7
 *     0078: 80 44 01 00 00 ff ff ff
 *     0080: ff c2 0c 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_004599b0(void * a0, byte a1, byte a2, byte a3)
{
  __asm {
    _emit 0xD9
    _emit 0xEE
    _emit 0x89
    _emit 0x88
    _emit 0x58
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB6
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x88
    _emit 0x5C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB6
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x88
    _emit 0x34
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB6
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0x33
    _emit 0xD2
    _emit 0x89
    _emit 0x90
    _emit 0x3C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x90
    _emit 0x40
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x88
    _emit 0x38
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x88
    _emit 0x54
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0xC1
    _emit 0x01
    _emit 0x75
    _emit 0x29
    _emit 0x83
    _emit 0xC9
    _emit 0x01
    _emit 0xD9
    _emit 0x90
    _emit 0x4C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x90
    _emit 0x48
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x80
    _emit 0x44
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x80
    _emit 0x50
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x88
    _emit 0x54
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x98
    _emit 0x4C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x90
    _emit 0x48
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x80
    _emit 0x44
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
  }
  __assume(0);
}
