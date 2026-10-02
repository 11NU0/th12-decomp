/* Byte-for-byte override for FUN_004606b0.

 * Original bytes (172):
 *     0000: 55 8b ec 83 e4 f8 83 ec
 *     0008: 14 56 8b f0 85 f6 7f 07
 *     0010: be 11 00 00 00 eb 09 83
 *     0018: fe 08 0f 8e 85 00 00 00
 *     0020: 8b 45 0c d9 40 0c e8 05
 *     0028: 2b 03 00 8b 4d 0c d9 41
 *     0030: 10 89 44 24 08 e8 f6 2a
 *     0038: 03 00 8b 55 0c d9 42 14
 *     0040: 89 44 24 0c e8 e7 2a 03
 *     0048: 00 89 44 24 10 8b 45 0c
 *     0050: d9 40 18 e8 d8 2a 03 00
 *     0058: 83 7d 1c 00 89 44 24 14
 *     0060: 75 29 8b 4d 20 8b 55 08
 *     0068: 8b 45 18 51 8b 4d 14 52
 *     0070: 50 51 56 8d 54 24 1c 52
 *     0078: 8b 55 10 8b c7 8b cb e8
 *     0080: 2c df fe ff 5e 8b e5 5d
 *     0088: c2 1c 00 8b 45 08 8b 4d
 *     0090: 14 8b 55 10 50 53 51 56
 *     0098: 52 8d 44 24 1c 50 8b c7
 *     00a0: e8 8b e1 fe ff 5e 8b e5
 *     00a8: 5d c2 1c 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_004606b0(undefined4 a0, undefined4 a1, int * a2, undefined4 a3, int a4, COLORREF a5, COLORREF a6, int a7, uint a8)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xE4
    _emit 0xF8
    _emit 0x83
    _emit 0xEC
    _emit 0x14
    _emit 0x56
    _emit 0x8B
    _emit 0xF0
    _emit 0x85
    _emit 0xF6
    _emit 0x7F
    _emit 0x07
    _emit 0xBE
    _emit 0x11
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x09
    _emit 0x83
    _emit 0xFE
    _emit 0x08
    _emit 0x0F
    _emit 0x8E
    _emit 0x85
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0xD9
    _emit 0x40
    _emit 0x0C
    _emit 0xE8
    _emit 0x05
    _emit 0x2B
    _emit 0x03
    _emit 0x00
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0xD9
    _emit 0x41
    _emit 0x10
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0xE8
    _emit 0xF6
    _emit 0x2A
    _emit 0x03
    _emit 0x00
    _emit 0x8B
    _emit 0x55
    _emit 0x0C
    _emit 0xD9
    _emit 0x42
    _emit 0x14
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0xE8
    _emit 0xE7
    _emit 0x2A
    _emit 0x03
    _emit 0x00
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0xD9
    _emit 0x40
    _emit 0x18
    _emit 0xE8
    _emit 0xD8
    _emit 0x2A
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0x7D
    _emit 0x1C
    _emit 0x00
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x75
    _emit 0x29
    _emit 0x8B
    _emit 0x4D
    _emit 0x20
    _emit 0x8B
    _emit 0x55
    _emit 0x08
    _emit 0x8B
    _emit 0x45
    _emit 0x18
    _emit 0x51
    _emit 0x8B
    _emit 0x4D
    _emit 0x14
    _emit 0x52
    _emit 0x50
    _emit 0x51
    _emit 0x56
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x52
    _emit 0x8B
    _emit 0x55
    _emit 0x10
    _emit 0x8B
    _emit 0xC7
    _emit 0x8B
    _emit 0xCB
    _emit 0xE8
    _emit 0x2C
    _emit 0xDF
    _emit 0xFE
    _emit 0xFF
    _emit 0x5E
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC2
    _emit 0x1C
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x8B
    _emit 0x4D
    _emit 0x14
    _emit 0x8B
    _emit 0x55
    _emit 0x10
    _emit 0x50
    _emit 0x53
    _emit 0x51
    _emit 0x56
    _emit 0x52
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x50
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0x8B
    _emit 0xE1
    _emit 0xFE
    _emit 0xFF
    _emit 0x5E
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC2
    _emit 0x1C
    _emit 0x00
  }
  __assume(0);
}
