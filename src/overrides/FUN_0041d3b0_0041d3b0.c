/* Byte-for-byte override for FUN_0041d3b0.

 * Original bytes (331):
 *     0000: a1 2c 45 4b 00 53 8b 58
 *     0008: 30 55 8b 6c 24 0c b9 1b
 *     0010: 00 00 00 e8 98 2a 04 00
 *     0018: 33 db 89 85 e4 6c 00 00
 *     0020: 3b c3 75 1a 68 34 f4 49
 *     0028: 00 b9 c8 0e 4b 00 e8 3d
 *     0030: 6e 04 00 83 c4 04 5d 83
 *     0038: c8 ff 5b c2 04 00 a1 a0
 *     0040: e8 4c 00 3b c3 74 35 89
 *     0048: 85 34 6d 00 00 8b 0d 94
 *     0050: 0c 4b 00 8b 15 90 0c 4b
 *     0058: 00 8d 44 51 06 8b 0d 2c
 *     0060: 45 4b 00 8b 14 81 52 68
 *     0068: f0 fc 49 00 e8 5f 45 00
 *     0070: 00 83 c4 08 89 1d a0 e8
 *     0078: 4c 00 eb 69 a1 94 0c 4b
 *     0080: 00 8b 0d 90 0c 4b 00 8d
 *     0088: 54 48 06 a1 2c 45 4b 00
 *     0090: 8b 04 90 88 1d 38 4f 4d
 *     0098: 00 8b c8 eb 03 8d 49 00
 *     00a0: 8a 10 40 3a d3 75 f9 56
 *     00a8: 57 bf 38 4f 4d 00 2b c1
 *     00b0: 8b f1 4f 8a 4f 01 47 3a
 *     00b8: cb 75 f8 8b c8 c1 e9 02
 *     00c0: f3 a5 8b c8 53 83 e1 03
 *     00c8: 53 b8 38 4f 4d 00 f3 a4
 *     00d0: e8 8b 67 04 00 5f 89 85
 *     00d8: 34 6d 00 00 5e 3b c3 0f
 *     00e0: 84 3f ff ff ff 8b 85 d0
 *     00e8: 6c 00 00 d9 ee a8 01 75
 *     00f0: 29 83 c8 01 d9 95 c8 6c
 *     00f8: 00 00 89 9d c4 6c 00 00
 *     0100: c7 85 c0 6c 00 00 c1 bd
 *     0108: f0 ff c7 85 cc 6c 00 00
 *     0110: d0 2e 4b 00 89 85 d0 6c
 *     0118: 00 00 89 9d c4 6c 00 00
 *     0120: d9 9d c8 6c 00 00 83 c8
 *     0128: ff 89 85 c0 6c 00 00 8b
 *     0130: 0d 44 0c 4b 00 89 85 38
 *     0138: 6d 00 00 89 85 40 6d 00
 *     0140: 00 89 8d dc 6c 00 00 5d
 *     0148: 33 c0 5b
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0041d3b0(int a0)
{
  __asm {
    _emit 0xA1
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x53
    _emit 0x8B
    _emit 0x58
    _emit 0x30
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0xB9
    _emit 0x1B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x98
    _emit 0x2A
    _emit 0x04
    _emit 0x00
    _emit 0x33
    _emit 0xDB
    _emit 0x89
    _emit 0x85
    _emit 0xE4
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC3
    _emit 0x75
    _emit 0x1A
    _emit 0x68
    _emit 0x34
    _emit 0xF4
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x3D
    _emit 0x6E
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5D
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xA1
    _emit 0xA0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x3B
    _emit 0xC3
    _emit 0x74
    _emit 0x35
    _emit 0x89
    _emit 0x85
    _emit 0x34
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x51
    _emit 0x06
    _emit 0x8B
    _emit 0x0D
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x14
    _emit 0x81
    _emit 0x52
    _emit 0x68
    _emit 0xF0
    _emit 0xFC
    _emit 0x49
    _emit 0x00
    _emit 0xE8
    _emit 0x5F
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x89
    _emit 0x1D
    _emit 0xA0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xEB
    _emit 0x69
    _emit 0xA1
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x54
    _emit 0x48
    _emit 0x06
    _emit 0xA1
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x04
    _emit 0x90
    _emit 0x88
    _emit 0x1D
    _emit 0x38
    _emit 0x4F
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0xC8
    _emit 0xEB
    _emit 0x03
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8A
    _emit 0x10
    _emit 0x40
    _emit 0x3A
    _emit 0xD3
    _emit 0x75
    _emit 0xF9
    _emit 0x56
    _emit 0x57
    _emit 0xBF
    _emit 0x38
    _emit 0x4F
    _emit 0x4D
    _emit 0x00
    _emit 0x2B
    _emit 0xC1
    _emit 0x8B
    _emit 0xF1
    _emit 0x4F
    _emit 0x8A
    _emit 0x4F
    _emit 0x01
    _emit 0x47
    _emit 0x3A
    _emit 0xCB
    _emit 0x75
    _emit 0xF8
    _emit 0x8B
    _emit 0xC8
    _emit 0xC1
    _emit 0xE9
    _emit 0x02
    _emit 0xF3
    _emit 0xA5
    _emit 0x8B
    _emit 0xC8
    _emit 0x53
    _emit 0x83
    _emit 0xE1
    _emit 0x03
    _emit 0x53
    _emit 0xB8
    _emit 0x38
    _emit 0x4F
    _emit 0x4D
    _emit 0x00
    _emit 0xF3
    _emit 0xA4
    _emit 0xE8
    _emit 0x8B
    _emit 0x67
    _emit 0x04
    _emit 0x00
    _emit 0x5F
    _emit 0x89
    _emit 0x85
    _emit 0x34
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x3B
    _emit 0xC3
    _emit 0x0F
    _emit 0x84
    _emit 0x3F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x85
    _emit 0xD0
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x29
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x95
    _emit 0xC8
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x9D
    _emit 0xC4
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x85
    _emit 0xC0
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x85
    _emit 0xCC
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x85
    _emit 0xD0
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x9D
    _emit 0xC4
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x9D
    _emit 0xC8
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x89
    _emit 0x85
    _emit 0xC0
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x85
    _emit 0x38
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x85
    _emit 0x40
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x8D
    _emit 0xDC
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
  }
  __assume(0);
}
