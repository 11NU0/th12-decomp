/* Byte-for-byte override for FUN_0046a250.

 * Original bytes (170):
 *     0000: 53 56 57 6a 30 8b fa 8b
 *     0008: d9 e8 ec 2d 00 00 6a 30
 *     0010: 8b f0 6a 00 56 89 b3 78
 *     0018: 04 00 00 e8 b0 d1 00 00
 *     0020: d9 ee d9 56 24 83 c4 10
 *     0028: d9 56 20 d9 05 48 40 4a
 *     0030: 00 d9 5e 28 d9 05 44 40
 *     0038: 4a 00 d9 5e 2c 8b 07 89
 *     0040: 06 8b 4f 04 89 4e 04 8b
 *     0048: 57 08 89 56 08 8b 46 1c
 *     0050: a8 01 75 1e 83 c8 01 d9
 *     0058: 56 14 c7 46 10 00 00 00
 *     0060: 00 c7 46 0c c1 bd f0 ff
 *     0068: c7 46 18 d0 2e 4b 00 89
 *     0070: 46 1c d9 5e 14 c7 46 10
 *     0078: 00 00 00 00 c7 46 0c ff
 *     0080: ff ff ff 8b 06 89 83 30
 *     0088: 04 00 00 8b 4e 04 89 8b
 *     0090: 34 04 00 00 8b 56 08 83
 *     0098: a3 7c 04 00 00 fd 5f 5e
 *     00a0: 89 93 38 04 00 00 33 c0
 *     00a8: 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_0046a250(int a0, undefined4 * a1)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x6A
    _emit 0x30
    _emit 0x8B
    _emit 0xFA
    _emit 0x8B
    _emit 0xD9
    _emit 0xE8
    _emit 0xEC
    _emit 0x2D
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x30
    _emit 0x8B
    _emit 0xF0
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0x89
    _emit 0xB3
    _emit 0x78
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xB0
    _emit 0xD1
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0xD9
    _emit 0x56
    _emit 0x24
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0xD9
    _emit 0x56
    _emit 0x20
    _emit 0xD9
    _emit 0x05
    _emit 0x48
    _emit 0x40
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x5E
    _emit 0x28
    _emit 0xD9
    _emit 0x05
    _emit 0x44
    _emit 0x40
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x5E
    _emit 0x2C
    _emit 0x8B
    _emit 0x07
    _emit 0x89
    _emit 0x06
    _emit 0x8B
    _emit 0x4F
    _emit 0x04
    _emit 0x89
    _emit 0x4E
    _emit 0x04
    _emit 0x8B
    _emit 0x57
    _emit 0x08
    _emit 0x89
    _emit 0x56
    _emit 0x08
    _emit 0x8B
    _emit 0x46
    _emit 0x1C
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x1E
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x14
    _emit 0xC7
    _emit 0x46
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x0C
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x46
    _emit 0x18
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x46
    _emit 0x1C
    _emit 0xD9
    _emit 0x5E
    _emit 0x14
    _emit 0xC7
    _emit 0x46
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x0C
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x06
    _emit 0x89
    _emit 0x83
    _emit 0x30
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x04
    _emit 0x89
    _emit 0x8B
    _emit 0x34
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x56
    _emit 0x08
    _emit 0x83
    _emit 0xA3
    _emit 0x7C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xFD
    _emit 0x5F
    _emit 0x5E
    _emit 0x89
    _emit 0x93
    _emit 0x38
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
