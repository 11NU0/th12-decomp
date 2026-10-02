/* Byte-for-byte override for FUN_0040bc20.

 * Original bytes (329):
 *     0000: 83 ec 08 56 8b f0 8b 86
 *     0008: c4 07 00 00 39 86 a0 07
 *     0010: 00 00 89 44 24 08 0f 8c
 *     0018: e4 00 00 00 8b 96 44 05
 *     0020: 00 00 85 d2 7c 05 e8 45
 *     0028: 81 04 00 d9 86 b4 07 00
 *     0030: 00 ff 86 cc 07 00 00 83
 *     0038: ec 08 8d 8e bc 04 00 00
 *     0040: d9 5c 24 04 e8 37 bb 02
 *     0048: 00 d9 1c 24 e8 cf 89 05
 *     0050: 00 d9 9e d8 04 00 00 d9
 *     0058: 86 b0 07 00 00 d9 5c 24
 *     0060: 08 d9 44 24 08 d9 96 d4
 *     0068: 04 00 00 8b 86 ac 07 00
 *     0070: 00 d9 5c 24 08 d9 ee a8
 *     0078: 01 75 2d 83 c8 01 d9 96
 *     0080: a4 07 00 00 c7 86 a0 07
 *     0088: 00 00 00 00 00 00 c7 86
 *     0090: 9c 07 00 00 c1 bd f0 ff
 *     0098: c7 86 a8 07 00 00 d0 2e
 *     00a0: 4b 00 89 86 ac 07 00 00
 *     00a8: d9 9e a4 07 00 00 c7 86
 *     00b0: a0 07 00 00 00 00 00 00
 *     00b8: c7 86 9c 07 00 00 ff ff
 *     00c0: ff ff 8b 86 cc 07 00 00
 *     00c8: 3b 86 c8 07 00 00 7c 48
 *     00d0: d9 44 24 08 83 ec 08 d9
 *     00d8: 5c 24 04 8d 8e c8 04 00
 *     00e0: 00 d9 86 d8 04 00 00 d9
 *     00e8: 1c 24 e8 31 19 00 00 83
 *     00f0: a6 28 05 00 00 df b8 01
 *     00f8: 00 00 00 5e 83 c4 08 c3
 *     0100: d9 86 d4 04 00 00 d9 86
 *     0108: a4 07 00 00 d8 c9 da 74
 *     0110: 24 08 de e9 d9 5c 24 08
 *     0118: d9 44 24 08 83 ec 08 d9
 *     0120: 5c 24 04 8d 8e c8 04 00
 *     0128: 00 d9 86 d8 04 00 00 d9
 *     0130: 1c 24 e8 e9 18 00 00 81
 *     0138: c6 9c 07 00 00 e8 1e 8d
 *     0140: 05 00 33 c0 5e 83 c4 08
 *     0148: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_0040bc20(undefined4 a0)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0x56
    _emit 0x8B
    _emit 0xF0
    _emit 0x8B
    _emit 0x86
    _emit 0xC4
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x86
    _emit 0xA0
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x0F
    _emit 0x8C
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x96
    _emit 0x44
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xD2
    _emit 0x7C
    _emit 0x05
    _emit 0xE8
    _emit 0x45
    _emit 0x81
    _emit 0x04
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xB4
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x86
    _emit 0xCC
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0x8D
    _emit 0x8E
    _emit 0xBC
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xE8
    _emit 0x37
    _emit 0xBB
    _emit 0x02
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0xCF
    _emit 0x89
    _emit 0x05
    _emit 0x00
    _emit 0xD9
    _emit 0x9E
    _emit 0xD8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xB0
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x96
    _emit 0xD4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0xAC
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0xEE
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x2D
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x96
    _emit 0xA4
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0xA0
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x9C
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x86
    _emit 0xA8
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0xAC
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x9E
    _emit 0xA4
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0xA0
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x9C
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x86
    _emit 0xCC
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0x86
    _emit 0xC8
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x7C
    _emit 0x48
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0x8D
    _emit 0x8E
    _emit 0xC8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xD8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0x31
    _emit 0x19
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xA6
    _emit 0x28
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xDF
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0xC3
    _emit 0xD9
    _emit 0x86
    _emit 0xD4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xA4
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xD8
    _emit 0xC9
    _emit 0xDA
    _emit 0x74
    _emit 0x24
    _emit 0x08
    _emit 0xDE
    _emit 0xE9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0x8D
    _emit 0x8E
    _emit 0xC8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xD8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0xE9
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xC6
    _emit 0x9C
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x1E
    _emit 0x8D
    _emit 0x05
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0xC3
  }
  __assume(0);
}
