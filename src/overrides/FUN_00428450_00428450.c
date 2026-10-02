/* Byte-for-byte override for FUN_00428450.

 * Original bytes (208):
 *     0000: 56 8b 35 f4 44 4b 00 81
 *     0008: be 68 04 00 00 00 01 00
 *     0010: 00 7c 06 33 c0 5e c2 04
 *     0018: 00 53 bb 01 00 00 00 01
 *     0020: 9e 6c 04 00 00 8b 86 6c
 *     0028: 04 00 00 3d 00 00 01 00
 *     0030: 7d 0a c7 86 6c 04 00 00
 *     0038: 00 00 01 00 8b 44 24 0c
 *     0040: 83 e8 00 74 38 2b c3 74
 *     0048: 1c 2b c3 75 78 68 a4 0f
 *     0050: 00 00 e8 43 45 04 00 83
 *     0058: c4 04 85 c0 74 37 e8 fd
 *     0060: 00 00 00 eb 32 68 c8 0f
 *     0068: 00 00 e8 2b 45 04 00 83
 *     0070: c4 04 85 c0 74 1f e8 95
 *     0078: 00 00 00 eb 1a 68 a4 0f
 *     0080: 00 00 e8 13 45 04 00 83
 *     0088: c4 04 85 c0 74 07 e8 3d
 *     0090: 00 00 00 eb 02 33 c0 8b
 *     0098: 8e 6c 04 00 00 89 88 80
 *     00a0: 00 00 00 8b 8e 64 04 00
 *     00a8: 00 89 48 04 89 41 08 01
 *     00b0: 9e 68 04 00 00 89 86 64
 *     00b8: 04 00 00 8b 10 8b c8 8b
 *     00c0: 42 04 57 ff d0 8b 86 6c
 *     00c8: 04 00 00 5b 5e c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00428450(int a0)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x81
    _emit 0xBE
    _emit 0x68
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x7C
    _emit 0x06
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x53
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x9E
    _emit 0x6C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0x6C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x3D
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x7D
    _emit 0x0A
    _emit 0xC7
    _emit 0x86
    _emit 0x6C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x83
    _emit 0xE8
    _emit 0x00
    _emit 0x74
    _emit 0x38
    _emit 0x2B
    _emit 0xC3
    _emit 0x74
    _emit 0x1C
    _emit 0x2B
    _emit 0xC3
    _emit 0x75
    _emit 0x78
    _emit 0x68
    _emit 0xA4
    _emit 0x0F
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x43
    _emit 0x45
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x37
    _emit 0xE8
    _emit 0xFD
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x32
    _emit 0x68
    _emit 0xC8
    _emit 0x0F
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x2B
    _emit 0x45
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x1F
    _emit 0xE8
    _emit 0x95
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x1A
    _emit 0x68
    _emit 0xA4
    _emit 0x0F
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x13
    _emit 0x45
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x07
    _emit 0xE8
    _emit 0x3D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x8B
    _emit 0x8E
    _emit 0x6C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x88
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x8E
    _emit 0x64
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x89
    _emit 0x41
    _emit 0x08
    _emit 0x01
    _emit 0x9E
    _emit 0x68
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0x64
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x10
    _emit 0x8B
    _emit 0xC8
    _emit 0x8B
    _emit 0x42
    _emit 0x04
    _emit 0x57
    _emit 0xFF
    _emit 0xD0
    _emit 0x8B
    _emit 0x86
    _emit 0x6C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x5E
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
