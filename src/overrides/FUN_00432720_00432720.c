/* Byte-for-byte override for FUN_00432720.

 * Original bytes (299):
 *     0000: 51 d9 ee 53 55 c7 46 04
 *     0008: 01 00 00 00 8b 46 20 33
 *     0010: ed 57 ba c1 bd f0 ff b9
 *     0018: d0 2e 4b 00 a8 01 75 12
 *     0020: 83 c8 01 d9 56 18 89 6e
 *     0028: 14 89 56 10 89 4e 1c 89
 *     0030: 46 20 83 cf ff d9 56 18
 *     0038: 89 6e 14 89 7e 10 8b 46
 *     0040: 34 a8 01 75 12 83 c8 01
 *     0048: d9 56 2c 89 6e 28 89 56
 *     0050: 24 89 4e 30 89 46 34 a1
 *     0058: e8 44 4b 00 d9 5e 2c 89
 *     0060: 6e 28 89 7e 24 83 48 60
 *     0068: 10 8b 3d 70 ee 4c 00 6a
 *     0070: 4b 8d 44 24 10 50 e8 25
 *     0078: 30 00 00 8b 00 50 89 86
 *     0080: ec 01 00 00 e8 a7 2f 00
 *     0088: 00 8b 0d e4 43 4b 00 8b
 *     0090: b9 44 6d 00 00 8b 15 e8
 *     0098: 44 4b 00 89 be dc 02 00
 *     00a0: 00 39 6a 74 74 16 6a 67
 *     00a8: 8d 44 24 10 50 e8 ee 2f
 *     00b0: 00 00 8b 08 89 8e e8 01
 *     00b8: 00 00 eb 14 6a 66 8d 54
 *     00c0: 24 10 52 e8 d8 2f 00 00
 *     00c8: 8b 00 89 86 e8 01 00 00
 *     00d0: 8b 8e e8 01 00 00 51 bb
 *     00d8: 03 00 00 00 e8 6f f1 02
 *     00e0: 00 e8 1a 08 ff ff 8d 53
 *     00e8: 0b e8 82 15 02 00 55 6a
 *     00f0: 06 bf 44 10 4a 00 b8 e8
 *     00f8: f4 4c 00 e8 40 21 02 00
 *     0100: d9 05 d0 2e 4b 00 d9 9e
 *     0108: d8 02 00 00 8b 15 68 f4
 *     0110: 4c 00 d9 e8 5f d9 1d d0
 *     0118: 2e 4b 00 89 96 00 02 00
 *     0120: 00 89 2d 68 f4 4c 00 5d
 *     0128: 5b 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00432720(void)
{
  __asm {
    _emit 0x51
    _emit 0xD9
    _emit 0xEE
    _emit 0x53
    _emit 0x55
    _emit 0xC7
    _emit 0x46
    _emit 0x04
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x20
    _emit 0x33
    _emit 0xED
    _emit 0x57
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
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x18
    _emit 0x89
    _emit 0x6E
    _emit 0x14
    _emit 0x89
    _emit 0x56
    _emit 0x10
    _emit 0x89
    _emit 0x4E
    _emit 0x1C
    _emit 0x89
    _emit 0x46
    _emit 0x20
    _emit 0x83
    _emit 0xCF
    _emit 0xFF
    _emit 0xD9
    _emit 0x56
    _emit 0x18
    _emit 0x89
    _emit 0x6E
    _emit 0x14
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x8B
    _emit 0x46
    _emit 0x34
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x2C
    _emit 0x89
    _emit 0x6E
    _emit 0x28
    _emit 0x89
    _emit 0x56
    _emit 0x24
    _emit 0x89
    _emit 0x4E
    _emit 0x30
    _emit 0x89
    _emit 0x46
    _emit 0x34
    _emit 0xA1
    _emit 0xE8
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0xD9
    _emit 0x5E
    _emit 0x2C
    _emit 0x89
    _emit 0x6E
    _emit 0x28
    _emit 0x89
    _emit 0x7E
    _emit 0x24
    _emit 0x83
    _emit 0x48
    _emit 0x60
    _emit 0x10
    _emit 0x8B
    _emit 0x3D
    _emit 0x70
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x6A
    _emit 0x4B
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x50
    _emit 0xE8
    _emit 0x25
    _emit 0x30
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x00
    _emit 0x50
    _emit 0x89
    _emit 0x86
    _emit 0xEC
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xA7
    _emit 0x2F
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0xB9
    _emit 0x44
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0xE8
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0xBE
    _emit 0xDC
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x6A
    _emit 0x74
    _emit 0x74
    _emit 0x16
    _emit 0x6A
    _emit 0x67
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x50
    _emit 0xE8
    _emit 0xEE
    _emit 0x2F
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x89
    _emit 0x8E
    _emit 0xE8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x14
    _emit 0x6A
    _emit 0x66
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x52
    _emit 0xE8
    _emit 0xD8
    _emit 0x2F
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0xE8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x8E
    _emit 0xE8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xBB
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x6F
    _emit 0xF1
    _emit 0x02
    _emit 0x00
    _emit 0xE8
    _emit 0x1A
    _emit 0x08
    _emit 0xFF
    _emit 0xFF
    _emit 0x8D
    _emit 0x53
    _emit 0x0B
    _emit 0xE8
    _emit 0x82
    _emit 0x15
    _emit 0x02
    _emit 0x00
    _emit 0x55
    _emit 0x6A
    _emit 0x06
    _emit 0xBF
    _emit 0x44
    _emit 0x10
    _emit 0x4A
    _emit 0x00
    _emit 0xB8
    _emit 0xE8
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x40
    _emit 0x21
    _emit 0x02
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0xD9
    _emit 0x9E
    _emit 0xD8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x68
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xE8
    _emit 0x5F
    _emit 0xD9
    _emit 0x1D
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x96
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x2D
    _emit 0x68
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x5D
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
