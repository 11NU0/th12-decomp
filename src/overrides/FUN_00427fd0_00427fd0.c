/* Byte-for-byte override for FUN_00427fd0.

 * Original bytes (250):
 *     0000: 53 55 8b 6c 24 0c 57 bb
 *     0008: 9c f6 49 00 b9 06 00 00
 *     0010: 00 e8 7a 7e 03 00 33 ff
 *     0018: 89 85 88 04 00 00 3b c7
 *     0020: 75 1b 68 a8 f6 49 00 b9
 *     0028: c8 0e 4b 00 e8 1f c2 03
 *     0030: 00 83 c4 04 5f 5d 83 c8
 *     0038: ff 5b c2 04 00 56 6a 24
 *     0040: e8 d5 49 04 00 83 c4 04
 *     0048: 3b c7 74 1c 83 60 04 fe
 *     0050: 89 78 08 89 78 0c 89 78
 *     0058: 10 89 38 89 40 14 89 78
 *     0060: 18 89 78 1c 8b f0 eb 02
 *     0068: 33 f6 8b 46 04 83 e0 fd
 *     0070: 83 c8 01 bb 14 00 00 00
 *     0078: c7 46 08 d0 83 42 00 89
 *     0080: 7e 0c 89 7e 10 89 6e 20
 *     0088: 89 46 04 e8 20 a3 03 00
 *     0090: 6a 24 89 75 08 e8 80 49
 *     0098: 04 00 83 c4 04 3b c7 74
 *     00a0: 1c 83 60 04 fe 89 78 08
 *     00a8: 89 78 0c 89 78 10 89 38
 *     00b0: 89 40 14 89 78 18 89 78
 *     00b8: 1c 8b f0 eb 02 33 f6 8b
 *     00c0: 4e 04 83 e1 fd 83 c9 01
 *     00c8: bb 1d 00 00 00 c7 46 08
 *     00d0: 30 84 42 00 89 7e 0c 89
 *     00d8: 7e 10 89 6e 20 89 4e 04
 *     00e0: e8 6b a3 03 00 89 75 0c
 *     00e8: 5e 8d 55 10 5f 89 95 64
 *     00f0: 04 00 00 5d 33 c0 5b c2
 *     00f8: 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00427fd0(int a0)
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
    _emit 0x9C
    _emit 0xF6
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x7A
    _emit 0x7E
    _emit 0x03
    _emit 0x00
    _emit 0x33
    _emit 0xFF
    _emit 0x89
    _emit 0x85
    _emit 0x88
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x1B
    _emit 0x68
    _emit 0xA8
    _emit 0xF6
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x1F
    _emit 0xC2
    _emit 0x03
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
    _emit 0x56
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0xD5
    _emit 0x49
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
    _emit 0x14
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xD0
    _emit 0x83
    _emit 0x42
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
    _emit 0x20
    _emit 0xA3
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x80
    _emit 0x49
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
    _emit 0x1D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x30
    _emit 0x84
    _emit 0x42
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
    _emit 0x6B
    _emit 0xA3
    _emit 0x03
    _emit 0x00
    _emit 0x89
    _emit 0x75
    _emit 0x0C
    _emit 0x5E
    _emit 0x8D
    _emit 0x55
    _emit 0x10
    _emit 0x5F
    _emit 0x89
    _emit 0x95
    _emit 0x64
    _emit 0x04
    _emit 0x00
    _emit 0x00
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
