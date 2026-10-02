/* Byte-for-byte override for FUN_00463c10_00463c10.

 * Original bytes (466):
 *     0000: 51 53 55 56 bd 00 80 00
 *     0008: 00 57 8b f8 85 2d 78 ee
 *     0010: 4c 00 74 11 68 28 f1 4c
 *     0018: 00 ff 15 88 80 49 00 fe
 *     0020: 05 1a f2 4c 00 83 7c 24
 *     0028: 1c 00 0f 85 bd 00 00 00
 *     0030: 6a 5c 57 e8 18 96 00 00
 *     0038: 83 c4 08 85 c0 75 04 8b
 *     0040: c7 eb 01 40 6a 2f 50 e8
 *     0048: 04 96 00 00 8b e8 83 c4
 *     0050: 08 85 ed 75 04 8b ef eb
 *     0058: 01 45 8b 3d 90 4c 4d 00
 *     0060: 85 ff 74 24 8b 35 94 4c
 *     0068: 4d 00 85 f6 7e 1a 8b ff
 *     0070: 8b 07 50 55 e8 6f a7 00
 *     0078: 00 83 c4 08 85 c0 74 68
 *     0080: 4e 83 c7 10 85 f6 7f e8
 *     0088: 33 ff 8b 44 24 18 89 7c
 *     0090: 24 10 85 c0 74 02 89 38
 *     0098: 85 ff 0f 84 be 00 00 00
 *     00a0: 55 68 20 36 4a 00 e8 f5
 *     00a8: 17 00 00 8b 4c 24 18 51
 *     00b0: e8 85 93 00 00 8b d8 83
 *     00b8: c4 0c 85 db 0f 84 9c 00
 *     00c0: 00 00 53 68 90 4c 4d 00
 *     00c8: 8b cd e8 d1 7a fe ff be
 *     00d0: 02 00 00 00 bf e8 e8 4c
 *     00d8: 00 e8 12 db fc ff 5f 5e
 *     00e0: 5d 8b c3 5b 59 c2 08 00
 *     00e8: 8b 7f 08 eb 9d 57 68 34
 *     00f0: 36 4a 00 e8 a8 17 00 00
 *     00f8: 83 c4 08 6a 00 68 80 00
 *     0100: 00 08 6a 03 6a 00 6a 01
 *     0108: 68 00 00 00 80 57 ff 15
 *     0110: 9c 80 49 00 8b f0 83 fe
 *     0118: ff 75 10 57 68 44 36 4a
 *     0120: 00 e8 7a 17 00 00 83 c4
 *     0128: 08 eb 38 6a 00 56 ff 15
 *     0130: b0 80 49 00 50 89 44 24
 *     0138: 14 e8 fc 92 00 00 8b d8
 *     0140: 83 c4 04 85 db 75 3f 57
 *     0148: 68 60 36 4a 00 e8 4e 17
 *     0150: 00 00 83 c4 08 56 ff 15
 *     0158: a4 80 49 00 eb 05 bd 00
 *     0160: 80 00 00 85 2d 78 ee 4c
 *     0168: 00 74 11 68 28 f1 4c 00
 *     0170: ff 15 8c 80 49 00 fe 0d
 *     0178: 1a f2 4c 00 5f 5e 5d 33
 *     0180: c0 5b 59 c2 08 00 8b 44
 *     0188: 24 10 6a 00 8d 54 24 14
 *     0190: 52 50 53 56 ff 15 a8 80
 *     0198: 49 00 8b 44 24 18 85 c0
 *     01a0: 74 06 8b 4c 24 10 89 08
 *     01a8: 56 ff 15 a4 80 49 00 85
 *     01b0: 2d 78 ee 4c 00 74 11 68
 *     01b8: 28 f1 4c 00 ff 15 8c 80
 *     01c0: 49 00 fe 0d 1a f2 4c 00
 *     01c8: 5f 5e 5d 8b c3 5b 59 c2
 *     01d0: 08 00
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

byte * __stdcall FUN_00463c10(size_t *param_1,int param_2)
{
  __asm {
    _emit 0x51
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0xBD
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x85
    _emit 0x2D
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0x28
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
    _emit 0x1A
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x83
    _emit 0x7C
    _emit 0x24
    _emit 0x1C
    _emit 0x00
    _emit 0x0F
    _emit 0x85
    _emit 0xBD
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x5C
    _emit 0x57
    _emit 0xE8
    _emit 0x18
    _emit 0x96
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x04
    _emit 0x8B
    _emit 0xC7
    _emit 0xEB
    _emit 0x01
    _emit 0x40
    _emit 0x6A
    _emit 0x2F
    _emit 0x50
    _emit 0xE8
    _emit 0x04
    _emit 0x96
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xE8
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x85
    _emit 0xED
    _emit 0x75
    _emit 0x04
    _emit 0x8B
    _emit 0xEF
    _emit 0xEB
    _emit 0x01
    _emit 0x45
    _emit 0x8B
    _emit 0x3D
    _emit 0x90
    _emit 0x4C
    _emit 0x4D
    _emit 0x00
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x24
    _emit 0x8B
    _emit 0x35
    _emit 0x94
    _emit 0x4C
    _emit 0x4D
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x7E
    _emit 0x1A
    _emit 0x8B
    _emit 0xFF
    _emit 0x8B
    _emit 0x07
    _emit 0x50
    _emit 0x55
    _emit 0xE8
    _emit 0x6F
    _emit 0xA7
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x68
    _emit 0x4E
    _emit 0x83
    _emit 0xC7
    _emit 0x10
    _emit 0x85
    _emit 0xF6
    _emit 0x7F
    _emit 0xE8
    _emit 0x33
    _emit 0xFF
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x10
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x02
    _emit 0x89
    _emit 0x38
    _emit 0x85
    _emit 0xFF
    _emit 0x0F
    _emit 0x84
    _emit 0xBE
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x55
    _emit 0x68
    _emit 0x20
    _emit 0x36
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0xF5
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0x51
    _emit 0xE8
    _emit 0x85
    _emit 0x93
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xD8
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x85
    _emit 0xDB
    _emit 0x0F
    _emit 0x84
    _emit 0x9C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x68
    _emit 0x90
    _emit 0x4C
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0xCD
    _emit 0xE8
    _emit 0xD1
    _emit 0x7A
    _emit 0xFE
    _emit 0xFF
    _emit 0xBE
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBF
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x12
    _emit 0xDB
    _emit 0xFC
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0x8B
    _emit 0x7F
    _emit 0x08
    _emit 0xEB
    _emit 0x9D
    _emit 0x57
    _emit 0x68
    _emit 0x34
    _emit 0x36
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0xA8
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x6A
    _emit 0x00
    _emit 0x68
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x6A
    _emit 0x03
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0x68
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x57
    _emit 0xFF
    _emit 0x15
    _emit 0x9C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xFE
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0x57
    _emit 0x68
    _emit 0x44
    _emit 0x36
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x7A
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0xEB
    _emit 0x38
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0xB0
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x50
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0xE8
    _emit 0xFC
    _emit 0x92
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xD8
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xDB
    _emit 0x75
    _emit 0x3F
    _emit 0x57
    _emit 0x68
    _emit 0x60
    _emit 0x36
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x4E
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0xA4
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xEB
    _emit 0x05
    _emit 0xBD
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0x2D
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0x28
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
    _emit 0x1A
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x6A
    _emit 0x00
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x52
    _emit 0x50
    _emit 0x53
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0xA8
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x06
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x89
    _emit 0x08
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0xA4
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x85
    _emit 0x2D
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0x28
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
    _emit 0x1A
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
