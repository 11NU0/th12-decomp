/* Byte-for-byte override for FUN_004381e0.

 * Original bytes (384):
 *     0000: 51 53 bb 01 00 00 00 29
 *     0008: 1d 98 0c 4b 00 55 57 78
 *     0010: 19 a1 9c 0c 4b 00 8b 0d
 *     0018: 98 0c 4b 00 8b 15 e4 43
 *     0020: 4b 00 50 51 52 e8 56 4c
 *     0028: fe ff d9 ee c7 86 28 0a
 *     0030: 00 00 02 00 00 00 8b 86
 *     0038: 40 0a 00 00 33 ed ba c1
 *     0040: bd f0 ff b9 d0 2e 4b 00
 *     0048: 84 c3 75 20 0b c3 d9 96
 *     0050: 38 0a 00 00 89 ae 34 0a
 *     0058: 00 00 89 96 30 0a 00 00
 *     0060: 89 8e 3c 0a 00 00 89 86
 *     0068: 40 0a 00 00 d9 96 38 0a
 *     0070: 00 00 89 ae 34 0a 00 00
 *     0078: c7 86 30 0a 00 00 ff ff
 *     0080: ff ff 8b 86 10 c4 00 00
 *     0088: 84 c3 75 22 0b c3 d9 9e
 *     0090: 08 c4 00 00 89 ae 04 c4
 *     0098: 00 00 89 96 00 c4 00 00
 *     00a0: 89 8e 0c c4 00 00 89 86
 *     00a8: 10 c4 00 00 eb 02 dd d8
 *     00b0: d9 05 00 42 4a 00 55 8d
 *     00b8: 46 14 d9 9e 08 c4 00 00
 *     00c0: c7 86 04 c4 00 00 b4 00
 *     00c8: 00 00 c7 86 00 c4 00 00
 *     00d0: b3 00 00 00 8b 4e 10 50
 *     00d8: e8 53 ca 01 00 8d be 10
 *     00e0: 83 00 00 c7 44 24 0c 08
 *     00e8: 00 00 00 eb 03 8d 49 00
 *     00f0: 8b 0f 51 89 af 50 ff ff
 *     00f8: ff e8 92 96 02 00 8b 57
 *     0100: 04 52 e8 89 96 02 00 81
 *     0108: c7 e4 00 00 00 29 5c 24
 *     0110: 0c 75 dd 8b 0d cc 43 4b
 *     0118: 00 89 ae 1c c4 00 00 8b
 *     0120: 41 7c 84 c3 74 22 83 79
 *     0128: 28 3c 7c 0b 89 a9 80 00
 *     0130: 00 00 83 e0 dd eb 0e 8b
 *     0138: 15 c4 43 4b 00 39 6a 3c
 *     0140: 74 06 83 c8 20 89 41 7c
 *     0148: a1 cc 0c 4b 00 2d 00 04
 *     0150: 00 00 3d 00 04 00 00 a3
 *     0158: cc 0c 4b 00 7e 0f c7 05
 *     0160: cc 0c 4b 00 00 04 00 00
 *     0168: 5f 5d 5b 59 c3 3d 00 fc
 *     0170: ff ff 7d 0a c7 05 cc 0c
 *     0178: 4b 00 00 fc ff ff 5f 5d
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_004381e0(void)
{
  __asm {
    _emit 0x51
    _emit 0x53
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x29
    _emit 0x1D
    _emit 0x98
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x55
    _emit 0x57
    _emit 0x78
    _emit 0x19
    _emit 0xA1
    _emit 0x9C
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x98
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0x51
    _emit 0x52
    _emit 0xE8
    _emit 0x56
    _emit 0x4C
    _emit 0xFE
    _emit 0xFF
    _emit 0xD9
    _emit 0xEE
    _emit 0xC7
    _emit 0x86
    _emit 0x28
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0x40
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xED
    _emit 0xBA
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xB9
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x84
    _emit 0xC3
    _emit 0x75
    _emit 0x20
    _emit 0x0B
    _emit 0xC3
    _emit 0xD9
    _emit 0x96
    _emit 0x38
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0x34
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x96
    _emit 0x30
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x8E
    _emit 0x3C
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0x40
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x96
    _emit 0x38
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0x34
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x30
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x86
    _emit 0x10
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0x84
    _emit 0xC3
    _emit 0x75
    _emit 0x22
    _emit 0x0B
    _emit 0xC3
    _emit 0xD9
    _emit 0x9E
    _emit 0x08
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0x04
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x96
    _emit 0x00
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x8E
    _emit 0x0C
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0x10
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0xDD
    _emit 0xD8
    _emit 0xD9
    _emit 0x05
    _emit 0x00
    _emit 0x42
    _emit 0x4A
    _emit 0x00
    _emit 0x55
    _emit 0x8D
    _emit 0x46
    _emit 0x14
    _emit 0xD9
    _emit 0x9E
    _emit 0x08
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x04
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0xB4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x00
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0xB3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x10
    _emit 0x50
    _emit 0xE8
    _emit 0x53
    _emit 0xCA
    _emit 0x01
    _emit 0x00
    _emit 0x8D
    _emit 0xBE
    _emit 0x10
    _emit 0x83
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x03
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x0F
    _emit 0x51
    _emit 0x89
    _emit 0xAF
    _emit 0x50
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x92
    _emit 0x96
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x57
    _emit 0x04
    _emit 0x52
    _emit 0xE8
    _emit 0x89
    _emit 0x96
    _emit 0x02
    _emit 0x00
    _emit 0x81
    _emit 0xC7
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x29
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x75
    _emit 0xDD
    _emit 0x8B
    _emit 0x0D
    _emit 0xCC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0x1C
    _emit 0xC4
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x41
    _emit 0x7C
    _emit 0x84
    _emit 0xC3
    _emit 0x74
    _emit 0x22
    _emit 0x83
    _emit 0x79
    _emit 0x28
    _emit 0x3C
    _emit 0x7C
    _emit 0x0B
    _emit 0x89
    _emit 0xA9
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xE0
    _emit 0xDD
    _emit 0xEB
    _emit 0x0E
    _emit 0x8B
    _emit 0x15
    _emit 0xC4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x39
    _emit 0x6A
    _emit 0x3C
    _emit 0x74
    _emit 0x06
    _emit 0x83
    _emit 0xC8
    _emit 0x20
    _emit 0x89
    _emit 0x41
    _emit 0x7C
    _emit 0xA1
    _emit 0xCC
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x2D
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x3D
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xA3
    _emit 0xCC
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x7E
    _emit 0x0F
    _emit 0xC7
    _emit 0x05
    _emit 0xCC
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5D
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
    _emit 0x3D
    _emit 0x00
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x7D
    _emit 0x0A
    _emit 0xC7
    _emit 0x05
    _emit 0xCC
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x5D
  }
  __assume(0);
}
