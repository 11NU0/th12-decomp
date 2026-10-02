/* Byte-for-byte override for __local_unwind2.

 * Original bytes (132):
 *     0000: 53 56 57 8b 44 24 10 55
 *     0008: 50 6a fe 68 a8 c8 48 00
 *     0010: 64 ff 35 00 00 00 00 a1
 *     0018: 38 d1 4a 00 33 c4 50 8d
 *     0020: 44 24 04 64 a3 00 00 00
 *     0028: 00 8b 44 24 28 8b 58 08
 *     0030: 8b 70 0c 83 fe ff 74 3a
 *     0038: 83 7c 24 2c ff 74 06 3b
 *     0040: 74 24 2c 76 2d 8d 34 76
 *     0048: 8b 0c b3 89 4c 24 0c 89
 *     0050: 48 0c 83 7c b3 04 00 75
 *     0058: 17 68 01 01 00 00 8b 44
 *     0060: b3 08 e8 49 00 00 00 8b
 *     0068: 44 b3 08 e8 5f 00 00 00
 *     0070: eb b7 8b 4c 24 04 64 89
 *     0078: 0d 00 00 00 00 83 c4 18
 *     0080: 5f 5e 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __local_unwind2(int a0, uint a1)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x55
    _emit 0x50
    _emit 0x6A
    _emit 0xFE
    _emit 0x68
    _emit 0xA8
    _emit 0xC8
    _emit 0x48
    _emit 0x00
    _emit 0x64
    _emit 0xFF
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0x38
    _emit 0xD1
    _emit 0x4A
    _emit 0x00
    _emit 0x33
    _emit 0xC4
    _emit 0x50
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x28
    _emit 0x8B
    _emit 0x58
    _emit 0x08
    _emit 0x8B
    _emit 0x70
    _emit 0x0C
    _emit 0x83
    _emit 0xFE
    _emit 0xFF
    _emit 0x74
    _emit 0x3A
    _emit 0x83
    _emit 0x7C
    _emit 0x24
    _emit 0x2C
    _emit 0xFF
    _emit 0x74
    _emit 0x06
    _emit 0x3B
    _emit 0x74
    _emit 0x24
    _emit 0x2C
    _emit 0x76
    _emit 0x2D
    _emit 0x8D
    _emit 0x34
    _emit 0x76
    _emit 0x8B
    _emit 0x0C
    _emit 0xB3
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x48
    _emit 0x0C
    _emit 0x83
    _emit 0x7C
    _emit 0xB3
    _emit 0x04
    _emit 0x00
    _emit 0x75
    _emit 0x17
    _emit 0x68
    _emit 0x01
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0xB3
    _emit 0x08
    _emit 0xE8
    _emit 0x49
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0xB3
    _emit 0x08
    _emit 0xE8
    _emit 0x5F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0xB7
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x18
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
