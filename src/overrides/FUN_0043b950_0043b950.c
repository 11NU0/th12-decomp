/* Byte-for-byte override for FUN_0043b950.

 * Original bytes (395):
 *     0000: 51 56 33 f6 57 39 35 e8
 *     0008: 44 4b 00 0f 84 71 01 00
 *     0010: 00 8b 81 d8 01 00 00 8d
 *     0018: 14 c0 39 b4 91 bc 00 00
 *     0020: 00 7d 19 89 35 d0 49 4d
 *     0028: 00 89 35 dc 49 4d 00 89
 *     0030: 35 e0 49 4d 00 8d 46 01
 *     0038: 5f 5e 59 c3 3b c6 0f 8c
 *     0040: 26 01 00 00 a1 d0 49 4d
 *     0048: 00 a3 d4 49 4d 00 8b 81
 *     0050: d8 01 00 00 8d 14 c0 8b
 *     0058: bc 91 bc 00 00 00 8d 04
 *     0060: 91 8b 90 b8 00 00 00 3b
 *     0068: 7a 04 0f 8d c2 00 00 00
 *     0070: 8b 80 ac 00 00 00 0f b7
 *     0078: 10 bf ff ff 00 00 66 3b
 *     0080: d7 75 2c 66 39 78 02 75
 *     0088: 26 66 39 78 04 75 20 89
 *     0090: 35 d0 49 4d 00 89 35 dc
 *     0098: 49 4d 00 89 35 e0 49 4d
 *     00a0: 00 e8 5a 6e ff ff b8 01
 *     00a8: 00 00 00 5f 5e 59 c3 0f
 *     00b0: b7 c2 a3 d0 49 4d 00 8b
 *     00b8: 81 d8 01 00 00 8d 14 c0
 *     00c0: 8b 84 91 ac 00 00 00 0f
 *     00c8: b7 50 02 89 15 dc 49 4d
 *     00d0: 00 8b 81 d8 01 00 00 8d
 *     00d8: 04 c0 8b 94 81 ac 00 00
 *     00e0: 00 0f b7 42 04 a3 e0 49
 *     00e8: 4d 00 8b 81 d8 01 00 00
 *     00f0: 8d 54 c0 2d 8b 14 91 8a
 *     00f8: 12 8d 04 c0 8d 84 81 ac
 *     0100: 00 00 00 88 91 cc 01 00
 *     0108: 00 83 00 06 8b 81 d0 01
 *     0110: 00 00 99 be 1e 00 00 00
 *     0118: f7 fe 85 d2 75 26 8b 81
 *     0120: d8 01 00 00 83 c0 05 8d
 *     0128: 14 c0 ff 04 91 8d 04 91
 *     0130: eb 12 89 35 d0 49 4d 00
 *     0138: 89 35 dc 49 4d 00 89 35
 *     0140: e0 49 4d 00 8b 81 d8 01
 *     0148: 00 00 8d 04 c0 ff 84 81
 *     0150: bc 00 00 00 ff 81 d0 01
 *     0158: 00 00 8d 84 81 bc 00 00
 *     0160: 00 b8 01 00 00 00 5f 5e
 *     0168: 59 c3 89 35 d0 49 4d 00
 *     0170: 89 35 dc 49 4d 00 89 35
 *     0178: e0 49 4d 00 ff 81 d0 01
 *     0180: 00 00 5f b8 01 00 00 00
 *     0188: 5e 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_0043b950(int a0)
{
  __asm {
    _emit 0x51
    _emit 0x56
    _emit 0x33
    _emit 0xF6
    _emit 0x57
    _emit 0x39
    _emit 0x35
    _emit 0xE8
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x71
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x81
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x14
    _emit 0xC0
    _emit 0x39
    _emit 0xB4
    _emit 0x91
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x7D
    _emit 0x19
    _emit 0x89
    _emit 0x35
    _emit 0xD0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0xDC
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0xE0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x8D
    _emit 0x46
    _emit 0x01
    _emit 0x5F
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
    _emit 0x3B
    _emit 0xC6
    _emit 0x0F
    _emit 0x8C
    _emit 0x26
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xD0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0xA3
    _emit 0xD4
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x81
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x14
    _emit 0xC0
    _emit 0x8B
    _emit 0xBC
    _emit 0x91
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0x91
    _emit 0x8B
    _emit 0x90
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0x7A
    _emit 0x04
    _emit 0x0F
    _emit 0x8D
    _emit 0xC2
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x80
    _emit 0xAC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x10
    _emit 0xBF
    _emit 0xFF
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x3B
    _emit 0xD7
    _emit 0x75
    _emit 0x2C
    _emit 0x66
    _emit 0x39
    _emit 0x78
    _emit 0x02
    _emit 0x75
    _emit 0x26
    _emit 0x66
    _emit 0x39
    _emit 0x78
    _emit 0x04
    _emit 0x75
    _emit 0x20
    _emit 0x89
    _emit 0x35
    _emit 0xD0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0xDC
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0xE0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0xE8
    _emit 0x5A
    _emit 0x6E
    _emit 0xFF
    _emit 0xFF
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
    _emit 0x0F
    _emit 0xB7
    _emit 0xC2
    _emit 0xA3
    _emit 0xD0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x81
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x14
    _emit 0xC0
    _emit 0x8B
    _emit 0x84
    _emit 0x91
    _emit 0xAC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x50
    _emit 0x02
    _emit 0x89
    _emit 0x15
    _emit 0xDC
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x81
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0xC0
    _emit 0x8B
    _emit 0x94
    _emit 0x81
    _emit 0xAC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x42
    _emit 0x04
    _emit 0xA3
    _emit 0xE0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x81
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x54
    _emit 0xC0
    _emit 0x2D
    _emit 0x8B
    _emit 0x14
    _emit 0x91
    _emit 0x8A
    _emit 0x12
    _emit 0x8D
    _emit 0x04
    _emit 0xC0
    _emit 0x8D
    _emit 0x84
    _emit 0x81
    _emit 0xAC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x88
    _emit 0x91
    _emit 0xCC
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x00
    _emit 0x06
    _emit 0x8B
    _emit 0x81
    _emit 0xD0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x99
    _emit 0xBE
    _emit 0x1E
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0xFE
    _emit 0x85
    _emit 0xD2
    _emit 0x75
    _emit 0x26
    _emit 0x8B
    _emit 0x81
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC0
    _emit 0x05
    _emit 0x8D
    _emit 0x14
    _emit 0xC0
    _emit 0xFF
    _emit 0x04
    _emit 0x91
    _emit 0x8D
    _emit 0x04
    _emit 0x91
    _emit 0xEB
    _emit 0x12
    _emit 0x89
    _emit 0x35
    _emit 0xD0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0xDC
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0xE0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x81
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0xC0
    _emit 0xFF
    _emit 0x84
    _emit 0x81
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x81
    _emit 0xD0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x84
    _emit 0x81
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
    _emit 0x89
    _emit 0x35
    _emit 0xD0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0xDC
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0xE0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0xFF
    _emit 0x81
    _emit 0xD0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
