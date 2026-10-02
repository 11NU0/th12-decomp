/* Byte-for-byte override for FUN_0044b7b0_0044b7b0.

 * Original bytes (300):
 *     0000: 55 8b 6c 24 08 56 33 f6
 *     0008: 39 75 0c 75 07 5e 33 c0
 *     0010: 5d c2 08 00 53 57 8b d9
 *     0018: 8b c5 e8 51 01 00 00 8b
 *     0020: d8 85 db 74 4c 8b 7b 14
 *     0028: 2b 7b 04 8b 43 08 89 44
 *     0030: 24 14 3b f8 75 08 8b 74
 *     0038: 24 18 85 f6 75 0f 57 e8
 *     0040: 56 18 02 00 8b f0 83 c4
 *     0048: 04 85 f6 74 24 8b 4d 0c
 *     0050: 8b 01 8b 53 04 8b 40 18
 *     0058: 6a 00 52 ff d0 84 c0 74
 *     0060: 10 8b 4d 0c 8b 11 8b 42
 *     0068: 08 57 56 ff d0 85 c0 75
 *     0070: 27 8b 4d 08 51 68 30 22
 *     0078: 4a 00 e8 a1 04 00 00 83
 *     0080: c4 08 85 f6 74 09 56 e8
 *     0088: 05 11 02 00 83 c4 04 5f
 *     0090: 5b 5e 33 c0 5d c2 08 00
 *     0098: 8b 1b 8b c3 8d 50 01 90
 *     00a0: 8a 08 40 84 c9 75 f9 2b
 *     00a8: c2 8b d3 74 0b 8d 49 00
 *     00b0: 02 0a 48 42 85 c0 75 f8
 *     00b8: 0f b6 c1 25 07 00 00 80
 *     00c0: 79 05 48 83 c8 f8 40 0f
 *     00c8: b6 c0 8d 04 40 03 c0 8b
 *     00d0: 94 00 38 e5 4a 00 8b 8c
 *     00d8: 00 34 e5 4a 00 03 c0 52
 *     00e0: 0f b6 90 31 e5 4a 00 8a
 *     00e8: 80 30 e5 4a 00 51 52 57
 *     00f0: 56 e8 2a 81 01 00 8b 44
 *     00f8: 24 14 3b f8 74 10 8b 4c
 *     0100: 24 18 51 57 56 e8 56 0e
 *     0108: 00 00 8b f8 eb 02 8b fe
 *     0110: 3b 74 24 18 74 0d 85 f6
 *     0118: 74 09 56 e8 71 10 02 00
 *     0120: 83 c4 04 8b c7 5f 5b 5e
 *     0128: 5d c2 08 00
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

byte * __stdcall FUN_0044b7b0(int param_1,byte *param_2)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x08
    _emit 0x56
    _emit 0x33
    _emit 0xF6
    _emit 0x39
    _emit 0x75
    _emit 0x0C
    _emit 0x75
    _emit 0x07
    _emit 0x5E
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0x53
    _emit 0x57
    _emit 0x8B
    _emit 0xD9
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0x51
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xD8
    _emit 0x85
    _emit 0xDB
    _emit 0x74
    _emit 0x4C
    _emit 0x8B
    _emit 0x7B
    _emit 0x14
    _emit 0x2B
    _emit 0x7B
    _emit 0x04
    _emit 0x8B
    _emit 0x43
    _emit 0x08
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x3B
    _emit 0xF8
    _emit 0x75
    _emit 0x08
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x18
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x0F
    _emit 0x57
    _emit 0xE8
    _emit 0x56
    _emit 0x18
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x24
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0x8B
    _emit 0x01
    _emit 0x8B
    _emit 0x53
    _emit 0x04
    _emit 0x8B
    _emit 0x40
    _emit 0x18
    _emit 0x6A
    _emit 0x00
    _emit 0x52
    _emit 0xFF
    _emit 0xD0
    _emit 0x84
    _emit 0xC0
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0x8B
    _emit 0x11
    _emit 0x8B
    _emit 0x42
    _emit 0x08
    _emit 0x57
    _emit 0x56
    _emit 0xFF
    _emit 0xD0
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x27
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x51
    _emit 0x68
    _emit 0x30
    _emit 0x22
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0xA1
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x09
    _emit 0x56
    _emit 0xE8
    _emit 0x05
    _emit 0x11
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5F
    _emit 0x5B
    _emit 0x5E
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0x8B
    _emit 0x1B
    _emit 0x8B
    _emit 0xC3
    _emit 0x8D
    _emit 0x50
    _emit 0x01
    _emit 0x90
    _emit 0x8A
    _emit 0x08
    _emit 0x40
    _emit 0x84
    _emit 0xC9
    _emit 0x75
    _emit 0xF9
    _emit 0x2B
    _emit 0xC2
    _emit 0x8B
    _emit 0xD3
    _emit 0x74
    _emit 0x0B
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x02
    _emit 0x0A
    _emit 0x48
    _emit 0x42
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xF8
    _emit 0x0F
    _emit 0xB6
    _emit 0xC1
    _emit 0x25
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x79
    _emit 0x05
    _emit 0x48
    _emit 0x83
    _emit 0xC8
    _emit 0xF8
    _emit 0x40
    _emit 0x0F
    _emit 0xB6
    _emit 0xC0
    _emit 0x8D
    _emit 0x04
    _emit 0x40
    _emit 0x03
    _emit 0xC0
    _emit 0x8B
    _emit 0x94
    _emit 0x00
    _emit 0x38
    _emit 0xE5
    _emit 0x4A
    _emit 0x00
    _emit 0x8B
    _emit 0x8C
    _emit 0x00
    _emit 0x34
    _emit 0xE5
    _emit 0x4A
    _emit 0x00
    _emit 0x03
    _emit 0xC0
    _emit 0x52
    _emit 0x0F
    _emit 0xB6
    _emit 0x90
    _emit 0x31
    _emit 0xE5
    _emit 0x4A
    _emit 0x00
    _emit 0x8A
    _emit 0x80
    _emit 0x30
    _emit 0xE5
    _emit 0x4A
    _emit 0x00
    _emit 0x51
    _emit 0x52
    _emit 0x57
    _emit 0x56
    _emit 0xE8
    _emit 0x2A
    _emit 0x81
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x3B
    _emit 0xF8
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0x51
    _emit 0x57
    _emit 0x56
    _emit 0xE8
    _emit 0x56
    _emit 0x0E
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF8
    _emit 0xEB
    _emit 0x02
    _emit 0x8B
    _emit 0xFE
    _emit 0x3B
    _emit 0x74
    _emit 0x24
    _emit 0x18
    _emit 0x74
    _emit 0x0D
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x09
    _emit 0x56
    _emit 0xE8
    _emit 0x71
    _emit 0x10
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0xC7
    _emit 0x5F
    _emit 0x5B
    _emit 0x5E
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
