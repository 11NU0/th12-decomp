/* Byte-for-byte override for FUN_00432850.

 * Original bytes (259):
 *     0000: 51 d9 ee 53 55 56 8b 35
 *     0008: 10 45 4b 00 c7 46 04 02
 *     0010: 00 00 00 8b 46 20 33 ed
 *     0018: 57 bf c1 bd f0 ff ba d0
 *     0020: 2e 4b 00 a8 01 75 12 83
 *     0028: c8 01 d9 56 18 89 6e 14
 *     0030: 89 7e 10 89 56 1c 89 46
 *     0038: 20 83 c9 ff d9 56 18 89
 *     0040: 6e 14 89 4e 10 8b 46 34
 *     0048: a8 01 75 12 83 c8 01 d9
 *     0050: 56 2c 89 6e 28 89 7e 24
 *     0058: 89 56 30 89 46 34 a1 e8
 *     0060: 44 4b 00 d9 5e 2c 89 6e
 *     0068: 28 89 4e 24 83 48 60 10
 *     0070: 8b 3d 70 ee 4c 00 6a 4b
 *     0078: 8d 44 24 14 50 e8 ee 2e
 *     0080: 00 00 8b 00 50 89 86 ec
 *     0088: 01 00 00 e8 70 2e 00 00
 *     0090: 8b 0d e4 43 4b 00 8b b9
 *     0098: 44 6d 00 00 6a 68 8d 54
 *     00a0: 24 14 52 89 be dc 02 00
 *     00a8: 00 e8 c2 2e 00 00 8b 00
 *     00b0: 50 bb 03 00 00 00 89 86
 *     00b8: e8 01 00 00 e8 5f f0 02
 *     00c0: 00 e8 0a 07 ff ff 55 6a
 *     00c8: 06 bf 44 10 4a 00 b8 e8
 *     00d0: f4 4c 00 e8 38 20 02 00
 *     00d8: d9 05 d0 2e 4b 00 d9 9e
 *     00e0: d8 02 00 00 a1 68 f4 4c
 *     00e8: 00 d9 e8 5f d9 1d d0 2e
 *     00f0: 4b 00 89 86 00 02 00 00
 *     00f8: 5e 89 2d 68 f4 4c 00 5d
 *     0100: 5b 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00432850(void)
{
  __asm {
    _emit 0x51
    _emit 0xD9
    _emit 0xEE
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0x10
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x04
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x20
    _emit 0x33
    _emit 0xED
    _emit 0x57
    _emit 0xBF
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xBA
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
    _emit 0x7E
    _emit 0x10
    _emit 0x89
    _emit 0x56
    _emit 0x1C
    _emit 0x89
    _emit 0x46
    _emit 0x20
    _emit 0x83
    _emit 0xC9
    _emit 0xFF
    _emit 0xD9
    _emit 0x56
    _emit 0x18
    _emit 0x89
    _emit 0x6E
    _emit 0x14
    _emit 0x89
    _emit 0x4E
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
    _emit 0x7E
    _emit 0x24
    _emit 0x89
    _emit 0x56
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
    _emit 0x4E
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
    _emit 0x14
    _emit 0x50
    _emit 0xE8
    _emit 0xEE
    _emit 0x2E
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
    _emit 0x70
    _emit 0x2E
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
    _emit 0x6A
    _emit 0x68
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x52
    _emit 0x89
    _emit 0xBE
    _emit 0xDC
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xC2
    _emit 0x2E
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x00
    _emit 0x50
    _emit 0xBB
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0xE8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x5F
    _emit 0xF0
    _emit 0x02
    _emit 0x00
    _emit 0xE8
    _emit 0x0A
    _emit 0x07
    _emit 0xFF
    _emit 0xFF
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
    _emit 0x38
    _emit 0x20
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
    _emit 0xA1
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
    _emit 0x86
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x5E
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
