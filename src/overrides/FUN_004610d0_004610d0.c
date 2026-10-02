/* Byte-for-byte override for FUN_004610d0.

 * Original bytes (243):
 *     0000: 55 8b ec 83 e4 f8 83 ec
 *     0008: 08 f7 05 78 ee 4c 00 00
 *     0010: 80 00 00 53 56 74 11 68
 *     0018: d0 f1 4c 00 ff 15 88 80
 *     0020: 49 00 fe 05 21 f2 4c 00
 *     0028: 33 c9 8d 87 e0 e3 88 00
 *     0030: 89 8f fc e3 88 00 89 8f
 *     0038: b0 e8 88 00 89 44 24 08
 *     0040: 8b 87 c0 56 88 00 8d 97
 *     0048: 94 e8 88 00 89 54 24 0c
 *     0050: 89 8f b8 00 00 00 3b c1
 *     0058: 74 71 8b 30 f7 86 7c 04
 *     0060: 00 00 00 00 00 10 8b 58
 *     0068: 04 74 08 57 e8 0f 03 00
 *     0070: 00 eb 4c 8b 86 88 04 00
 *     0078: 00 85 c0 74 04 8b ce ff
 *     0080: d0 56 e8 d9 44 ff ff 85
 *     0088: c0 74 08 57 e8 ef 02 00
 *     0090: 00 eb 2c 8b 46 20 83 f8
 *     0098: 1e 74 0c 83 f8 1f 74 07
 *     00a0: c7 46 20 1e 00 00 00 8b
 *     00a8: 46 20 8b 4c 84 90 89 71
 *     00b0: 1c 8b 56 20 89 74 94 90
 *     00b8: c7 46 1c 00 00 00 00 ff
 *     00c0: 87 b8 00 00 00 8b c3 85
 *     00c8: db 75 8f f7 05 78 ee 4c
 *     00d0: 00 00 80 00 00 74 11 68
 *     00d8: d0 f1 4c 00 ff 15 8c 80
 *     00e0: 49 00 fe 0d 21 f2 4c 00
 *     00e8: 5e b8 01 00 00 00 5b 8b
 *     00f0: e5 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_004610d0(void)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xE4
    _emit 0xF8
    _emit 0x83
    _emit 0xEC
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
    _emit 0x53
    _emit 0x56
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
    _emit 0x33
    _emit 0xC9
    _emit 0x8D
    _emit 0x87
    _emit 0xE0
    _emit 0xE3
    _emit 0x88
    _emit 0x00
    _emit 0x89
    _emit 0x8F
    _emit 0xFC
    _emit 0xE3
    _emit 0x88
    _emit 0x00
    _emit 0x89
    _emit 0x8F
    _emit 0xB0
    _emit 0xE8
    _emit 0x88
    _emit 0x00
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x87
    _emit 0xC0
    _emit 0x56
    _emit 0x88
    _emit 0x00
    _emit 0x8D
    _emit 0x97
    _emit 0x94
    _emit 0xE8
    _emit 0x88
    _emit 0x00
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x8F
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC1
    _emit 0x74
    _emit 0x71
    _emit 0x8B
    _emit 0x30
    _emit 0xF7
    _emit 0x86
    _emit 0x7C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x10
    _emit 0x8B
    _emit 0x58
    _emit 0x04
    _emit 0x74
    _emit 0x08
    _emit 0x57
    _emit 0xE8
    _emit 0x0F
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x4C
    _emit 0x8B
    _emit 0x86
    _emit 0x88
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x04
    _emit 0x8B
    _emit 0xCE
    _emit 0xFF
    _emit 0xD0
    _emit 0x56
    _emit 0xE8
    _emit 0xD9
    _emit 0x44
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x08
    _emit 0x57
    _emit 0xE8
    _emit 0xEF
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x2C
    _emit 0x8B
    _emit 0x46
    _emit 0x20
    _emit 0x83
    _emit 0xF8
    _emit 0x1E
    _emit 0x74
    _emit 0x0C
    _emit 0x83
    _emit 0xF8
    _emit 0x1F
    _emit 0x74
    _emit 0x07
    _emit 0xC7
    _emit 0x46
    _emit 0x20
    _emit 0x1E
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x20
    _emit 0x8B
    _emit 0x4C
    _emit 0x84
    _emit 0x90
    _emit 0x89
    _emit 0x71
    _emit 0x1C
    _emit 0x8B
    _emit 0x56
    _emit 0x20
    _emit 0x89
    _emit 0x74
    _emit 0x94
    _emit 0x90
    _emit 0xC7
    _emit 0x46
    _emit 0x1C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x87
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC3
    _emit 0x85
    _emit 0xDB
    _emit 0x75
    _emit 0x8F
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
    _emit 0x5E
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
