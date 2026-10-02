/* Byte-for-byte override for FUN_0040f690.

 * Original bytes (137):
 *     0000: 8b 91 18 01 00 00 56 be
 *     0008: 01 00 00 00 57 c7 81 20
 *     0010: 01 00 00 00 00 00 00 c7
 *     0018: 81 30 01 00 00 00 00 00
 *     0020: 00 8d 81 94 00 00 00 8d
 *     0028: 7e 1f 8d 9b 00 00 00 00
 *     0030: f6 c2 01 74 1d ff 00 83
 *     0038: 38 08 72 06 09 b1 30 01
 *     0040: 00 00 83 38 1a 72 11 09
 *     0048: b1 20 01 00 00 83 00 f8
 *     0050: eb 06 c7 00 00 00 00 00
 *     0058: 83 c0 04 d1 ea 03 f6 83
 *     0060: ef 01 75 cc 8b 81 18 01
 *     0068: 00 00 8b 91 1c 01 00 00
 *     0070: 33 d0 8b f2 23 f0 f7 d0
 *     0078: 23 c2 5f 89 b1 24 01 00
 *     0080: 00 89 81 28 01 00 00 5e
 *     0088: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0040f690(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0x91
    _emit 0x18
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0xBE
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0xC7
    _emit 0x81
    _emit 0x20
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x81
    _emit 0x30
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x81
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x7E
    _emit 0x1F
    _emit 0x8D
    _emit 0x9B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0xC2
    _emit 0x01
    _emit 0x74
    _emit 0x1D
    _emit 0xFF
    _emit 0x00
    _emit 0x83
    _emit 0x38
    _emit 0x08
    _emit 0x72
    _emit 0x06
    _emit 0x09
    _emit 0xB1
    _emit 0x30
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x38
    _emit 0x1A
    _emit 0x72
    _emit 0x11
    _emit 0x09
    _emit 0xB1
    _emit 0x20
    _emit 0x01
    _emit 0x00
    _emit 0x00
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
    _emit 0xCC
    _emit 0x8B
    _emit 0x81
    _emit 0x18
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x91
    _emit 0x1C
    _emit 0x01
    _emit 0x00
    _emit 0x00
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
    _emit 0xB1
    _emit 0x24
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x81
    _emit 0x28
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
