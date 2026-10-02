/* Byte-for-byte override for FUN_004111b0_004111b0.

 * Original bytes (585):
 *     0000: 6a ff 68 de 74 49 00 64
 *     0008: a1 00 00 00 00 50 83 ec
 *     0010: 08 53 55 56 57 a1 38 d1
 *     0018: 4a 00 33 c4 50 8d 44 24
 *     0020: 1c 64 a3 00 00 00 00 8b
 *     0028: 74 24 2c b8 fe ff ff ff
 *     0030: 21 46 14 21 46 28 21 46
 *     0038: 3c 33 ed c7 86 d0 00 00
 *     0040: 00 38 37 4a 00 89 ae d4
 *     0048: 00 00 00 89 ae d8 00 00
 *     0050: 00 89 ae dc 00 00 00 89
 *     0058: ae e0 00 00 00 68 f0 00
 *     0060: 00 00 55 56 89 6c 24 30
 *     0068: e8 03 62 06 00 83 c4 0c
 *     0070: 33 c0 89 44 24 14 8d 7e
 *     0078: 40 8d a4 24 00 00 00 00
 *     0080: 8b 0d 70 ee 4c 00 55 83
 *     0088: c0 44 50 8d 44 24 20 50
 *     0090: 51 b8 17 00 00 00 33 c9
 *     0098: e8 53 03 05 00 8b 54 24
 *     00a0: 18 8b ca 89 17 8b 15 cc
 *     00a8: e8 4c 00 3b cd 75 04 33
 *     00b0: c0 eb 3b 8b 82 b8 56 88
 *     00b8: 00 3b c5 74 10 8d 49 00
 *     00c0: 8b 18 39 0b 74 22 8b 40
 *     00c8: 04 3b c5 75 f3 8b 82 c0
 *     00d0: 56 88 00 3b c5 74 d8 8b
 *     00d8: 18 39 0b 74 0b 8b 40 04
 *     00e0: 3b c5 75 f3 33 c0 eb 06
 *     00e8: 8b c3 3b c5 75 02 89 2f
 *     00f0: c6 80 9c 04 00 00 10 8b
 *     00f8: 0f 3b cd 75 04 33 c0 eb
 *     0100: 3d 8b 82 b8 56 88 00 3b
 *     0108: c5 74 12 eb 03 8d 49 00
 *     0110: 8b 18 39 0b 74 22 8b 40
 *     0118: 04 3b c5 75 f3 8b 82 c0
 *     0120: 56 88 00 3b c5 74 d6 8b
 *     0128: 18 39 0b 74 0b 8b 40 04
 *     0130: 3b c5 75 f3 33 c0 eb 06
 *     0138: 8b c3 3b c5 75 02 89 2f
 *     0140: c6 80 9d 04 00 00 10 8b
 *     0148: 0f 3b cd 75 04 33 c0 eb
 *     0150: 41 8b 82 b8 56 88 00 3b
 *     0158: c5 74 12 eb 03 8d 49 00
 *     0160: 8b 18 39 0b 74 22 8b 40
 *     0168: 04 3b c5 75 f3 8b 82 c0
 *     0170: 56 88 00 3b c5 74 d6 8b
 *     0178: 10 39 0a 74 0f 8b 40 04
 *     0180: 3b c5 75 f3 33 c0 eb 0a
 *     0188: 8b c3 eb 02 8b c2 3b c5
 *     0190: 75 02 89 2f 83 88 80 04
 *     0198: 00 00 08 8b 44 24 14 40
 *     01a0: 83 c7 04 89 44 24 14 83
 *     01a8: f8 05 0f 82 d0 fe ff ff
 *     01b0: 8b 44 24 30 d9 ee 89 46
 *     01b8: 54 8b 46 14 ba c1 bd f0
 *     01c0: ff b9 d0 2e 4b 00 a8 01
 *     01c8: 75 12 83 c8 01 d9 56 0c
 *     01d0: 89 6e 08 89 56 04 89 4e
 *     01d8: 10 89 46 14 83 cf ff d9
 *     01e0: 56 0c 89 6e 08 89 7e 04
 *     01e8: 8b 46 28 a8 01 75 12 83
 *     01f0: c8 01 d9 56 20 89 6e 1c
 *     01f8: 89 56 18 89 4e 24 89 46
 *     0200: 28 d9 56 20 89 6e 1c 89
 *     0208: 7e 18 8b 46 3c a8 01 75
 *     0210: 12 83 c8 01 d9 56 34 89
 *     0218: 6e 30 89 56 2c 89 4e 38
 *     0220: 89 46 3c d9 5e 34 89 6e
 *     0228: 30 89 7e 2c 83 4e 74 01
 *     0230: c7 46 7c ff ff ff 00 8b
 *     0238: c6 8b 4c 24 1c 64 89 0d
 *     0240: 00 00 00 00 59 5f 5e 5d
 *     0248: 5b
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

void * __stdcall FUN_004111b0(void *param_1,undefined4 param_2)
{
  __asm {
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0xDE
    _emit 0x74
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
    _emit 0x08
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x57
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
    _emit 0x1C
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x2C
    _emit 0xB8
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x21
    _emit 0x46
    _emit 0x14
    _emit 0x21
    _emit 0x46
    _emit 0x28
    _emit 0x21
    _emit 0x46
    _emit 0x3C
    _emit 0x33
    _emit 0xED
    _emit 0xC7
    _emit 0x86
    _emit 0xD0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x38
    _emit 0x37
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0xD4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0xD8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0xDC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0xE0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0xF0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x55
    _emit 0x56
    _emit 0x89
    _emit 0x6C
    _emit 0x24
    _emit 0x30
    _emit 0xE8
    _emit 0x03
    _emit 0x62
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x8D
    _emit 0x7E
    _emit 0x40
    _emit 0x8D
    _emit 0xA4
    _emit 0x24
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x70
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x55
    _emit 0x83
    _emit 0xC0
    _emit 0x44
    _emit 0x50
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0x50
    _emit 0x51
    _emit 0xB8
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0xE8
    _emit 0x53
    _emit 0x03
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x18
    _emit 0x8B
    _emit 0xCA
    _emit 0x89
    _emit 0x17
    _emit 0x8B
    _emit 0x15
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x3B
    _emit 0xCD
    _emit 0x75
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x3B
    _emit 0x8B
    _emit 0x82
    _emit 0xB8
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x10
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x18
    _emit 0x39
    _emit 0x0B
    _emit 0x74
    _emit 0x22
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0xF3
    _emit 0x8B
    _emit 0x82
    _emit 0xC0
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0xD8
    _emit 0x8B
    _emit 0x18
    _emit 0x39
    _emit 0x0B
    _emit 0x74
    _emit 0x0B
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0xF3
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x06
    _emit 0x8B
    _emit 0xC3
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0x02
    _emit 0x89
    _emit 0x2F
    _emit 0xC6
    _emit 0x80
    _emit 0x9C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x10
    _emit 0x8B
    _emit 0x0F
    _emit 0x3B
    _emit 0xCD
    _emit 0x75
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x3D
    _emit 0x8B
    _emit 0x82
    _emit 0xB8
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x12
    _emit 0xEB
    _emit 0x03
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x18
    _emit 0x39
    _emit 0x0B
    _emit 0x74
    _emit 0x22
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0xF3
    _emit 0x8B
    _emit 0x82
    _emit 0xC0
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0xD6
    _emit 0x8B
    _emit 0x18
    _emit 0x39
    _emit 0x0B
    _emit 0x74
    _emit 0x0B
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0xF3
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x06
    _emit 0x8B
    _emit 0xC3
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0x02
    _emit 0x89
    _emit 0x2F
    _emit 0xC6
    _emit 0x80
    _emit 0x9D
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x10
    _emit 0x8B
    _emit 0x0F
    _emit 0x3B
    _emit 0xCD
    _emit 0x75
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x41
    _emit 0x8B
    _emit 0x82
    _emit 0xB8
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x12
    _emit 0xEB
    _emit 0x03
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x18
    _emit 0x39
    _emit 0x0B
    _emit 0x74
    _emit 0x22
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0xF3
    _emit 0x8B
    _emit 0x82
    _emit 0xC0
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0xD6
    _emit 0x8B
    _emit 0x10
    _emit 0x39
    _emit 0x0A
    _emit 0x74
    _emit 0x0F
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0xF3
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x0A
    _emit 0x8B
    _emit 0xC3
    _emit 0xEB
    _emit 0x02
    _emit 0x8B
    _emit 0xC2
    _emit 0x3B
    _emit 0xC5
    _emit 0x75
    _emit 0x02
    _emit 0x89
    _emit 0x2F
    _emit 0x83
    _emit 0x88
    _emit 0x80
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x40
    _emit 0x83
    _emit 0xC7
    _emit 0x04
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x83
    _emit 0xF8
    _emit 0x05
    _emit 0x0F
    _emit 0x82
    _emit 0xD0
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x30
    _emit 0xD9
    _emit 0xEE
    _emit 0x89
    _emit 0x46
    _emit 0x54
    _emit 0x8B
    _emit 0x46
    _emit 0x14
    _emit 0xBA
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xB9
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x0C
    _emit 0x89
    _emit 0x6E
    _emit 0x08
    _emit 0x89
    _emit 0x56
    _emit 0x04
    _emit 0x89
    _emit 0x4E
    _emit 0x10
    _emit 0x89
    _emit 0x46
    _emit 0x14
    _emit 0x83
    _emit 0xCF
    _emit 0xFF
    _emit 0xD9
    _emit 0x56
    _emit 0x0C
    _emit 0x89
    _emit 0x6E
    _emit 0x08
    _emit 0x89
    _emit 0x7E
    _emit 0x04
    _emit 0x8B
    _emit 0x46
    _emit 0x28
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x20
    _emit 0x89
    _emit 0x6E
    _emit 0x1C
    _emit 0x89
    _emit 0x56
    _emit 0x18
    _emit 0x89
    _emit 0x4E
    _emit 0x24
    _emit 0x89
    _emit 0x46
    _emit 0x28
    _emit 0xD9
    _emit 0x56
    _emit 0x20
    _emit 0x89
    _emit 0x6E
    _emit 0x1C
    _emit 0x89
    _emit 0x7E
    _emit 0x18
    _emit 0x8B
    _emit 0x46
    _emit 0x3C
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x34
    _emit 0x89
    _emit 0x6E
    _emit 0x30
    _emit 0x89
    _emit 0x56
    _emit 0x2C
    _emit 0x89
    _emit 0x4E
    _emit 0x38
    _emit 0x89
    _emit 0x46
    _emit 0x3C
    _emit 0xD9
    _emit 0x5E
    _emit 0x34
    _emit 0x89
    _emit 0x6E
    _emit 0x30
    _emit 0x89
    _emit 0x7E
    _emit 0x2C
    _emit 0x83
    _emit 0x4E
    _emit 0x74
    _emit 0x01
    _emit 0xC7
    _emit 0x46
    _emit 0x7C
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x1C
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
  }
  __assume(0);
}
