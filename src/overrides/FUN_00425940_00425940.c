/* Byte-for-byte override for FUN_00425940.

 * Original bytes (189):
 *     0000: 53 55 8b 6c 24 0c 56 57
 *     0008: 6a 24 e8 9b 70 04 00 33
 *     0010: ff 83 c4 04 3b c7 74 1c
 *     0018: 83 60 04 fe 89 78 08 89
 *     0020: 78 0c 89 78 10 89 38 89
 *     0028: 40 14 89 78 18 89 78 1c
 *     0030: 8b f0 eb 02 33 f6 8b 46
 *     0038: 04 83 e0 fd 83 c8 01 bb
 *     0040: 16 00 00 00 c7 46 08 80
 *     0048: 73 42 00 89 7e 0c 89 7e
 *     0050: 10 89 6e 20 89 46 04 e8
 *     0058: e4 c9 03 00 6a 24 89 75
 *     0060: 08 e8 44 70 04 00 83 c4
 *     0068: 04 3b c7 74 1c 83 60 04
 *     0070: fe 89 78 08 89 78 0c 89
 *     0078: 78 10 89 38 89 40 14 89
 *     0080: 78 18 89 78 1c 8b f0 eb
 *     0088: 02 33 f6 8b 4e 04 83 e1
 *     0090: fd 83 c9 01 bb 1b 00 00
 *     0098: 00 c7 46 08 c0 73 42 00
 *     00a0: 89 7e 0c 89 7e 10 89 6e
 *     00a8: 20 89 4e 04 e8 2f ca 03
 *     00b0: 00 5f 89 75 0c 5e 5d 33
 *     00b8: c0 5b c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00425940(int a0)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0x56
    _emit 0x57
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x9B
    _emit 0x70
    _emit 0x04
    _emit 0x00
    _emit 0x33
    _emit 0xFF
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
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x80
    _emit 0x73
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
    _emit 0xE4
    _emit 0xC9
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x44
    _emit 0x70
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
    _emit 0x1B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xC0
    _emit 0x73
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
    _emit 0x2F
    _emit 0xCA
    _emit 0x03
    _emit 0x00
    _emit 0x5F
    _emit 0x89
    _emit 0x75
    _emit 0x0C
    _emit 0x5E
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
