/* Byte-for-byte override for FUN_0044fe00.

 * Original bytes (418):
 *     0000: 53 8b 5c 24 08 56 8b 74
 *     0008: 24 10 57 8b 7c 24 18 83
 *     0010: fe 1c 0f 87 9e 00 00 00
 *     0018: 74 75 83 fe 05 74 36 83
 *     0020: fe 10 74 12 83 fe 14 0f
 *     0028: 85 d4 00 00 00 5f 8d 46
 *     0030: ed 5e 5b c2 10 00 a1 78
 *     0038: ee 4c 00 25 ff fe ff ff
 *     0040: 5f 0d 80 00 00 00 5e a3
 *     0048: 78 ee 4c 00 b8 01 00 00
 *     0050: 00 5b c2 10 00 8b 0d 28
 *     0058: f4 4c 00 f6 c1 01 0f 84
 *     0060: 9d 00 00 00 8b c7 83 e8
 *     0068: 02 0f 85 92 00 00 00 8b
 *     0070: 54 24 1c 52 57 83 e1 f3
 *     0078: 56 83 c9 02 53 89 0d 28
 *     0080: f4 4c 00 ff 15 60 82 49
 *     0088: 00 5f 5e 5b c2 10 00 8b
 *     0090: 54 24 1c 33 c9 85 ff 52
 *     0098: 0f 94 c1 57 56 53 89 3d
 *     00a0: fc f3 4c 00 89 0d 00 f4
 *     00a8: 4c 00 ff 15 60 82 49 00
 *     00b0: 5f 5e 5b c2 10 00 83 fe
 *     00b8: 20 74 5a 81 fe 12 01 00
 *     00c0: 00 74 23 81 fe 01 02 00
 *     00c8: 00 75 36 53 ff 15 34 82
 *     00d0: 49 00 8b 54 24 1c 52 57
 *     00d8: 56 53 ff 15 60 82 49 00
 *     00e0: 5f 5e 5b c2 10 00 8b c7
 *     00e8: 25 f0 ff 00 00 2d 90 f0
 *     00f0: 00 00 0f 84 9f 00 00 00
 *     00f8: 83 e8 70 0f 84 96 00 00
 *     0100: 00 8b 54 24 1c 52 57 56
 *     0108: 53 ff 15 60 82 49 00 5f
 *     0110: 5e 5b c2 10 00 83 3d fc
 *     0118: e9 4c 00 00 75 5d 83 3d
 *     0120: 00 f4 4c 00 00 74 2d 68
 *     0128: 00 7f 00 00 6a 00 ff 15
 *     0130: 7c 82 49 00 50 ff 15 2c
 *     0138: 82 49 00 8b 35 40 82 49
 *     0140: 00 6a 01 ff d6 85 c0 7c
 *     0148: f8 5f 5e b8 01 00 00 00
 *     0150: 5b c2 10 00 8b 35 40 82
 *     0158: 49 00 8d 9b 00 00 00 00
 *     0160: 6a 00 ff d6 85 c0 7d f8
 *     0168: 6a 00 ff 15 2c 82 49 00
 *     0170: 5f 5e b8 01 00 00 00 5b
 *     0178: c2 10 00 68 00 7f 00 00
 *     0180: 6a 00 ff 15 7c 82 49 00
 *     0188: 50 ff 15 2c 82 49 00 6a
 *     0190: 01 ff 15 40 82 49 00 5f
 *     0198: 5e b8 01 00 00 00 5b c2
 *     01a0: 10 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

LRESULT __stdcall FUN_0044fe00(HWND a0, uint a1, uint a2, LPARAM a3)
{
  __asm {
    _emit 0x53
    _emit 0x8B
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0x56
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x10
    _emit 0x57
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x18
    _emit 0x83
    _emit 0xFE
    _emit 0x1C
    _emit 0x0F
    _emit 0x87
    _emit 0x9E
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x75
    _emit 0x83
    _emit 0xFE
    _emit 0x05
    _emit 0x74
    _emit 0x36
    _emit 0x83
    _emit 0xFE
    _emit 0x10
    _emit 0x74
    _emit 0x12
    _emit 0x83
    _emit 0xFE
    _emit 0x14
    _emit 0x0F
    _emit 0x85
    _emit 0xD4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x8D
    _emit 0x46
    _emit 0xED
    _emit 0x5E
    _emit 0x5B
    _emit 0xC2
    _emit 0x10
    _emit 0x00
    _emit 0xA1
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x25
    _emit 0xFF
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x0D
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0xA3
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0xC2
    _emit 0x10
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x28
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0xF6
    _emit 0xC1
    _emit 0x01
    _emit 0x0F
    _emit 0x84
    _emit 0x9D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC7
    _emit 0x83
    _emit 0xE8
    _emit 0x02
    _emit 0x0F
    _emit 0x85
    _emit 0x92
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x52
    _emit 0x57
    _emit 0x83
    _emit 0xE1
    _emit 0xF3
    _emit 0x56
    _emit 0x83
    _emit 0xC9
    _emit 0x02
    _emit 0x53
    _emit 0x89
    _emit 0x0D
    _emit 0x28
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x60
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC2
    _emit 0x10
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x33
    _emit 0xC9
    _emit 0x85
    _emit 0xFF
    _emit 0x52
    _emit 0x0F
    _emit 0x94
    _emit 0xC1
    _emit 0x57
    _emit 0x56
    _emit 0x53
    _emit 0x89
    _emit 0x3D
    _emit 0xFC
    _emit 0xF3
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x60
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC2
    _emit 0x10
    _emit 0x00
    _emit 0x83
    _emit 0xFE
    _emit 0x20
    _emit 0x74
    _emit 0x5A
    _emit 0x81
    _emit 0xFE
    _emit 0x12
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x23
    _emit 0x81
    _emit 0xFE
    _emit 0x01
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x36
    _emit 0x53
    _emit 0xFF
    _emit 0x15
    _emit 0x34
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x52
    _emit 0x57
    _emit 0x56
    _emit 0x53
    _emit 0xFF
    _emit 0x15
    _emit 0x60
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC2
    _emit 0x10
    _emit 0x00
    _emit 0x8B
    _emit 0xC7
    _emit 0x25
    _emit 0xF0
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0x2D
    _emit 0x90
    _emit 0xF0
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x9F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xE8
    _emit 0x70
    _emit 0x0F
    _emit 0x84
    _emit 0x96
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x52
    _emit 0x57
    _emit 0x56
    _emit 0x53
    _emit 0xFF
    _emit 0x15
    _emit 0x60
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC2
    _emit 0x10
    _emit 0x00
    _emit 0x83
    _emit 0x3D
    _emit 0xFC
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x5D
    _emit 0x83
    _emit 0x3D
    _emit 0x00
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x2D
    _emit 0x68
    _emit 0x00
    _emit 0x7F
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x7C
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0x2C
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0x40
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0xFF
    _emit 0xD6
    _emit 0x85
    _emit 0xC0
    _emit 0x7C
    _emit 0xF8
    _emit 0x5F
    _emit 0x5E
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0xC2
    _emit 0x10
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0x40
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x8D
    _emit 0x9B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0xD6
    _emit 0x85
    _emit 0xC0
    _emit 0x7D
    _emit 0xF8
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x2C
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0xC2
    _emit 0x10
    _emit 0x00
    _emit 0x68
    _emit 0x00
    _emit 0x7F
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x7C
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0x2C
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0xFF
    _emit 0x15
    _emit 0x40
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0xC2
    _emit 0x10
    _emit 0x00
  }
  __assume(0);
}
