/* Byte-for-byte override for FUN_00461720_00461720.

 * Original bytes (282):
 *     0000: 83 ec 0c f7 05 78 ee 4c
 *     0008: 00 00 80 00 00 53 55 8b
 *     0010: 6c 24 20 56 8b d8 74 11
 *     0018: 68 d0 f1 4c 00 ff 15 88
 *     0020: 80 49 00 fe 05 21 f2 4c
 *     0028: 00 ff 87 30 01 00 00 e8
 *     0030: 6c 0a 00 00 d9 ee 8b f0
 *     0038: d9 54 24 0c 8b 45 20 d9
 *     0040: 54 24 10 8b 4c 24 0c d9
 *     0048: 5c 24 14 8b 54 24 10 83
 *     0050: 8e 80 04 00 00 01 89 8e
 *     0058: 30 04 00 00 8b 4c 24 20
 *     0060: 51 89 46 20 8b 44 24 18
 *     0068: 89 96 34 04 00 00 56 8b
 *     0070: cf 89 86 38 04 00 00 e8
 *     0078: 74 35 ff ff 8b c3 83 e0
 *     0080: 04 89 6e 3c 74 12 f6 c3
 *     0088: 02 74 0d 8b de 8d 44 24
 *     0090: 24 e8 1a fc ff ff eb 34
 *     0098: 85 c0 8d 44 24 24 74 11
 *     00a0: 8b de e8 89 fb ff ff 8b
 *     00a8: 08 8b 54 24 1c 89 0a eb
 *     00b0: 23 f6 c3 02 8b de 74 0f
 *     00b8: e8 f3 fa ff ff 8b 00 8b
 *     00c0: 4c 24 1c 89 01 eb 0d e8
 *     00c8: 64 fa ff ff 8b 10 8b 44
 *     00d0: 24 1c 89 10 8b 55 14 8d
 *     00d8: 45 10 8d 4e 10 5e 5d 5b
 *     00e0: 85 d2 74 09 89 51 04 8b
 *     00e8: 50 04 89 4a 08 89 48 04
 *     00f0: 89 41 08 f7 05 78 ee 4c
 *     00f8: 00 00 80 00 00 74 11 68
 *     0100: d0 f1 4c 00 ff 15 8c 80
 *     0108: 49 00 fe 0d 21 f2 4c 00
 *     0110: 8b 44 24 10 83 c4 0c c2
 *     0118: 0c 00
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

undefined4 * __stdcall FUN_00461720(undefined4 *param_1,int param_2,int param_3)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0xF7
    _emit 0x05
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x20
    _emit 0x56
    _emit 0x8B
    _emit 0xD8
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0xD0
    _emit 0xF1
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x88
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xFE
    _emit 0x05
    _emit 0x21
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x87
    _emit 0x30
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x6C
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0x8B
    _emit 0xF0
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x45
    _emit 0x20
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x83
    _emit 0x8E
    _emit 0x80
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x89
    _emit 0x8E
    _emit 0x30
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x20
    _emit 0x51
    _emit 0x89
    _emit 0x46
    _emit 0x20
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0x96
    _emit 0x34
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0x8B
    _emit 0xCF
    _emit 0x89
    _emit 0x86
    _emit 0x38
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x74
    _emit 0x35
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xC3
    _emit 0x83
    _emit 0xE0
    _emit 0x04
    _emit 0x89
    _emit 0x6E
    _emit 0x3C
    _emit 0x74
    _emit 0x12
    _emit 0xF6
    _emit 0xC3
    _emit 0x02
    _emit 0x74
    _emit 0x0D
    _emit 0x8B
    _emit 0xDE
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x24
    _emit 0xE8
    _emit 0x1A
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x34
    _emit 0x85
    _emit 0xC0
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x24
    _emit 0x74
    _emit 0x11
    _emit 0x8B
    _emit 0xDE
    _emit 0xE8
    _emit 0x89
    _emit 0xFB
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x89
    _emit 0x0A
    _emit 0xEB
    _emit 0x23
    _emit 0xF6
    _emit 0xC3
    _emit 0x02
    _emit 0x8B
    _emit 0xDE
    _emit 0x74
    _emit 0x0F
    _emit 0xE8
    _emit 0xF3
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x1C
    _emit 0x89
    _emit 0x01
    _emit 0xEB
    _emit 0x0D
    _emit 0xE8
    _emit 0x64
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x10
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x89
    _emit 0x10
    _emit 0x8B
    _emit 0x55
    _emit 0x14
    _emit 0x8D
    _emit 0x45
    _emit 0x10
    _emit 0x8D
    _emit 0x4E
    _emit 0x10
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0x85
    _emit 0xD2
    _emit 0x74
    _emit 0x09
    _emit 0x89
    _emit 0x51
    _emit 0x04
    _emit 0x8B
    _emit 0x50
    _emit 0x04
    _emit 0x89
    _emit 0x4A
    _emit 0x08
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x89
    _emit 0x41
    _emit 0x08
    _emit 0xF7
    _emit 0x05
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0xD0
    _emit 0xF1
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x8C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xFE
    _emit 0x0D
    _emit 0x21
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
  }
  __assume(0);
}
