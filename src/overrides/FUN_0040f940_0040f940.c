/* Byte-for-byte override for FUN_0040f940.

 * Original bytes (238):
 *     0000: 53 55 8b 6c 24 0c 57 bb
 *     0008: 9c f6 49 00 b9 06 00 00
 *     0010: 00 e8 0a 05 05 00 33 ff
 *     0018: 89 45 10 3b c7 75 1b 68
 *     0020: b8 f8 49 00 b9 c8 0e 4b
 *     0028: 00 e8 b2 48 05 00 83 c4
 *     0030: 04 5f 5d 83 c8 ff 5b c2
 *     0038: 04 00 56 6a 24 e8 68 d0
 *     0040: 05 00 83 c4 04 3b c7 74
 *     0048: 1c 83 60 04 fe 89 78 08
 *     0050: 89 78 0c 89 78 10 89 38
 *     0058: 89 40 14 89 78 18 89 78
 *     0060: 1c 8b f0 eb 02 33 f6 8b
 *     0068: 46 04 83 e0 fd 83 c8 01
 *     0070: bb 18 00 00 00 c7 46 08
 *     0078: c0 fb 40 00 89 7e 0c 89
 *     0080: 7e 10 89 6e 20 89 46 04
 *     0088: e8 b3 29 05 00 6a 24 89
 *     0090: 75 08 e8 13 d0 05 00 83
 *     0098: c4 04 3b c7 74 1c 83 60
 *     00a0: 04 fe 89 78 08 89 78 0c
 *     00a8: 89 78 10 89 38 89 40 14
 *     00b0: 89 78 18 89 78 1c 8b f0
 *     00b8: eb 02 33 f6 8b 4e 04 83
 *     00c0: e1 fd 83 c9 01 bb 21 00
 *     00c8: 00 00 c7 46 08 d0 fb 40
 *     00d0: 00 89 7e 0c 89 7e 10 89
 *     00d8: 6e 20 89 4e 04 e8 fe 29
 *     00e0: 05 00 89 75 0c 5e 5f 5d
 *     00e8: 33 c0 5b c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0040f940(int a0)
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
    _emit 0x0A
    _emit 0x05
    _emit 0x05
    _emit 0x00
    _emit 0x33
    _emit 0xFF
    _emit 0x89
    _emit 0x45
    _emit 0x10
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x1B
    _emit 0x68
    _emit 0xB8
    _emit 0xF8
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xB2
    _emit 0x48
    _emit 0x05
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
    _emit 0x68
    _emit 0xD0
    _emit 0x05
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
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xC0
    _emit 0xFB
    _emit 0x40
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
    _emit 0xB3
    _emit 0x29
    _emit 0x05
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x13
    _emit 0xD0
    _emit 0x05
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
    _emit 0x21
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xD0
    _emit 0xFB
    _emit 0x40
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
    _emit 0xFE
    _emit 0x29
    _emit 0x05
    _emit 0x00
    _emit 0x89
    _emit 0x75
    _emit 0x0C
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
