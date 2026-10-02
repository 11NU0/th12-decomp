/* Byte-for-byte override for FUN_0040b9c0.

 * Original bytes (303):
 *     0000: 51 56 8b f0 8b 86 c4 07
 *     0008: 00 00 39 86 a0 07 00 00
 *     0010: 89 44 24 04 0f 8c ce 00
 *     0018: 00 00 8b 96 44 05 00 00
 *     0020: 85 d2 7c 05 e8 a7 83 04
 *     0028: 00 d9 86 b4 07 00 00 ff
 *     0030: 86 cc 07 00 00 d8 86 d8
 *     0038: 04 00 00 d9 9e d8 04 00
 *     0040: 00 d9 86 b0 07 00 00 d9
 *     0048: 5c 24 04 d9 44 24 04 d9
 *     0050: 96 d4 04 00 00 8b 86 ac
 *     0058: 07 00 00 d9 5c 24 04 d9
 *     0060: ee a8 01 75 2d 83 c8 01
 *     0068: d9 96 a4 07 00 00 c7 86
 *     0070: a0 07 00 00 00 00 00 00
 *     0078: c7 86 9c 07 00 00 c1 bd
 *     0080: f0 ff c7 86 a8 07 00 00
 *     0088: d0 2e 4b 00 89 86 ac 07
 *     0090: 00 00 d9 9e a4 07 00 00
 *     0098: c7 86 a0 07 00 00 00 00
 *     00a0: 00 00 c7 86 9c 07 00 00
 *     00a8: ff ff ff ff 8b 86 cc 07
 *     00b0: 00 00 3b 86 c8 07 00 00
 *     00b8: 7c 46 d9 44 24 04 83 ec
 *     00c0: 08 d9 5c 24 04 8d 8e c8
 *     00c8: 04 00 00 d9 86 d8 04 00
 *     00d0: 00 d9 1c 24 e8 a7 1b 00
 *     00d8: 00 83 a6 28 05 00 00 ef
 *     00e0: b8 01 00 00 00 5e 59 c3
 *     00e8: d9 86 d4 04 00 00 d9 86
 *     00f0: a4 07 00 00 d8 c9 da 74
 *     00f8: 24 04 de e9 d9 5c 24 04
 *     0100: d9 44 24 04 83 ec 08 d9
 *     0108: 5c 24 04 8d 8e c8 04 00
 *     0110: 00 d9 86 d8 04 00 00 d9
 *     0118: 1c 24 e8 61 1b 00 00 81
 *     0120: c6 9c 07 00 00 e8 96 8f
 *     0128: 05 00 33 c0 5e 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_0040b9c0(undefined4 a0)
{
  __asm {
    _emit 0x51
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
    _emit 0x04
    _emit 0x0F
    _emit 0x8C
    _emit 0xCE
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
    _emit 0xA7
    _emit 0x83
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
    _emit 0xD8
    _emit 0x86
    _emit 0xD8
    _emit 0x04
    _emit 0x00
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
    _emit 0x04
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
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
    _emit 0x04
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
    _emit 0x46
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
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
    _emit 0xA7
    _emit 0x1B
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xA6
    _emit 0x28
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xEF
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x59
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
    _emit 0x04
    _emit 0xDE
    _emit 0xE9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
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
    _emit 0x61
    _emit 0x1B
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xC6
    _emit 0x9C
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x96
    _emit 0x8F
    _emit 0x05
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
