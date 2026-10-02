/* Byte-for-byte override for FUN_0043dc30.

 * Original bytes (273):
 *     0000: 6a ff 68 0b 70 49 00 64
 *     0008: a1 00 00 00 00 50 53 55
 *     0010: 56 57 a1 38 d1 4a 00 33
 *     0018: c4 50 8d 44 24 14 64 a3
 *     0020: 00 00 00 00 8b 5c 24 24
 *     0028: c7 44 24 1c 00 00 00 00
 *     0030: 8b 73 08 8b 3d 9c e8 4c
 *     0038: 00 8b 2d 88 80 49 00 85
 *     0040: f6 74 3f f7 05 78 ee 4c
 *     0048: 00 00 80 00 00 74 0d 68
 *     0050: f8 f0 4c 00 ff d5 fe 05
 *     0058: 18 f2 4c 00 8b ce 8b d7
 *     0060: e8 fb 4b 02 00 f7 05 78
 *     0068: ee 4c 00 00 80 00 00 74
 *     0070: 11 68 f8 f0 4c 00 ff 15
 *     0078: 8c 80 49 00 fe 0d 18 f2
 *     0080: 4c 00 8b 73 0c 8b 3d 9c
 *     0088: e8 4c 00 85 f6 74 3f f7
 *     0090: 05 78 ee 4c 00 00 80 00
 *     0098: 00 74 0d 68 f8 f0 4c 00
 *     00a0: ff d5 fe 05 18 f2 4c 00
 *     00a8: 8b ce 8b d7 e8 af 4b 02
 *     00b0: 00 f7 05 78 ee 4c 00 00
 *     00b8: 80 00 00 74 11 68 f8 f0
 *     00c0: 4c 00 ff 15 8c 80 49 00
 *     00c8: fe 0d 18 f2 4c 00 8b 83
 *     00d0: 90 04 00 00 33 c9 89 0d
 *     00d8: 24 45 4b 00 3b c1 74 15
 *     00e0: 50 e8 2b ec 02 00 83 c4
 *     00e8: 04 c7 83 90 04 00 00 00
 *     00f0: 00 00 00 eb 06 89 8b 90
 *     00f8: 04 00 00 8b 4c 24 14 64
 *     0100: 89 0d 00 00 00 00 59 5f
 *     0108: 5e 5d 5b 83 c4 0c c2 04
 *     0110: 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0043dc30(int a0)
{
  __asm {
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0x0B
    _emit 0x70
    _emit 0x49
    _emit 0x00
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x57
    _emit 0xA1
    _emit 0x38
    _emit 0xD1
    _emit 0x4A
    _emit 0x00
    _emit 0x33
    _emit 0xC4
    _emit 0x50
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x5C
    _emit 0x24
    _emit 0x24
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x73
    _emit 0x08
    _emit 0x8B
    _emit 0x3D
    _emit 0x9C
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x2D
    _emit 0x88
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x3F
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
    _emit 0x0D
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xD5
    _emit 0xFE
    _emit 0x05
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xCE
    _emit 0x8B
    _emit 0xD7
    _emit 0xE8
    _emit 0xFB
    _emit 0x4B
    _emit 0x02
    _emit 0x00
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
    _emit 0x8C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xFE
    _emit 0x0D
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x73
    _emit 0x0C
    _emit 0x8B
    _emit 0x3D
    _emit 0x9C
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x3F
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
    _emit 0x0D
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xD5
    _emit 0xFE
    _emit 0x05
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xCE
    _emit 0x8B
    _emit 0xD7
    _emit 0xE8
    _emit 0xAF
    _emit 0x4B
    _emit 0x02
    _emit 0x00
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
    _emit 0x8C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xFE
    _emit 0x0D
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x83
    _emit 0x90
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0x89
    _emit 0x0D
    _emit 0x24
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xC1
    _emit 0x74
    _emit 0x15
    _emit 0x50
    _emit 0xE8
    _emit 0x2B
    _emit 0xEC
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xC7
    _emit 0x83
    _emit 0x90
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x06
    _emit 0x89
    _emit 0x8B
    _emit 0x90
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
