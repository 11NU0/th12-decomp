/* Byte-for-byte override for FUN_0043d140.

 * Original bytes (395):
 *     0000: 55 8b 6c 24 08 8b 45 00
 *     0008: 57 85 c0 0f 84 3e 01 00
 *     0010: 00 81 38 54 48 32 31 0f
 *     0018: 85 22 01 00 00 bf 02 00
 *     0020: 00 00 66 39 78 08 0f 85
 *     0028: 13 01 00 00 8b 48 10 53
 *     0030: 56 51 6a 10 6a 35 83 c0
 *     0038: 18 51 50 b0 ac e8 4e 68
 *     0040: 02 00 8b 45 00 8d 70 18
 *     0048: 8b 40 14 03 c0 03 c0 50
 *     0050: e8 b5 fe 02 00 8b 4d 00
 *     0058: 83 c4 04 50 89 45 04 8b
 *     0060: 41 10 50 8b 41 14 56 e8
 *     0068: 64 f5 00 00 8b 4d 00 8b
 *     0070: 71 14 8b 5d 04 89 74 24
 *     0078: 14 85 f6 7f 18 5e 5b 5f
 *     0080: 33 c0 5d c2 04 00 eb 08
 *     0088: 8d a4 24 00 00 00 00 90
 *     0090: bf 02 00 00 00 0f b7 03
 *     0098: ba 43 52 00 00 66 3b c2
 *     00a0: 75 3e 66 39 7b 02 75 75
 *     00a8: 68 f4 45 00 00 8b cb e8
 *     00b0: bc fb ff ff 3b 43 04 75
 *     00b8: 64 81 7b 08 f4 45 00 00
 *     00c0: 75 5b 8b 43 0c 69 c0 f4
 *     00c8: 45 00 00 68 f4 45 00 00
 *     00d0: 8d 4c 28 08 53 51 e8 15
 *     00d8: d1 03 00 83 c4 0c eb 3d
 *     00e0: ba 53 54 00 00 66 3b c2
 *     00e8: 75 93 66 39 7b 02 75 2d
 *     00f0: 68 48 04 00 00 8b cb e8
 *     00f8: 74 fb ff ff 3b 43 04 75
 *     0100: 1c 81 7b 08 48 04 00 00
 *     0108: 75 13 8d bd b4 e9 01 00
 *     0110: b9 12 01 00 00 8b f3 f3
 *     0118: a5 8b 74 24 14 8b 43 08
 *     0120: 2b f0 89 74 24 14 0f 88
 *     0128: 51 ff ff ff 03 d8 85 f6
 *     0130: 0f 8f 5a ff ff ff 5e 5b
 *     0138: 5f 33 c0 5d c2 04 00 50
 *     0140: e8 bc f6 02 00 83 c4 04
 *     0148: c7 45 00 00 00 00 00 6a
 *     0150: 18 e8 b4 fd 02 00 89 45
 *     0158: 00 33 c9 89 08 89 48 04
 *     0160: 89 48 08 89 48 0c 89 48
 *     0168: 10 89 48 14 8b 45 00 c7
 *     0170: 00 54 48 32 31 8b 4d 00
 *     0178: ba 02 00 00 00 83 c4 04
 *     0180: 66 89 51 08 8b 45 00 5f
 *     0188: c7 40 0c
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0043d140(int * a0)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x45
    _emit 0x00
    _emit 0x57
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x84
    _emit 0x3E
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0x38
    _emit 0x54
    _emit 0x48
    _emit 0x32
    _emit 0x31
    _emit 0x0F
    _emit 0x85
    _emit 0x22
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xBF
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x39
    _emit 0x78
    _emit 0x08
    _emit 0x0F
    _emit 0x85
    _emit 0x13
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x48
    _emit 0x10
    _emit 0x53
    _emit 0x56
    _emit 0x51
    _emit 0x6A
    _emit 0x10
    _emit 0x6A
    _emit 0x35
    _emit 0x83
    _emit 0xC0
    _emit 0x18
    _emit 0x51
    _emit 0x50
    _emit 0xB0
    _emit 0xAC
    _emit 0xE8
    _emit 0x4E
    _emit 0x68
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x00
    _emit 0x8D
    _emit 0x70
    _emit 0x18
    _emit 0x8B
    _emit 0x40
    _emit 0x14
    _emit 0x03
    _emit 0xC0
    _emit 0x03
    _emit 0xC0
    _emit 0x50
    _emit 0xE8
    _emit 0xB5
    _emit 0xFE
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x4D
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x50
    _emit 0x89
    _emit 0x45
    _emit 0x04
    _emit 0x8B
    _emit 0x41
    _emit 0x10
    _emit 0x50
    _emit 0x8B
    _emit 0x41
    _emit 0x14
    _emit 0x56
    _emit 0xE8
    _emit 0x64
    _emit 0xF5
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x71
    _emit 0x14
    _emit 0x8B
    _emit 0x5D
    _emit 0x04
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x14
    _emit 0x85
    _emit 0xF6
    _emit 0x7F
    _emit 0x18
    _emit 0x5E
    _emit 0x5B
    _emit 0x5F
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xEB
    _emit 0x08
    _emit 0x8D
    _emit 0xA4
    _emit 0x24
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x90
    _emit 0xBF
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x03
    _emit 0xBA
    _emit 0x43
    _emit 0x52
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x3B
    _emit 0xC2
    _emit 0x75
    _emit 0x3E
    _emit 0x66
    _emit 0x39
    _emit 0x7B
    _emit 0x02
    _emit 0x75
    _emit 0x75
    _emit 0x68
    _emit 0xF4
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xCB
    _emit 0xE8
    _emit 0xBC
    _emit 0xFB
    _emit 0xFF
    _emit 0xFF
    _emit 0x3B
    _emit 0x43
    _emit 0x04
    _emit 0x75
    _emit 0x64
    _emit 0x81
    _emit 0x7B
    _emit 0x08
    _emit 0xF4
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x5B
    _emit 0x8B
    _emit 0x43
    _emit 0x0C
    _emit 0x69
    _emit 0xC0
    _emit 0xF4
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0xF4
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x28
    _emit 0x08
    _emit 0x53
    _emit 0x51
    _emit 0xE8
    _emit 0x15
    _emit 0xD1
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xEB
    _emit 0x3D
    _emit 0xBA
    _emit 0x53
    _emit 0x54
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x3B
    _emit 0xC2
    _emit 0x75
    _emit 0x93
    _emit 0x66
    _emit 0x39
    _emit 0x7B
    _emit 0x02
    _emit 0x75
    _emit 0x2D
    _emit 0x68
    _emit 0x48
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xCB
    _emit 0xE8
    _emit 0x74
    _emit 0xFB
    _emit 0xFF
    _emit 0xFF
    _emit 0x3B
    _emit 0x43
    _emit 0x04
    _emit 0x75
    _emit 0x1C
    _emit 0x81
    _emit 0x7B
    _emit 0x08
    _emit 0x48
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x13
    _emit 0x8D
    _emit 0xBD
    _emit 0xB4
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0xB9
    _emit 0x12
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF3
    _emit 0xF3
    _emit 0xA5
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x43
    _emit 0x08
    _emit 0x2B
    _emit 0xF0
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x14
    _emit 0x0F
    _emit 0x88
    _emit 0x51
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x03
    _emit 0xD8
    _emit 0x85
    _emit 0xF6
    _emit 0x0F
    _emit 0x8F
    _emit 0x5A
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x5E
    _emit 0x5B
    _emit 0x5F
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x50
    _emit 0xE8
    _emit 0xBC
    _emit 0xF6
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xC7
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x18
    _emit 0xE8
    _emit 0xB4
    _emit 0xFD
    _emit 0x02
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0x89
    _emit 0x08
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x89
    _emit 0x48
    _emit 0x08
    _emit 0x89
    _emit 0x48
    _emit 0x0C
    _emit 0x89
    _emit 0x48
    _emit 0x10
    _emit 0x89
    _emit 0x48
    _emit 0x14
    _emit 0x8B
    _emit 0x45
    _emit 0x00
    _emit 0xC7
    _emit 0x00
    _emit 0x54
    _emit 0x48
    _emit 0x32
    _emit 0x31
    _emit 0x8B
    _emit 0x4D
    _emit 0x00
    _emit 0xBA
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x66
    _emit 0x89
    _emit 0x51
    _emit 0x08
    _emit 0x8B
    _emit 0x45
    _emit 0x00
    _emit 0x5F
    _emit 0xC7
    _emit 0x40
    _emit 0x0C
  }
  __assume(0);
}
