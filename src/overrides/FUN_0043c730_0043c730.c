/* Byte-for-byte override for FUN_0043c730.

 * Original bytes (396):
 *     0000: 53 56 8b 35 18 45 4b 00
 *     0008: 8b 46 10 57 33 ff 3b c7
 *     0010: 75 6d 68 a0 00 00 00 e8
 *     0018: 9e 02 03 00 8b d8 83 c4
 *     0020: 04 3b df 74 11 68 a0 00
 *     0028: 00 00 57 53 e8 bf ac 03
 *     0030: 00 83 c4 0c eb 02 33 db
 *     0038: a1 b0 0c 4b 00 89 5c 86
 *     0040: 20 8b 0d b0 0c 4b 00 8b
 *     0048: 44 8e 20 66 8b 15 68 e5
 *     0050: 4c 00 66 89 50 02 66 8b
 *     0058: 0d b0 0c 4b 00 89 3d 6c
 *     0060: e5 4c 00 8b 90 9c 00 00
 *     0068: 00 66 89 08 33 15 4c ee
 *     0070: 4c 00 83 e2 01 31 90 9c
 *     0078: 00 00 00 5f 5e 5b c3 83
 *     0080: f8 01 0f 85 00 01 00 00
 *     0088: a1 b0 0c 4b 00 8d 04 c0
 *     0090: 8b 8c 86 a8 00 00 00 8b
 *     0098: 94 86 b0 00 00 00 8b 9c
 *     00a0: 86 b8 00 00 00 8d 84 86
 *     00a8: a8 00 00 00 89 48 04 89
 *     00b0: 50 0c c7 40 14 ff ff ff
 *     00b8: ff 66 8b 43 02 66 a3 68
 *     00c0: e5 4c 00 89 3d 6c e5 4c
 *     00c8: 00 8b 4b 0c 89 0d 44 0c
 *     00d0: 4b 00 0f bf 43 10 8b 0d
 *     00d8: d0 0c 4b 00 3b c1 a3 48
 *     00e0: 0c 4b 00 7f 0a 8b 0d d4
 *     00e8: 0c 4b 00 3b c1 7d 06 89
 *     00f0: 0d 48 0c 4b 00 8b 53 14
 *     00f8: 89 15 78 0c 4b 00 0f bf
 *     0100: 43 18 a3 98 0c 4b 00 0f
 *     0108: bf 4b 1a 89 0d 9c 0c 4b
 *     0110: 00 8b 53 2c 89 15 cc 0c
 *     0118: 4b 00 8b 43 38 a3 c4 0c
 *     0120: 4b 00 a1 b0 0c 4b 00 8d
 *     0128: 0c c0 8b 94 8e b8 00 00
 *     0130: 00 8b 42 3c a3 d8 0c 4b
 *     0138: 00 0f bf 4b 1c 89 0d a0
 *     0140: 0c 4b 00 0f bf 53 1e 89
 *     0148: 15 a4 0c 4b 00 89 3d 54
 *     0150: 0c 4b 00 89 3d 50 0c 4b
 *     0158: 00 89 3d 4c 0c 4b 00 89
 *     0160: 3d 58 0c 4b 00 89 3d 5c
 *     0168: 0c 4b 00 8b 7b 20 be 4c
 *     0170: 0c 4b 00 e8 d8 65 fe ff
 *     0178: 8b 7b 24 e8 d0 65 fe ff
 *     0180: 8b 7b 28 e8 c8 65 fe ff
 *     0188: 5f 5e 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0043c730(void)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0x18
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x10
    _emit 0x57
    _emit 0x33
    _emit 0xFF
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x6D
    _emit 0x68
    _emit 0xA0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x9E
    _emit 0x02
    _emit 0x03
    _emit 0x00
    _emit 0x8B
    _emit 0xD8
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xDF
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0xA0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x53
    _emit 0xE8
    _emit 0xBF
    _emit 0xAC
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xDB
    _emit 0xA1
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x5C
    _emit 0x86
    _emit 0x20
    _emit 0x8B
    _emit 0x0D
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x8E
    _emit 0x20
    _emit 0x66
    _emit 0x8B
    _emit 0x15
    _emit 0x68
    _emit 0xE5
    _emit 0x4C
    _emit 0x00
    _emit 0x66
    _emit 0x89
    _emit 0x50
    _emit 0x02
    _emit 0x66
    _emit 0x8B
    _emit 0x0D
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x6C
    _emit 0xE5
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x90
    _emit 0x9C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x89
    _emit 0x08
    _emit 0x33
    _emit 0x15
    _emit 0x4C
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x83
    _emit 0xE2
    _emit 0x01
    _emit 0x31
    _emit 0x90
    _emit 0x9C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
    _emit 0x83
    _emit 0xF8
    _emit 0x01
    _emit 0x0F
    _emit 0x85
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0xC0
    _emit 0x8B
    _emit 0x8C
    _emit 0x86
    _emit 0xA8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x94
    _emit 0x86
    _emit 0xB0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x9C
    _emit 0x86
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x84
    _emit 0x86
    _emit 0xA8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x89
    _emit 0x50
    _emit 0x0C
    _emit 0xC7
    _emit 0x40
    _emit 0x14
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x66
    _emit 0x8B
    _emit 0x43
    _emit 0x02
    _emit 0x66
    _emit 0xA3
    _emit 0x68
    _emit 0xE5
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x6C
    _emit 0xE5
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x4B
    _emit 0x0C
    _emit 0x89
    _emit 0x0D
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0xBF
    _emit 0x43
    _emit 0x10
    _emit 0x8B
    _emit 0x0D
    _emit 0xD0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xC1
    _emit 0xA3
    _emit 0x48
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x7F
    _emit 0x0A
    _emit 0x8B
    _emit 0x0D
    _emit 0xD4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xC1
    _emit 0x7D
    _emit 0x06
    _emit 0x89
    _emit 0x0D
    _emit 0x48
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x53
    _emit 0x14
    _emit 0x89
    _emit 0x15
    _emit 0x78
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0xBF
    _emit 0x43
    _emit 0x18
    _emit 0xA3
    _emit 0x98
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0xBF
    _emit 0x4B
    _emit 0x1A
    _emit 0x89
    _emit 0x0D
    _emit 0x9C
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x53
    _emit 0x2C
    _emit 0x89
    _emit 0x15
    _emit 0xCC
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x43
    _emit 0x38
    _emit 0xA3
    _emit 0xC4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xA1
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x0C
    _emit 0xC0
    _emit 0x8B
    _emit 0x94
    _emit 0x8E
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x42
    _emit 0x3C
    _emit 0xA3
    _emit 0xD8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0xBF
    _emit 0x4B
    _emit 0x1C
    _emit 0x89
    _emit 0x0D
    _emit 0xA0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0xBF
    _emit 0x53
    _emit 0x1E
    _emit 0x89
    _emit 0x15
    _emit 0xA4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x54
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x50
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x4C
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x58
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x5C
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x7B
    _emit 0x20
    _emit 0xBE
    _emit 0x4C
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xD8
    _emit 0x65
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x7B
    _emit 0x24
    _emit 0xE8
    _emit 0xD0
    _emit 0x65
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x7B
    _emit 0x28
    _emit 0xE8
    _emit 0xC8
    _emit 0x65
    _emit 0xFE
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
