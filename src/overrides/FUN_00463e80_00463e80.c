/* Byte-for-byte override for FUN_00463e80.

 * Original bytes (297):
 *     0000: 51 55 bd 00 80 00 00 56
 *     0008: 85 2d 78 ee 4c 00 74 11
 *     0010: 68 28 f1 4c 00 ff 15 88
 *     0018: 80 49 00 fe 05 1a f2 4c
 *     0020: 00 6a 00 68 80 00 00 00
 *     0028: 6a 02 6a 00 6a 01 68 00
 *     0030: 00 00 40 57 ff 15 9c 80
 *     0038: 49 00 8b f0 6a 00 83 fe
 *     0040: ff 75 60 6a 00 8d 44 24
 *     0048: 18 50 68 00 04 00 00 ff
 *     0050: 15 e4 80 49 00 50 6a 00
 *     0058: 68 00 13 00 00 ff 15 fc
 *     0060: 80 49 00 8b 4c 24 10 51
 *     0068: 57 68 80 36 4a 00 e8 bd
 *     0070: 15 00 00 8b 54 24 1c 83
 *     0078: c4 0c 52 ff 15 00 81 49
 *     0080: 00 85 2d 78 ee 4c 00 74
 *     0088: 11 68 28 f1 4c 00 ff 15
 *     0090: 8c 80 49 00 fe 0d 1a f2
 *     0098: 4c 00 5e 83 c8 ff 5d 59
 *     00a0: c2 04 00 8b 4c 24 14 8d
 *     00a8: 44 24 0c 50 53 51 56 ff
 *     00b0: 15 ac 80 49 00 56 3b 5c
 *     00b8: 24 0c 74 38 ff 15 a4 80
 *     00c0: 49 00 57 68 9c 36 4a 00
 *     00c8: e8 63 15 00 00 83 c4 08
 *     00d0: 85 2d 78 ee 4c 00 74 11
 *     00d8: 68 28 f1 4c 00 ff 15 8c
 *     00e0: 80 49 00 fe 0d 1a f2 4c
 *     00e8: 00 5e b8 fe ff ff ff 5d
 *     00f0: 59 c2 04 00 ff 15 a4 80
 *     00f8: 49 00 57 68 b8 36 4a 00
 *     0100: e8 2b 15 00 00 83 c4 08
 *     0108: 85 2d 78 ee 4c 00 74 11
 *     0110: 68 28 f1 4c 00 ff 15 8c
 *     0118: 80 49 00 fe 0d 1a f2 4c
 *     0120: 00 5e 33 c0 5d 59 c2 04
 *     0128: 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00463e80(LPCVOID a0)
{
  __asm {
    _emit 0x51
    _emit 0x55
    _emit 0xBD
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x56
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
    _emit 0x6A
    _emit 0x00
    _emit 0x68
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x02
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0x68
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x40
    _emit 0x57
    _emit 0xFF
    _emit 0x15
    _emit 0x9C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x6A
    _emit 0x00
    _emit 0x83
    _emit 0xFE
    _emit 0xFF
    _emit 0x75
    _emit 0x60
    _emit 0x6A
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x50
    _emit 0x68
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0xE4
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x50
    _emit 0x6A
    _emit 0x00
    _emit 0x68
    _emit 0x00
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0xFC
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x51
    _emit 0x57
    _emit 0x68
    _emit 0x80
    _emit 0x36
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0xBD
    _emit 0x15
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x52
    _emit 0xFF
    _emit 0x15
    _emit 0x00
    _emit 0x81
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
    _emit 0x5E
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5D
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x50
    _emit 0x53
    _emit 0x51
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0xAC
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x56
    _emit 0x3B
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x74
    _emit 0x38
    _emit 0xFF
    _emit 0x15
    _emit 0xA4
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x57
    _emit 0x68
    _emit 0x9C
    _emit 0x36
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x63
    _emit 0x15
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
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
    _emit 0x5E
    _emit 0xB8
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x5D
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0xA4
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x57
    _emit 0x68
    _emit 0xB8
    _emit 0x36
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x2B
    _emit 0x15
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
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
    _emit 0x5E
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
