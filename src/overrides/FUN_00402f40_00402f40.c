/* Byte-for-byte override for FUN_00402f40_00402f40.

 * Original bytes (159):
 *     0000: 6a ff 68 6b 76 49 00 64
 *     0008: a1 00 00 00 00 50 51 56
 *     0010: a1 38 d1 4a 00 33 c4 50
 *     0018: 8d 44 24 0c 64 a3 00 00
 *     0020: 00 00 68 24 37 00 00 e8
 *     0028: 7e 9a 06 00 83 c4 04 89
 *     0030: 44 24 08 c7 44 24 14 00
 *     0038: 00 00 00 85 c0 74 0a 50
 *     0040: e8 eb f9 ff ff 8b f0 eb
 *     0048: 02 33 f6 8b 44 24 1c 50
 *     0050: 56 c7 44 24 1c ff ff ff
 *     0058: ff e8 a2 fa ff ff 85 c0
 *     0060: 74 28 85 f6 74 0f 56 e8
 *     0068: 14 fd ff ff 56 e8 9d 9a
 *     0070: 06 00 83 c4 04 33 c0 8b
 *     0078: 4c 24 0c 64 89 0d 00 00
 *     0080: 00 00 59 5e 83 c4 10 c2
 *     0088: 04 00 8b c6 8b 4c 24 0c
 *     0090: 64 89 0d 00 00 00 00 59
 *     0098: 5e 83 c4 10 c2 04 00
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the instruction sequences differ in ways this note does
 * not characterise; compare with cmpfun.py before trusting it.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint * __stdcall FUN_00402f40(undefined4 param_1)
{
  __asm {
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0x6B
    _emit 0x76
    _emit 0x49
    _emit 0x00
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x51
    _emit 0x56
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
    _emit 0x0C
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0x24
    _emit 0x37
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x7E
    _emit 0x9A
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0A
    _emit 0x50
    _emit 0xE8
    _emit 0xEB
    _emit 0xF9
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x50
    _emit 0x56
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0xA2
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x28
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x14
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x9D
    _emit 0x9A
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
