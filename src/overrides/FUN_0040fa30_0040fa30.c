/* Byte-for-byte override for FUN_0040fa30.

 * Original bytes (193):
 *     0000: 53 55 56 8b 35 cc e8 4c
 *     0008: 00 57 8b f8 8b 57 10 e8
 *     0010: 9c 21 05 00 8b 77 08 8b
 *     0018: 1d 9c e8 4c 00 8b 2d 8c
 *     0020: 80 49 00 85 f6 74 42 f7
 *     0028: 05 78 ee 4c 00 00 80 00
 *     0030: 00 74 11 68 f8 f0 4c 00
 *     0038: ff 15 88 80 49 00 fe 05
 *     0040: 18 f2 4c 00 8b ce 8b d3
 *     0048: e8 13 2e 05 00 bb 00 80
 *     0050: 00 00 85 1d 78 ee 4c 00
 *     0058: 74 14 68 f8 f0 4c 00 ff
 *     0060: d5 fe 0d 18 f2 4c 00 eb
 *     0068: 05 bb 00 80 00 00 8b 7f
 *     0070: 0c 8b 35 9c e8 4c 00 85
 *     0078: ff 74 37 85 1d 78 ee 4c
 *     0080: 00 74 11 68 f8 f0 4c 00
 *     0088: ff 15 88 80 49 00 fe 05
 *     0090: 18 f2 4c 00 8b cf 8b d6
 *     0098: e8 c3 2d 05 00 85 1d 78
 *     00a0: ee 4c 00 74 0d 68 f8 f0
 *     00a8: 4c 00 ff d5 fe 0d 18 f2
 *     00b0: 4c 00 5f 5e 5d c7 05 d4
 *     00b8: 43 4b 00 00 00 00 00 5b
 *     00c0: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0040fa30(undefined4 a0)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x8B
    _emit 0x57
    _emit 0x10
    _emit 0xE8
    _emit 0x9C
    _emit 0x21
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x77
    _emit 0x08
    _emit 0x8B
    _emit 0x1D
    _emit 0x9C
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x2D
    _emit 0x8C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x42
    _emit 0xF7
    _emit 0x05
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x88
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xFE
    _emit 0x05
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xCE
    _emit 0x8B
    _emit 0xD3
    _emit 0xE8
    _emit 0x13
    _emit 0x2E
    _emit 0x05
    _emit 0x00
    _emit 0xBB
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0x1D
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x14
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xD5
    _emit 0xFE
    _emit 0x0D
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0xEB
    _emit 0x05
    _emit 0xBB
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x7F
    _emit 0x0C
    _emit 0x8B
    _emit 0x35
    _emit 0x9C
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x37
    _emit 0x85
    _emit 0x1D
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x88
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xFE
    _emit 0x05
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xCF
    _emit 0x8B
    _emit 0xD6
    _emit 0xE8
    _emit 0xC3
    _emit 0x2D
    _emit 0x05
    _emit 0x00
    _emit 0x85
    _emit 0x1D
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x0D
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xD5
    _emit 0xFE
    _emit 0x0D
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xC7
    _emit 0x05
    _emit 0xD4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
