/* Byte-for-byte override for FUN_00409530.

 * Original bytes (248):
 *     0000: 53 55 bb 9c f6 49 00 b9
 *     0008: 06 00 00 00 e8 1f 69 05
 *     0010: 00 33 ed 89 87 dc eb 4d
 *     0018: 00 3b c5 75 18 68 a8 f6
 *     0020: 49 00 b9 c8 0e 4b 00 e8
 *     0028: c4 ac 05 00 83 c4 04 5d
 *     0030: 83 c8 ff 5b c3 56 8d 47
 *     0038: 64 b9 05 00 00 00 6a 24
 *     0040: 89 47 10 66 89 8f 16 e7
 *     0048: 4d 00 e8 6b 34 06 00 83
 *     0050: c4 04 3b c5 74 1c 83 60
 *     0058: 04 fe 89 68 08 89 68 0c
 *     0060: 89 68 10 89 28 89 40 14
 *     0068: 89 68 18 89 68 1c 8b f0
 *     0070: eb 02 33 f6 8b 56 04 83
 *     0078: e2 fd 83 ca 01 bb 15 00
 *     0080: 00 00 c7 46 08 f0 a1 40
 *     0088: 00 89 6e 0c 89 6e 10 89
 *     0090: 7e 20 89 56 04 e8 b6 8d
 *     0098: 05 00 6a 24 89 77 08 e8
 *     00a0: 16 34 06 00 83 c4 04 3b
 *     00a8: c5 74 1c 83 60 04 fe 89
 *     00b0: 68 08 89 68 0c 89 68 10
 *     00b8: 89 28 89 40 14 89 68 18
 *     00c0: 89 68 1c 8b f0 eb 02 33
 *     00c8: f6 8b 46 04 83 e0 fd 83
 *     00d0: c8 01 bb 1f 00 00 00 c7
 *     00d8: 46 08 20 a2 40 00 89 6e
 *     00e0: 0c 89 6e 10 89 7e 20 89
 *     00e8: 46 04 e8 01 8e 05 00 89
 *     00f0: 77 0c 5e 5d 33 c0 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00409530(void)
{
  __asm {
    _emit 0x53
    _emit 0x55
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
    _emit 0x1F
    _emit 0x69
    _emit 0x05
    _emit 0x00
    _emit 0x33
    _emit 0xED
    _emit 0x89
    _emit 0x87
    _emit 0xDC
    _emit 0xEB
    _emit 0x4D
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0x18
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
    _emit 0xC4
    _emit 0xAC
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5D
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5B
    _emit 0xC3
    _emit 0x56
    _emit 0x8D
    _emit 0x47
    _emit 0x64
    _emit 0xB9
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x47
    _emit 0x10
    _emit 0x66
    _emit 0x89
    _emit 0x8F
    _emit 0x16
    _emit 0xE7
    _emit 0x4D
    _emit 0x00
    _emit 0xE8
    _emit 0x6B
    _emit 0x34
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
    _emit 0x15
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xF0
    _emit 0xA1
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
    _emit 0xB6
    _emit 0x8D
    _emit 0x05
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x77
    _emit 0x08
    _emit 0xE8
    _emit 0x16
    _emit 0x34
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
    _emit 0x1F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x20
    _emit 0xA2
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
    _emit 0x01
    _emit 0x8E
    _emit 0x05
    _emit 0x00
    _emit 0x89
    _emit 0x77
    _emit 0x0C
    _emit 0x5E
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
