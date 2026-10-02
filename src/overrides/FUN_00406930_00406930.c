/* Byte-for-byte override for FUN_00406930.

 * Original bytes (482):
 *     0000: 6a ff 68 db 75 49 00 64
 *     0008: a1 00 00 00 00 50 53 55
 *     0010: 56 57 a1 38 d1 4a 00 33
 *     0018: c4 50 8d 44 24 14 64 a3
 *     0020: 00 00 00 00 8b 7c 24 24
 *     0028: 33 ed 89 6c 24 1c 39 6f
 *     0030: 3c 74 2c a1 94 0c 4b 00
 *     0038: 8b 0d 90 0c 4b 00 8d 14
 *     0040: 48 83 fa 05 75 19 8b 47
 *     0048: 40 50 e8 f1 b0 05 00 8d
 *     0050: 5d 0a b8 40 0c 4b 00 89
 *     0058: 6f 40 e8 e1 c3 01 00 8b
 *     0060: 4f 40 51 e8 d8 b0 05 00
 *     0068: 89 6f 40 8b 57 44 52 e8
 *     0070: cc b0 05 00 89 6f 44 8b
 *     0078: 47 48 50 e8 c0 b0 05 00
 *     0080: 8b 1d 9c e8 4c 00 89 6f
 *     0088: 48 8b 77 08 3b f5 74 43
 *     0090: f7 05 78 ee 4c 00 00 80
 *     0098: 00 00 74 11 68 f8 f0 4c
 *     00a0: 00 ff 15 88 80 49 00 fe
 *     00a8: 05 18 f2 4c 00 8b ce 8b
 *     00b0: d3 e8 aa be 05 00 f7 05
 *     00b8: 78 ee 4c 00 00 80 00 00
 *     00c0: 74 11 68 f8 f0 4c 00 ff
 *     00c8: 15 8c 80 49 00 fe 0d 18
 *     00d0: f2 4c 00 8b 77 0c 8b 1d
 *     00d8: 9c e8 4c 00 3b f5 74 43
 *     00e0: f7 05 78 ee 4c 00 00 80
 *     00e8: 00 00 74 11 68 f8 f0 4c
 *     00f0: 00 ff 15 88 80 49 00 fe
 *     00f8: 05 18 f2 4c 00 8b ce 8b
 *     0100: d3 e8 5a be 05 00 f7 05
 *     0108: 78 ee 4c 00 00 80 00 00
 *     0110: 74 11 68 f8 f0 4c 00 ff
 *     0118: 15 8c 80 49 00 fe 0d 18
 *     0120: f2 4c 00 8b b7 20 05 00
 *     0128: 00 8b 1d 9c e8 4c 00 3b
 *     0130: f5 74 43 f7 05 78 ee 4c
 *     0138: 00 00 80 00 00 74 11 68
 *     0140: f8 f0 4c 00 ff 15 88 80
 *     0148: 49 00 fe 05 18 f2 4c 00
 *     0150: 8b ce 8b d3 e8 07 be 05
 *     0158: 00 f7 05 78 ee 4c 00 00
 *     0160: 80 00 00 74 11 68 f8 f0
 *     0168: 4c 00 ff 15 8c 80 49 00
 *     0170: fe 0d 18 f2 4c 00 8b b7
 *     0178: 04 05 00 00 89 2d c4 43
 *     0180: 4b 00 3b f5 74 0e e8 b5
 *     0188: bd ff ff 56 e8 8e 5f 06
 *     0190: 00 83 c4 04 8b 87 00 05
 *     0198: 00 00 89 af 04 05 00 00
 *     01a0: 3b c5 74 0f 50 e8 67 5e
 *     01a8: 06 00 83 c4 04 89 af 00
 *     01b0: 05 00 00 8b 87 c4 04 00
 *     01b8: 00 3b c5 74 09 50 e8 4e
 *     01c0: 5e 06 00 83 c4 04 89 af
 *     01c8: c4 04 00 00 8b 4c 24 14
 *     01d0: 64 89 0d 00 00 00 00 59
 *     01d8: 5f 5e 5d 5b 83 c4 0c c2
 *     01e0: 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00406930(int a0)
{
  __asm {
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0xDB
    _emit 0x75
    _emit 0x49
    _emit 0x00
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
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
    _emit 0x14
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x24
    _emit 0x33
    _emit 0xED
    _emit 0x89
    _emit 0x6C
    _emit 0x24
    _emit 0x1C
    _emit 0x39
    _emit 0x6F
    _emit 0x3C
    _emit 0x74
    _emit 0x2C
    _emit 0xA1
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x14
    _emit 0x48
    _emit 0x83
    _emit 0xFA
    _emit 0x05
    _emit 0x75
    _emit 0x19
    _emit 0x8B
    _emit 0x47
    _emit 0x40
    _emit 0x50
    _emit 0xE8
    _emit 0xF1
    _emit 0xB0
    _emit 0x05
    _emit 0x00
    _emit 0x8D
    _emit 0x5D
    _emit 0x0A
    _emit 0xB8
    _emit 0x40
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x6F
    _emit 0x40
    _emit 0xE8
    _emit 0xE1
    _emit 0xC3
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x4F
    _emit 0x40
    _emit 0x51
    _emit 0xE8
    _emit 0xD8
    _emit 0xB0
    _emit 0x05
    _emit 0x00
    _emit 0x89
    _emit 0x6F
    _emit 0x40
    _emit 0x8B
    _emit 0x57
    _emit 0x44
    _emit 0x52
    _emit 0xE8
    _emit 0xCC
    _emit 0xB0
    _emit 0x05
    _emit 0x00
    _emit 0x89
    _emit 0x6F
    _emit 0x44
    _emit 0x8B
    _emit 0x47
    _emit 0x48
    _emit 0x50
    _emit 0xE8
    _emit 0xC0
    _emit 0xB0
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x1D
    _emit 0x9C
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x6F
    _emit 0x48
    _emit 0x8B
    _emit 0x77
    _emit 0x08
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x43
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
    _emit 0xF8
    _emit 0xF0
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
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xCE
    _emit 0x8B
    _emit 0xD3
    _emit 0xE8
    _emit 0xAA
    _emit 0xBE
    _emit 0x05
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
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
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
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x77
    _emit 0x0C
    _emit 0x8B
    _emit 0x1D
    _emit 0x9C
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x43
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
    _emit 0xF8
    _emit 0xF0
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
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xCE
    _emit 0x8B
    _emit 0xD3
    _emit 0xE8
    _emit 0x5A
    _emit 0xBE
    _emit 0x05
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
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
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
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xB7
    _emit 0x20
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x1D
    _emit 0x9C
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x43
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
    _emit 0xF8
    _emit 0xF0
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
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xCE
    _emit 0x8B
    _emit 0xD3
    _emit 0xE8
    _emit 0x07
    _emit 0xBE
    _emit 0x05
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
    _emit 0x74
    _emit 0x11
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
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
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xB7
    _emit 0x04
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x2D
    _emit 0xC4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0E
    _emit 0xE8
    _emit 0xB5
    _emit 0xBD
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x8E
    _emit 0x5F
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x87
    _emit 0x00
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xAF
    _emit 0x04
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x0F
    _emit 0x50
    _emit 0xE8
    _emit 0x67
    _emit 0x5E
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0xAF
    _emit 0x00
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x87
    _emit 0xC4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC5
    _emit 0x74
    _emit 0x09
    _emit 0x50
    _emit 0xE8
    _emit 0x4E
    _emit 0x5E
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0xAF
    _emit 0xC4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
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
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
