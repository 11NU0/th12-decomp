/* Byte-for-byte override for FUN_0041d250.

 * Original bytes (339):
 *     0000: 53 55 8b 6c 24 0c 57 bb
 *     0008: e4 fc 49 00 b9 05 00 00
 *     0010: 00 e8 fa 2b 04 00 33 ff
 *     0018: 89 85 44 6d 00 00 3b c7
 *     0020: 75 1b 68 34 f4 49 00 b9
 *     0028: c8 0e 4b 00 e8 9f 6f 04
 *     0030: 00 83 c4 04 5f 5d 83 c8
 *     0038: ff 5b c2 04 00 55 e8 1d
 *     0040: 01 00 00 85 c0 75 ed 56
 *     0048: 6a 24 e8 4b f7 04 00 83
 *     0050: c4 04 3b c7 74 1c 83 60
 *     0058: 04 fe 89 78 08 89 78 0c
 *     0060: 89 78 10 89 38 89 40 14
 *     0068: 89 78 18 89 78 1c 8b f0
 *     0070: eb 02 33 f6 8b 46 04 83
 *     0078: e0 fd 83 c8 01 bb 19 00
 *     0080: 00 00 c7 46 08 d0 f8 41
 *     0088: 00 89 7e 0c 89 7e 10 89
 *     0090: 6e 20 89 46 04 e8 96 50
 *     0098: 04 00 6a 24 89 75 08 e8
 *     00a0: f6 f6 04 00 83 c4 04 3b
 *     00a8: c7 74 1c 83 60 04 fe 89
 *     00b0: 78 08 89 78 0c 89 78 10
 *     00b8: 89 38 89 40 14 89 78 18
 *     00c0: 89 78 1c 8b f0 eb 02 33
 *     00c8: f6 8b 4e 04 83 e1 fd 83
 *     00d0: c9 01 bb 3b 00 00 00 c7
 *     00d8: 46 08 e0 f8 41 00 89 7e
 *     00e0: 0c 89 7e 10 89 6e 20 89
 *     00e8: 4e 04 e8 e1 50 04 00 6a
 *     00f0: 24 89 75 0c e8 a1 f6 04
 *     00f8: 00 83 c4 04 3b c7 74 1c
 *     0100: 83 60 04 fe 89 78 08 89
 *     0108: 78 0c 89 78 10 89 38 89
 *     0110: 40 14 89 78 18 89 78 1c
 *     0118: 8b f0 eb 02 33 f6 8b 56
 *     0120: 04 83 e2 fd 83 ca 01 bb
 *     0128: 2c 00 00 00 c7 46 08 f0
 *     0130: f8 41 00 89 7e 0c 89 7e
 *     0138: 10 89 6e 20 89 56 04 e8
 *     0140: 8c 50 04 00 89 b5 d4 6c
 *     0148: 00 00 5e 5f 5d 33 c0 5b
 *     0150: c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0041d250(int a0)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0x57
    _emit 0xBB
    _emit 0xE4
    _emit 0xFC
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xFA
    _emit 0x2B
    _emit 0x04
    _emit 0x00
    _emit 0x33
    _emit 0xFF
    _emit 0x89
    _emit 0x85
    _emit 0x44
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x1B
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
    _emit 0x9F
    _emit 0x6F
    _emit 0x04
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
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x55
    _emit 0xE8
    _emit 0x1D
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xED
    _emit 0x56
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x4B
    _emit 0xF7
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
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
    _emit 0x19
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xD0
    _emit 0xF8
    _emit 0x41
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0xE8
    _emit 0x96
    _emit 0x50
    _emit 0x04
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0xF6
    _emit 0xF6
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
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
    _emit 0x3B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xE0
    _emit 0xF8
    _emit 0x41
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0x89
    _emit 0x4E
    _emit 0x04
    _emit 0xE8
    _emit 0xE1
    _emit 0x50
    _emit 0x04
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x0C
    _emit 0xE8
    _emit 0xA1
    _emit 0xF6
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
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
    _emit 0x2C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xF0
    _emit 0xF8
    _emit 0x41
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0x89
    _emit 0x56
    _emit 0x04
    _emit 0xE8
    _emit 0x8C
    _emit 0x50
    _emit 0x04
    _emit 0x00
    _emit 0x89
    _emit 0xB5
    _emit 0xD4
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x5F
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
