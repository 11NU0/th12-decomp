/* Byte-for-byte override for FUN_0044ef10.

 * Original bytes (234):
 *     0000: 55 8b ec 6a ff 68 b0 6e
 *     0008: 49 00 64 a1 00 00 00 00
 *     0010: 50 83 ec 0c 53 56 57 a1
 *     0018: 38 d1 4a 00 33 c5 50 8d
 *     0020: 45 f4 64 a3 00 00 00 00
 *     0028: 89 65 f0 8b f9 89 7d ec
 *     0030: 8b 45 08 8b f0 83 ce 0f
 *     0038: 83 fe fe 76 04 8b f0 eb
 *     0040: 22 8b 5f 18 b8 ab aa aa
 *     0048: aa f7 e6 8b cb d1 e9 d1
 *     0050: ea 3b d1 73 0e b8 fe ff
 *     0058: ff ff 2b c1 3b d8 77 03
 *     0060: 8d 34 19 8d 4e 01 51 8b
 *     0068: cf c7 45 fc 00 00 00 00
 *     0070: e8 1b 01 00 00 89 45 08
 *     0078: c7 45 fc ff ff ff ff eb
 *     0080: 2d 8b 45 08 8b 4d ec 89
 *     0088: 45 e8 40 89 65 f0 50 c6
 *     0090: 45 fc 02 e8 f8 00 00 00
 *     0098: 89 45 08 c7 45 fc 01 00
 *     00a0: 00 00 b8 b8 ef 44 00 c3
 *     00a8: 8b 7d ec 8b 75 e8 8b 5d
 *     00b0: 0c 85 db 76 20 83 7f 18
 *     00b8: 10 72 05 8b 47 04 eb 03
 *     00c0: 8d 47 04 53 50 8b 45 08
 *     00c8: 8d 56 01 52 50 e8 2e f2
 *     00d0: 01 00 83 c4 10 83 7f 18
 *     00d8: 10 72 0c 8b 4f 04 51 e8
 *     00e0: 5b da 01 00 83 c4 04 8b
 *     00e8: 4d 08
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0044ef10(void * a0, uint a1, rsize_t a2)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0xB0
    _emit 0x6E
    _emit 0x49
    _emit 0x00
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0xA1
    _emit 0x38
    _emit 0xD1
    _emit 0x4A
    _emit 0x00
    _emit 0x33
    _emit 0xC5
    _emit 0x50
    _emit 0x8D
    _emit 0x45
    _emit 0xF4
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x65
    _emit 0xF0
    _emit 0x8B
    _emit 0xF9
    _emit 0x89
    _emit 0x7D
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xCE
    _emit 0x0F
    _emit 0x83
    _emit 0xFE
    _emit 0xFE
    _emit 0x76
    _emit 0x04
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x22
    _emit 0x8B
    _emit 0x5F
    _emit 0x18
    _emit 0xB8
    _emit 0xAB
    _emit 0xAA
    _emit 0xAA
    _emit 0xAA
    _emit 0xF7
    _emit 0xE6
    _emit 0x8B
    _emit 0xCB
    _emit 0xD1
    _emit 0xE9
    _emit 0xD1
    _emit 0xEA
    _emit 0x3B
    _emit 0xD1
    _emit 0x73
    _emit 0x0E
    _emit 0xB8
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x2B
    _emit 0xC1
    _emit 0x3B
    _emit 0xD8
    _emit 0x77
    _emit 0x03
    _emit 0x8D
    _emit 0x34
    _emit 0x19
    _emit 0x8D
    _emit 0x4E
    _emit 0x01
    _emit 0x51
    _emit 0x8B
    _emit 0xCF
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x1B
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0x08
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x2D
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x8B
    _emit 0x4D
    _emit 0xEC
    _emit 0x89
    _emit 0x45
    _emit 0xE8
    _emit 0x40
    _emit 0x89
    _emit 0x65
    _emit 0xF0
    _emit 0x50
    _emit 0xC6
    _emit 0x45
    _emit 0xFC
    _emit 0x02
    _emit 0xE8
    _emit 0xF8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0x08
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xB8
    _emit 0xB8
    _emit 0xEF
    _emit 0x44
    _emit 0x00
    _emit 0xC3
    _emit 0x8B
    _emit 0x7D
    _emit 0xEC
    _emit 0x8B
    _emit 0x75
    _emit 0xE8
    _emit 0x8B
    _emit 0x5D
    _emit 0x0C
    _emit 0x85
    _emit 0xDB
    _emit 0x76
    _emit 0x20
    _emit 0x83
    _emit 0x7F
    _emit 0x18
    _emit 0x10
    _emit 0x72
    _emit 0x05
    _emit 0x8B
    _emit 0x47
    _emit 0x04
    _emit 0xEB
    _emit 0x03
    _emit 0x8D
    _emit 0x47
    _emit 0x04
    _emit 0x53
    _emit 0x50
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x8D
    _emit 0x56
    _emit 0x01
    _emit 0x52
    _emit 0x50
    _emit 0xE8
    _emit 0x2E
    _emit 0xF2
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x83
    _emit 0x7F
    _emit 0x18
    _emit 0x10
    _emit 0x72
    _emit 0x0C
    _emit 0x8B
    _emit 0x4F
    _emit 0x04
    _emit 0x51
    _emit 0xE8
    _emit 0x5B
    _emit 0xDA
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
  }
  __assume(0);
}
