/* Byte-for-byte override for FUN_00465440.

 * Original bytes (105):
 *     0000: 8b 11 56 be 01 00 00 00
 *     0008: 57 c7 41 08 00 00 00 00
 *     0010: c7 81 2c 01 00 00 00 00
 *     0018: 00 00 8d 41 14 8d 7e 1f
 *     0020: f6 c2 01 74 1a ff 00 83
 *     0028: 38 08 72 06 09 b1 2c 01
 *     0030: 00 00 83 38 1a 72 0e 09
 *     0038: 71 08 83 00 f8 eb 06 c7
 *     0040: 00 00 00 00 00 83 c0 04
 *     0048: d1 ea 03 f6 83 ef 01 75
 *     0050: cf 8b 01 8b 51 04 33 d0
 *     0058: 8b f2 23 f0 f7 d0 23 c2
 *     0060: 5f 89 71 0c 89 41 10 5e
 *     0068: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00465440(uint * a0)
{
  __asm {
    _emit 0x8B
    _emit 0x11
    _emit 0x56
    _emit 0xBE
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0xC7
    _emit 0x41
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x81
    _emit 0x2C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x41
    _emit 0x14
    _emit 0x8D
    _emit 0x7E
    _emit 0x1F
    _emit 0xF6
    _emit 0xC2
    _emit 0x01
    _emit 0x74
    _emit 0x1A
    _emit 0xFF
    _emit 0x00
    _emit 0x83
    _emit 0x38
    _emit 0x08
    _emit 0x72
    _emit 0x06
    _emit 0x09
    _emit 0xB1
    _emit 0x2C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x38
    _emit 0x1A
    _emit 0x72
    _emit 0x0E
    _emit 0x09
    _emit 0x71
    _emit 0x08
    _emit 0x83
    _emit 0x00
    _emit 0xF8
    _emit 0xEB
    _emit 0x06
    _emit 0xC7
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC0
    _emit 0x04
    _emit 0xD1
    _emit 0xEA
    _emit 0x03
    _emit 0xF6
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x75
    _emit 0xCF
    _emit 0x8B
    _emit 0x01
    _emit 0x8B
    _emit 0x51
    _emit 0x04
    _emit 0x33
    _emit 0xD0
    _emit 0x8B
    _emit 0xF2
    _emit 0x23
    _emit 0xF0
    _emit 0xF7
    _emit 0xD0
    _emit 0x23
    _emit 0xC2
    _emit 0x5F
    _emit 0x89
    _emit 0x71
    _emit 0x0C
    _emit 0x89
    _emit 0x41
    _emit 0x10
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
