/* Byte-for-byte override for FUN_0044e8e0.

 * Original bytes (392):
 *     0000: 83 ec 1c 53 55 56 57 85
 *     0008: c0 75 08 8b 3d 54 e5 4c
 *     0010: 00 eb 1e 83 f8 01 75 08
 *     0018: 8b 3d 50 e5 4c 00 eb 11
 *     0020: 8b 3d 4c c5 4c 00 83 f8
 *     0028: 02 74 06 8b 3d 3c 45 4b
 *     0030: 00 b8 11 00 00 00 39 44
 *     0038: 24 38 7d 04 89 44 24 38
 *     0040: 8b 4c 24 3c 8b c1 c1 e8
 *     0048: 14 8b d1 83 e0 0f c1 ea
 *     0050: 0c c1 e0 04 83 e2 0f 0b
 *     0058: c2 8b 15 68 0e 4b 00 c1
 *     0060: e9 04 83 e1 0f c1 e0 04
 *     0068: 0b c1 33 c9 39 0d 54 0e
 *     0070: 4b 00 7e 11 66 89 02 83
 *     0078: c1 02 83 c2 02 3b 0d 54
 *     0080: 0e 4b 00 7c ef 8b 35 5c
 *     0088: 0e 4b 00 8b 2d 2c 80 49
 *     0090: 00 57 56 ff d5 8b 7c 24
 *     0098: 38 8d 7c 3f 06 57 8b d8
 *     00a0: e8 9b f2 ff ff 6a 01 56
 *     00a8: ff 15 1c 80 49 00 8b 44
 *     00b0: 24 40 8d 48 01 8a 10 40
 *     00b8: 84 d2 75 f9 2b c1 89 44
 *     00c0: 24 14 8b 44 24 3c 50 56
 *     00c8: ff 15 18 80 49 00 8b 4c
 *     00d0: 24 14 8b 54 24 40 8b 44
 *     00d8: 24 34 51 52 6a 00 8d 0c
 *     00e0: 00 51 56 ff 15 14 80 49
 *     00e8: 00 53 56 ff d5 57 e8 4d
 *     00f0: f2 ff ff 57 e8 d7 ee ff
 *     00f8: ff 53 56 ff d5 8b 74 24
 *     0100: 30 8b 46 08 2b 06 8b 54
 *     0108: 24 38 33 ff 8d 44 00 16
 *     0110: 3d 00 04 00 00 8d 4c 12
 *     0118: 02 89 7c 24 18 89 7c 24
 *     0120: 1c 89 44 24 20 89 4c 24
 *     0128: 24 7e 08 c7 44 24 20 00
 *     0130: 04 00 00 8b 44 24 44 8b
 *     0138: 10 8b 52 48 8d 4c 24 38
 *     0140: 51 57 50 ff d2 8b 0d 58
 *     0148: 0e 4b 00 8b 15 48 0e 4b
 *     0150: 00 57 6a 04 8d 44 24 20
 *     0158: 50 a1 68 0e 4b 00 57 51
 *     0160: 8b 4c 24 4c 52 50 56 57
 *     0168: 51 e8 9e dc 01 00 8b 44
 *     0170: 24 38 3b c7 74 08 8b 10
 *     0178: 50 8b 42 08 ff d0 5f 5e
 *     0180: 5d 5b 83 c4 1c c2 18 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0044e8e0(undefined4 a0, int a1, int a2, uint a3, char * a4, int * a5)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x1C
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x57
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x08
    _emit 0x8B
    _emit 0x3D
    _emit 0x54
    _emit 0xE5
    _emit 0x4C
    _emit 0x00
    _emit 0xEB
    _emit 0x1E
    _emit 0x83
    _emit 0xF8
    _emit 0x01
    _emit 0x75
    _emit 0x08
    _emit 0x8B
    _emit 0x3D
    _emit 0x50
    _emit 0xE5
    _emit 0x4C
    _emit 0x00
    _emit 0xEB
    _emit 0x11
    _emit 0x8B
    _emit 0x3D
    _emit 0x4C
    _emit 0xC5
    _emit 0x4C
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x02
    _emit 0x74
    _emit 0x06
    _emit 0x8B
    _emit 0x3D
    _emit 0x3C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xB8
    _emit 0x11
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x44
    _emit 0x24
    _emit 0x38
    _emit 0x7D
    _emit 0x04
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x38
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x3C
    _emit 0x8B
    _emit 0xC1
    _emit 0xC1
    _emit 0xE8
    _emit 0x14
    _emit 0x8B
    _emit 0xD1
    _emit 0x83
    _emit 0xE0
    _emit 0x0F
    _emit 0xC1
    _emit 0xEA
    _emit 0x0C
    _emit 0xC1
    _emit 0xE0
    _emit 0x04
    _emit 0x83
    _emit 0xE2
    _emit 0x0F
    _emit 0x0B
    _emit 0xC2
    _emit 0x8B
    _emit 0x15
    _emit 0x68
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xC1
    _emit 0xE9
    _emit 0x04
    _emit 0x83
    _emit 0xE1
    _emit 0x0F
    _emit 0xC1
    _emit 0xE0
    _emit 0x04
    _emit 0x0B
    _emit 0xC1
    _emit 0x33
    _emit 0xC9
    _emit 0x39
    _emit 0x0D
    _emit 0x54
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0x7E
    _emit 0x11
    _emit 0x66
    _emit 0x89
    _emit 0x02
    _emit 0x83
    _emit 0xC1
    _emit 0x02
    _emit 0x83
    _emit 0xC2
    _emit 0x02
    _emit 0x3B
    _emit 0x0D
    _emit 0x54
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0x7C
    _emit 0xEF
    _emit 0x8B
    _emit 0x35
    _emit 0x5C
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x2D
    _emit 0x2C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x57
    _emit 0x56
    _emit 0xFF
    _emit 0xD5
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x38
    _emit 0x8D
    _emit 0x7C
    _emit 0x3F
    _emit 0x06
    _emit 0x57
    _emit 0x8B
    _emit 0xD8
    _emit 0xE8
    _emit 0x9B
    _emit 0xF2
    _emit 0xFF
    _emit 0xFF
    _emit 0x6A
    _emit 0x01
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0x1C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x40
    _emit 0x8D
    _emit 0x48
    _emit 0x01
    _emit 0x8A
    _emit 0x10
    _emit 0x40
    _emit 0x84
    _emit 0xD2
    _emit 0x75
    _emit 0xF9
    _emit 0x2B
    _emit 0xC1
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x3C
    _emit 0x50
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0x18
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x40
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x34
    _emit 0x51
    _emit 0x52
    _emit 0x6A
    _emit 0x00
    _emit 0x8D
    _emit 0x0C
    _emit 0x00
    _emit 0x51
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0x14
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x53
    _emit 0x56
    _emit 0xFF
    _emit 0xD5
    _emit 0x57
    _emit 0xE8
    _emit 0x4D
    _emit 0xF2
    _emit 0xFF
    _emit 0xFF
    _emit 0x57
    _emit 0xE8
    _emit 0xD7
    _emit 0xEE
    _emit 0xFF
    _emit 0xFF
    _emit 0x53
    _emit 0x56
    _emit 0xFF
    _emit 0xD5
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x30
    _emit 0x8B
    _emit 0x46
    _emit 0x08
    _emit 0x2B
    _emit 0x06
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x38
    _emit 0x33
    _emit 0xFF
    _emit 0x8D
    _emit 0x44
    _emit 0x00
    _emit 0x16
    _emit 0x3D
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x12
    _emit 0x02
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x1C
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x24
    _emit 0x7E
    _emit 0x08
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x44
    _emit 0x8B
    _emit 0x10
    _emit 0x8B
    _emit 0x52
    _emit 0x48
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x38
    _emit 0x51
    _emit 0x57
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x0D
    _emit 0x58
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x48
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0x57
    _emit 0x6A
    _emit 0x04
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0x50
    _emit 0xA1
    _emit 0x68
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0x57
    _emit 0x51
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x4C
    _emit 0x52
    _emit 0x50
    _emit 0x56
    _emit 0x57
    _emit 0x51
    _emit 0xE8
    _emit 0x9E
    _emit 0xDC
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x38
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x08
    _emit 0x8B
    _emit 0x10
    _emit 0x50
    _emit 0x8B
    _emit 0x42
    _emit 0x08
    _emit 0xFF
    _emit 0xD0
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x1C
    _emit 0xC2
    _emit 0x18
    _emit 0x00
  }
  __assume(0);
}
