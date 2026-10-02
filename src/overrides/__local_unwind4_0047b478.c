/* Byte-for-byte override for __local_unwind4.

 * Original bytes (144):
 *     0000: 53 56 57 8b 54 24 10 8b
 *     0008: 44 24 14 8b 4c 24 18 55
 *     0010: 52 50 51 51 68 08 b5 47
 *     0018: 00 64 ff 35 00 00 00 00
 *     0020: a1 38 d1 4a 00 33 c4 89
 *     0028: 44 24 08 64 89 25 00 00
 *     0030: 00 00 8b 44 24 30 8b 58
 *     0038: 08 8b 4c 24 2c 33 19 8b
 *     0040: 70 0c 83 fe fe 74 3b 8b
 *     0048: 54 24 34 83 fa fe 74 04
 *     0050: 3b f2 76 2e 8d 34 76 8d
 *     0058: 5c b3 10 8b 0b 89 48 0c
 *     0060: 83 7b 04 00 75 cc 68 01
 *     0068: 01 00 00 8b 43 08 e8 b2
 *     0070: 14 01 00 b9 01 00 00 00
 *     0078: 8b 43 08 e8 c4 14 01 00
 *     0080: eb b0 64 8f 05 00 00 00
 *     0088: 00 83 c4 18 5f 5e 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __local_unwind4(uint * a0, int a1, uint a2)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0x55
    _emit 0x52
    _emit 0x50
    _emit 0x51
    _emit 0x51
    _emit 0x68
    _emit 0x08
    _emit 0xB5
    _emit 0x47
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
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x64
    _emit 0x89
    _emit 0x25
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x30
    _emit 0x8B
    _emit 0x58
    _emit 0x08
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x2C
    _emit 0x33
    _emit 0x19
    _emit 0x8B
    _emit 0x70
    _emit 0x0C
    _emit 0x83
    _emit 0xFE
    _emit 0xFE
    _emit 0x74
    _emit 0x3B
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x34
    _emit 0x83
    _emit 0xFA
    _emit 0xFE
    _emit 0x74
    _emit 0x04
    _emit 0x3B
    _emit 0xF2
    _emit 0x76
    _emit 0x2E
    _emit 0x8D
    _emit 0x34
    _emit 0x76
    _emit 0x8D
    _emit 0x5C
    _emit 0xB3
    _emit 0x10
    _emit 0x8B
    _emit 0x0B
    _emit 0x89
    _emit 0x48
    _emit 0x0C
    _emit 0x83
    _emit 0x7B
    _emit 0x04
    _emit 0x00
    _emit 0x75
    _emit 0xCC
    _emit 0x68
    _emit 0x01
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x43
    _emit 0x08
    _emit 0xE8
    _emit 0xB2
    _emit 0x14
    _emit 0x01
    _emit 0x00
    _emit 0xB9
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x43
    _emit 0x08
    _emit 0xE8
    _emit 0xC4
    _emit 0x14
    _emit 0x01
    _emit 0x00
    _emit 0xEB
    _emit 0xB0
    _emit 0x64
    _emit 0x8F
    _emit 0x05
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
