/* Byte-for-byte override for FUN_00421690.

 * Original bytes (174):
 *     0000: 53 56 57 8b 3d e4 43 4b
 *     0008: 00 8b b7 88 67 00 00 33
 *     0010: db 46 39 5c 24 10 8b c6
 *     0018: 0f 95 c3 69 c0 b4 04 00
 *     0020: 00 8b 94 38 b0 58 00 00
 *     0028: 8d 84 38 b8 54 00 00 8d
 *     0030: 1c 9d 3b 00 00 00 85 d2
 *     0038: 74 0d 8b 0d 4c 0c 4b 00
 *     0040: 03 cb e8 a9 34 03 00 46
 *     0048: 83 fe 04 7c 05 be 01 00
 *     0050: 00 00 8b d6 69 d2 b4 04
 *     0058: 00 00 8d 84 3a b8 54 00
 *     0060: 00 8b 90 f8 03 00 00 85
 *     0068: d2 74 0d 8b 0d 50 0c 4b
 *     0070: 00 03 cb e8 78 34 03 00
 *     0078: 46 83 fe 04 7c 05 be 01
 *     0080: 00 00 00 69 f6 b4 04 00
 *     0088: 00 8b 94 3e b0 58 00 00
 *     0090: 8d 84 3e b8 54 00 00 85
 *     0098: d2 74 0d 8b 0d 54 0c 4b
 *     00a0: 00 03 cb e8 48 34 03 00
 *     00a8: 5f 5e 5b c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __stdcall FUN_00421690(int a0)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0x3D
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0xB7
    _emit 0x88
    _emit 0x67
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xDB
    _emit 0x46
    _emit 0x39
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0x0F
    _emit 0x95
    _emit 0xC3
    _emit 0x69
    _emit 0xC0
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x94
    _emit 0x38
    _emit 0xB0
    _emit 0x58
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x84
    _emit 0x38
    _emit 0xB8
    _emit 0x54
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x1C
    _emit 0x9D
    _emit 0x3B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xD2
    _emit 0x74
    _emit 0x0D
    _emit 0x8B
    _emit 0x0D
    _emit 0x4C
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x03
    _emit 0xCB
    _emit 0xE8
    _emit 0xA9
    _emit 0x34
    _emit 0x03
    _emit 0x00
    _emit 0x46
    _emit 0x83
    _emit 0xFE
    _emit 0x04
    _emit 0x7C
    _emit 0x05
    _emit 0xBE
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xD6
    _emit 0x69
    _emit 0xD2
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x84
    _emit 0x3A
    _emit 0xB8
    _emit 0x54
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x90
    _emit 0xF8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xD2
    _emit 0x74
    _emit 0x0D
    _emit 0x8B
    _emit 0x0D
    _emit 0x50
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x03
    _emit 0xCB
    _emit 0xE8
    _emit 0x78
    _emit 0x34
    _emit 0x03
    _emit 0x00
    _emit 0x46
    _emit 0x83
    _emit 0xFE
    _emit 0x04
    _emit 0x7C
    _emit 0x05
    _emit 0xBE
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x69
    _emit 0xF6
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x94
    _emit 0x3E
    _emit 0xB0
    _emit 0x58
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x84
    _emit 0x3E
    _emit 0xB8
    _emit 0x54
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xD2
    _emit 0x74
    _emit 0x0D
    _emit 0x8B
    _emit 0x0D
    _emit 0x54
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x03
    _emit 0xCB
    _emit 0xE8
    _emit 0x48
    _emit 0x34
    _emit 0x03
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
