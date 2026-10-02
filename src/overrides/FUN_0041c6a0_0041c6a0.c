/* Byte-for-byte override for FUN_0041c6a0_0041c6a0.

 * Original bytes (181):
 *     0000: 83 ec 10 f7 05 78 ee 4c
 *     0008: 00 00 80 00 00 53 55 8b
 *     0010: 6c 24 1c 56 8b d8 74 11
 *     0018: 68 d0 f1 4c 00 ff 15 88
 *     0020: 80 49 00 fe 05 21 f2 4c
 *     0028: 00 ff 87 30 01 00 00 e8
 *     0030: ec 5a 04 00 8b f0 85 db
 *     0038: 7c 03 89 5e 20 d9 ee 83
 *     0040: 8e 80 04 00 00 01 d9 54
 *     0048: 24 10 8b 44 24 10 d9 54
 *     0050: 24 14 8b 4c 24 14 d9 5c
 *     0058: 24 18 8b 54 24 18 89 86
 *     0060: 30 04 00 00 8b 44 24 24
 *     0068: 89 8e 34 04 00 00 50 56
 *     0070: 8b cf 89 96 38 04 00 00
 *     0078: e8 f3 85 03 00 8b de 8d
 *     0080: 44 24 20 e8 a8 4b 04 00
 *     0088: f7 05 78 ee 4c 00 00 80
 *     0090: 00 00 8b 08 89 4d 00 74
 *     0098: 11 68 d0 f1 4c 00 ff 15
 *     00a0: 8c 80 49 00 fe 0d 21 f2
 *     00a8: 4c 00 5e 8b c5 5d 5b 83
 *     00b0: c4 10 c2 08 00
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

undefined4 * __stdcall FUN_0041c6a0(undefined4 *param_1,int param_2)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x10
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
    _emit 0x1C
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
    _emit 0xEC
    _emit 0x5A
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x85
    _emit 0xDB
    _emit 0x7C
    _emit 0x03
    _emit 0x89
    _emit 0x5E
    _emit 0x20
    _emit 0xD9
    _emit 0xEE
    _emit 0x83
    _emit 0x8E
    _emit 0x80
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x18
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0x86
    _emit 0x30
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x24
    _emit 0x89
    _emit 0x8E
    _emit 0x34
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x56
    _emit 0x8B
    _emit 0xCF
    _emit 0x89
    _emit 0x96
    _emit 0x38
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xF3
    _emit 0x85
    _emit 0x03
    _emit 0x00
    _emit 0x8B
    _emit 0xDE
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0xE8
    _emit 0xA8
    _emit 0x4B
    _emit 0x04
    _emit 0x00
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
    _emit 0x8B
    _emit 0x08
    _emit 0x89
    _emit 0x4D
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
    _emit 0x5E
    _emit 0x8B
    _emit 0xC5
    _emit 0x5D
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
