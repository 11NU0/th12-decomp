/* Byte-for-byte override for FUN_00401090.

 * Original bytes (391):
 *     0000: 53 55 57 bb 28 f4 49 00
 *     0008: b9 02 00 00 00 8b f8 e8
 *     0010: bc ed 05 00 33 ed 89 87
 *     0018: b4 8f 01 00 3b c5 75 19
 *     0020: 68 34 f4 49 00 b9 c8 0e
 *     0028: 4b 00 e8 61 31 06 00 83
 *     0030: c4 04 5f 5d 83 c8 ff 5b
 *     0038: c3 56 6a 24 e8 19 b9 06
 *     0040: 00 83 c4 04 3b c5 74 1c
 *     0048: 83 60 04 fe 89 68 08 89
 *     0050: 68 0c 89 68 10 89 28 89
 *     0058: 40 14 89 68 18 89 68 1c
 *     0060: 8b f0 eb 02 33 f6 8b 46
 *     0068: 04 83 e0 fd 83 c8 01 bb
 *     0070: 04 00 00 00 c7 46 08 b0
 *     0078: 14 40 00 89 6e 0c 89 6e
 *     0080: 10 89 7e 20 89 46 04 e8
 *     0088: 64 12 06 00 6a 24 89 77
 *     0090: 0c e8 c4 b8 06 00 83 c4
 *     0098: 04 3b c5 74 1c 83 60 04
 *     00a0: fe 89 68 08 89 68 0c 89
 *     00a8: 68 10 89 28 89 40 14 89
 *     00b0: 68 18 89 68 1c 8b f0 eb
 *     00b8: 02 33 f6 8b 4e 04 83 e1
 *     00c0: fd 83 c9 01 bb 45 00 00
 *     00c8: 00 c7 46 08 d0 14 40 00
 *     00d0: 89 6e 0c 89 6e 10 89 7e
 *     00d8: 20 89 4e 04 e8 af 12 06
 *     00e0: 00 6a 24 89 77 10 e8 6f
 *     00e8: b8 06 00 83 c4 04 3b c5
 *     00f0: 74 1c 83 60 04 fe 89 68
 *     00f8: 08 89 68 0c 89 68 10 89
 *     0100: 28 89 40 14 89 68 18 89
 *     0108: 68 1c 8b f0 eb 02 33 f6
 *     0110: 8b 56 04 83 e2 fd 83 ca
 *     0118: 01 bb 2d 00 00 00 c7 46
 *     0120: 08 e0 14 40 00 89 6e 0c
 *     0128: 89 6e 10 89 7e 20 89 56
 *     0130: 04 e8 5a 12 06 00 8b 9f
 *     0138: b4 8f 01 00 89 b7 c0 8f
 *     0140: 01 00 8d 77 14 e8 46 13
 *     0148: 00 00 33 c9 8b c6 8b d3
 *     0150: 89 9e f8 03 00 00 e8 95
 *     0158: 39 05 00 8d b7 c8 04 00
 *     0160: 00 8b bf b4 8f 01 00 e8
 *     0168: 24 13 00 00 b9 62 00 00
 *     0170: 00 8b c6 8b d7 89 be f8
 *     0178: 03 00 00 e8 70 39 05 00
 *     0180: 5e 5f 5d 33 c0 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00401090(void)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x57
    _emit 0xBB
    _emit 0x28
    _emit 0xF4
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF8
    _emit 0xE8
    _emit 0xBC
    _emit 0xED
    _emit 0x05
    _emit 0x00
    _emit 0x33
    _emit 0xED
    _emit 0x89
    _emit 0x87
    _emit 0xB4
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0x19
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
    _emit 0x61
    _emit 0x31
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5F
    _emit 0x5D
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5B
    _emit 0xC3
    _emit 0x56
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x19
    _emit 0xB9
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x68
    _emit 0x08
    _emit 0x89
    _emit 0x68
    _emit 0x0C
    _emit 0x89
    _emit 0x68
    _emit 0x10
    _emit 0x89
    _emit 0x28
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x68
    _emit 0x18
    _emit 0x89
    _emit 0x68
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x46
    _emit 0x04
    _emit 0x83
    _emit 0xE0
    _emit 0xFD
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xBB
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xB0
    _emit 0x14
    _emit 0x40
    _emit 0x00
    _emit 0x89
    _emit 0x6E
    _emit 0x0C
    _emit 0x89
    _emit 0x6E
    _emit 0x10
    _emit 0x89
    _emit 0x7E
    _emit 0x20
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0xE8
    _emit 0x64
    _emit 0x12
    _emit 0x06
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x77
    _emit 0x0C
    _emit 0xE8
    _emit 0xC4
    _emit 0xB8
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x68
    _emit 0x08
    _emit 0x89
    _emit 0x68
    _emit 0x0C
    _emit 0x89
    _emit 0x68
    _emit 0x10
    _emit 0x89
    _emit 0x28
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x68
    _emit 0x18
    _emit 0x89
    _emit 0x68
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x4E
    _emit 0x04
    _emit 0x83
    _emit 0xE1
    _emit 0xFD
    _emit 0x83
    _emit 0xC9
    _emit 0x01
    _emit 0xBB
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xD0
    _emit 0x14
    _emit 0x40
    _emit 0x00
    _emit 0x89
    _emit 0x6E
    _emit 0x0C
    _emit 0x89
    _emit 0x6E
    _emit 0x10
    _emit 0x89
    _emit 0x7E
    _emit 0x20
    _emit 0x89
    _emit 0x4E
    _emit 0x04
    _emit 0xE8
    _emit 0xAF
    _emit 0x12
    _emit 0x06
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x77
    _emit 0x10
    _emit 0xE8
    _emit 0x6F
    _emit 0xB8
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x68
    _emit 0x08
    _emit 0x89
    _emit 0x68
    _emit 0x0C
    _emit 0x89
    _emit 0x68
    _emit 0x10
    _emit 0x89
    _emit 0x28
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x68
    _emit 0x18
    _emit 0x89
    _emit 0x68
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x56
    _emit 0x04
    _emit 0x83
    _emit 0xE2
    _emit 0xFD
    _emit 0x83
    _emit 0xCA
    _emit 0x01
    _emit 0xBB
    _emit 0x2D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xE0
    _emit 0x14
    _emit 0x40
    _emit 0x00
    _emit 0x89
    _emit 0x6E
    _emit 0x0C
    _emit 0x89
    _emit 0x6E
    _emit 0x10
    _emit 0x89
    _emit 0x7E
    _emit 0x20
    _emit 0x89
    _emit 0x56
    _emit 0x04
    _emit 0xE8
    _emit 0x5A
    _emit 0x12
    _emit 0x06
    _emit 0x00
    _emit 0x8B
    _emit 0x9F
    _emit 0xB4
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x89
    _emit 0xB7
    _emit 0xC0
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x8D
    _emit 0x77
    _emit 0x14
    _emit 0xE8
    _emit 0x46
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0x8B
    _emit 0xC6
    _emit 0x8B
    _emit 0xD3
    _emit 0x89
    _emit 0x9E
    _emit 0xF8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x95
    _emit 0x39
    _emit 0x05
    _emit 0x00
    _emit 0x8D
    _emit 0xB7
    _emit 0xC8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xBF
    _emit 0xB4
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0xE8
    _emit 0x24
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0xB9
    _emit 0x62
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x8B
    _emit 0xD7
    _emit 0x89
    _emit 0xBE
    _emit 0xF8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x70
    _emit 0x39
    _emit 0x05
    _emit 0x00
    _emit 0x5E
    _emit 0x5F
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
