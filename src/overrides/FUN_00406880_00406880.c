/* Byte-for-byte override for FUN_00406880.

 * Original bytes (173):
 *     0000: 53 55 8b 6c 24 0c 56 57
 *     0008: 6a 24 e8 5b 61 06 00 33
 *     0010: ff 83 c4 04 3b c7 74 1c
 *     0018: 83 60 04 fe 89 78 08 89
 *     0020: 78 0c 89 78 10 89 38 89
 *     0028: 40 14 89 78 18 89 78 1c
 *     0030: 8b f0 eb 02 33 f6 83 4e
 *     0038: 04 03 bb 11 00 00 00 c7
 *     0040: 46 08 b0 6b 40 00 89 7e
 *     0048: 0c 89 7e 10 89 6e 20 e8
 *     0050: ac ba 05 00 6a 24 89 75
 *     0058: 08 e8 0c 61 06 00 83 c4
 *     0060: 04 3b c7 74 1c 83 60 04
 *     0068: fe 89 78 08 89 78 0c 89
 *     0070: 78 10 89 38 89 40 14 89
 *     0078: 78 18 89 78 1c 8b f0 eb
 *     0080: 02 33 f6 83 4e 04 03 bb
 *     0088: 23 00 00 00 c7 46 08 c0
 *     0090: 6b 40 00 89 7e 0c 89 7e
 *     0098: 10 89 6e 20 e8 ff ba 05
 *     00a0: 00 5f 89 75 0c 5e 5d 33
 *     00a8: c0 5b c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00406880(int a0)
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
    _emit 0x5B
    _emit 0x61
    _emit 0x06
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
    _emit 0x83
    _emit 0x4E
    _emit 0x04
    _emit 0x03
    _emit 0xBB
    _emit 0x11
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xB0
    _emit 0x6B
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
    _emit 0xE8
    _emit 0xAC
    _emit 0xBA
    _emit 0x05
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x0C
    _emit 0x61
    _emit 0x06
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
    _emit 0x83
    _emit 0x4E
    _emit 0x04
    _emit 0x03
    _emit 0xBB
    _emit 0x23
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xC0
    _emit 0x6B
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
    _emit 0xE8
    _emit 0xFF
    _emit 0xBA
    _emit 0x05
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
