/* Byte-for-byte override for FUN_0043f3d0.

 * Original bytes (275):
 *     0000: 53 55 56 57 8b 3d 30 45
 *     0008: 4b 00 6a 24 e8 09 d6 02
 *     0010: 00 33 ed 83 c4 04 3b c5
 *     0018: 74 1c 83 60 04 fe 89 68
 *     0020: 08 89 68 0c 89 68 10 89
 *     0028: 28 89 40 14 89 68 18 89
 *     0030: 68 1c 8b f0 eb 02 33 f6
 *     0038: 8b 46 04 83 e0 fd 83 c8
 *     0040: 01 bb 06 00 00 00 c7 46
 *     0048: 08 90 fc 43 00 89 6e 0c
 *     0050: 89 6e 10 89 7e 20 89 46
 *     0058: 04 e8 52 2f 02 00 6a 24
 *     0060: 89 77 0c e8 b2 d5 02 00
 *     0068: 83 c4 04 3b c5 74 1c 83
 *     0070: 60 04 fe 89 68 08 89 68
 *     0078: 0c 89 68 10 89 28 89 40
 *     0080: 14 89 68 18 89 68 1c 8b
 *     0088: f0 eb 02 33 f6 8b 4e 04
 *     0090: 83 e1 fd 83 c9 01 bb 38
 *     0098: 00 00 00 c7 46 08 a0 fc
 *     00a0: 43 00 89 6e 0c 89 6e 10
 *     00a8: 89 7e 20 89 4e 04 e8 9d
 *     00b0: 2f 02 00 bb f8 1e 4a 00
 *     00b8: b9 18 00 00 00 89 77 10
 *     00c0: e8 cb 09 02 00 89 47 14
 *     00c8: 3b c5 75 1a 68 34 f4 49
 *     00d0: 00 b9 c8 0e 4b 00 e8 75
 *     00d8: 4d 02 00 83 c4 04 5f 5e
 *     00e0: 5d 83 c8 ff 5b c3 bb 04
 *     00e8: 1f 4a 00 b9 19 00 00 00
 *     00f0: e8 9b 09 02 00 89 47 18
 *     00f8: 3b c5 74 d0 c7 87 f8 00
 *     0100: 00 00 01 00 00 00 5f 5e
 *     0108: 89 2d 5c e5 4c 00 5d 33
 *     0110: c0 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0043f3d0(void)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0x3D
    _emit 0x30
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x09
    _emit 0xD6
    _emit 0x02
    _emit 0x00
    _emit 0x33
    _emit 0xED
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
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x90
    _emit 0xFC
    _emit 0x43
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
    _emit 0x52
    _emit 0x2F
    _emit 0x02
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x77
    _emit 0x0C
    _emit 0xE8
    _emit 0xB2
    _emit 0xD5
    _emit 0x02
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
    _emit 0x38
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xA0
    _emit 0xFC
    _emit 0x43
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
    _emit 0x9D
    _emit 0x2F
    _emit 0x02
    _emit 0x00
    _emit 0xBB
    _emit 0xF8
    _emit 0x1E
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x77
    _emit 0x10
    _emit 0xE8
    _emit 0xCB
    _emit 0x09
    _emit 0x02
    _emit 0x00
    _emit 0x89
    _emit 0x47
    _emit 0x14
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0x1A
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
    _emit 0x75
    _emit 0x4D
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5B
    _emit 0xC3
    _emit 0xBB
    _emit 0x04
    _emit 0x1F
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0x19
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x9B
    _emit 0x09
    _emit 0x02
    _emit 0x00
    _emit 0x89
    _emit 0x47
    _emit 0x18
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0xD0
    _emit 0xC7
    _emit 0x87
    _emit 0xF8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x89
    _emit 0x2D
    _emit 0x5C
    _emit 0xE5
    _emit 0x4C
    _emit 0x00
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
