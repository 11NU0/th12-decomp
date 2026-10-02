/* Byte-for-byte override for FUN_00410c60.

 * Original bytes (568):
 *     0000: 6a ff 68 ab 75 49 00 64
 *     0008: a1 00 00 00 00 50 83 ec
 *     0010: 0c 53 55 56 57 a1 38 d1
 *     0018: 4a 00 33 c4 50 8d 44 24
 *     0020: 20 64 a3 00 00 00 00 8b
 *     0028: 6c 24 30 6a 24 e8 58 bd
 *     0030: 05 00 33 c9 83 c4 04 3b
 *     0038: c1 74 1c 83 60 04 fe 89
 *     0040: 48 08 89 48 0c 89 48 10
 *     0048: 89 08 89 40 14 89 48 18
 *     0050: 89 48 1c 8b f0 eb 02 33
 *     0058: f6 bf 03 00 00 00 09 7e
 *     0060: 04 8d 5f 1a c7 46 08 90
 *     0068: 11 41 00 89 4e 0c 89 4e
 *     0070: 10 89 6e 20 e8 a7 16 05
 *     0078: 00 6a 24 89 75 08 e8 07
 *     0080: bd 05 00 33 c9 83 c4 04
 *     0088: 3b c1 74 1c 83 60 04 fe
 *     0090: 89 48 08 89 48 0c 89 48
 *     0098: 10 89 08 89 40 14 89 48
 *     00a0: 18 89 48 1c 8b f0 eb 02
 *     00a8: 33 f6 09 7e 04 bb 36 00
 *     00b0: 00 00 c7 46 08 a0 11 41
 *     00b8: 00 89 4e 0c 89 4e 10 89
 *     00c0: 6e 20 e8 f9 16 05 00 d9
 *     00c8: 05 c0 3e 4a 00 a1 b8 43
 *     00d0: 4b 00 d9 5c 24 14 d9 05
 *     00d8: 60 42 4a 00 89 75 0c d9
 *     00e0: 5c 24 18 8d b0 bc 8f 01
 *     00e8: 00 d9 ee 33 db d9 5c 24
 *     00f0: 1c 39 1e 75 21 8b 80 b4
 *     00f8: 8f 01 00 53 6a 12 8d 4c
 *     0100: 24 38 51 50 8d 43 17 8d
 *     0108: 4c 24 24 e8 30 08 05 00
 *     0110: 8b 54 24 30 89 16 a1 94
 *     0118: 0c 4b 00 8b 0d 90 0c 4b
 *     0120: 00 8d 04 48 89 45 1c 39
 *     0128: 1d c4 0c 4b 00 75 06 83
 *     0130: c0 06 89 45 1c 8b 4d 1c
 *     0138: a1 1c 45 4b 00 ba 01 00
 *     0140: 00 00 38 9c 01 ca e9 01
 *     0148: 00 75 03 09 55 20 38 98
 *     0150: d6 e9 01 00 75 04 83 4d
 *     0158: 20 02 08 94 01 ca e9 01
 *     0160: 00 39 15 a8 0c 4b 00 8d
 *     0168: 8c 01 ca e9 01 00 7c 12
 *     0170: 8b 4d 1c 80 8c 01 ca e9
 *     0178: 01 00 10 8d 8c 01 ca e9
 *     0180: 01 00 83 7d 1c 06 7c 06
 *     0188: 88 90 d6 e9 01 00 8b 55
 *     0190: 1c 8b 04 95 28 f1 4a 00
 *     0198: 88 1d 38 4f 4d 00 8b c8
 *     01a0: 8a 10 40 3a d3 75 f9 bf
 *     01a8: 38 4f 4d 00 2b c1 8b f1
 *     01b0: 4f 8a 4f 01 47 3a cb 75
 *     01b8: f8 8b c8 c1 e9 02 f3 a5
 *     01c0: 8b c8 53 83 e1 03 53 b8
 *     01c8: 38 4f 4d 00 f3 a4 e8 dd
 *     01d0: 2d 05 00 89 45 14 3b c3
 *     01d8: 75 17 68 34 f4 49 00 b9
 *     01e0: c8 0e 4b 00 e8 d7 33 05
 *     01e8: 00 83 c4 04 83 c8 ff eb
 *     01f0: 31 68 f0 00 00 00 e8 8f
 *     01f8: bb 05 00 83 c4 04 89 44
 *     0200: 24 30 89 5c 24 28 3b c3
 *     0208: 74 11 8b 4d 14 8b 51 04
 *     0210: 03 d1 52 50 e8 37 03 00
 *     0218: 00 eb 02 33 c0 89 45 18
 *     0220: 33 c0 8b 4c 24 20 64 89
 *     0228: 0d 00 00 00 00 59 5f 5e
 *     0230: 5d 5b 83 c4 18 c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00410c60(void * a0)
{
  __asm {
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0xAB
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
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
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
    _emit 0x20
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x30
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x58
    _emit 0xBD
    _emit 0x05
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC1
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
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
    _emit 0x08
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x48
    _emit 0x18
    _emit 0x89
    _emit 0x48
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0xBF
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x09
    _emit 0x7E
    _emit 0x04
    _emit 0x8D
    _emit 0x5F
    _emit 0x1A
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x90
    _emit 0x11
    _emit 0x41
    _emit 0x00
    _emit 0x89
    _emit 0x4E
    _emit 0x0C
    _emit 0x89
    _emit 0x4E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0xE8
    _emit 0xA7
    _emit 0x16
    _emit 0x05
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x07
    _emit 0xBD
    _emit 0x05
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC1
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
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
    _emit 0x08
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x48
    _emit 0x18
    _emit 0x89
    _emit 0x48
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x09
    _emit 0x7E
    _emit 0x04
    _emit 0xBB
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xA0
    _emit 0x11
    _emit 0x41
    _emit 0x00
    _emit 0x89
    _emit 0x4E
    _emit 0x0C
    _emit 0x89
    _emit 0x4E
    _emit 0x10
    _emit 0x89
    _emit 0x6E
    _emit 0x20
    _emit 0xE8
    _emit 0xF9
    _emit 0x16
    _emit 0x05
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0xC0
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0xA1
    _emit 0xB8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0x05
    _emit 0x60
    _emit 0x42
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x75
    _emit 0x0C
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x18
    _emit 0x8D
    _emit 0xB0
    _emit 0xBC
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0x33
    _emit 0xDB
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x1C
    _emit 0x39
    _emit 0x1E
    _emit 0x75
    _emit 0x21
    _emit 0x8B
    _emit 0x80
    _emit 0xB4
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x53
    _emit 0x6A
    _emit 0x12
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x38
    _emit 0x51
    _emit 0x50
    _emit 0x8D
    _emit 0x43
    _emit 0x17
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x24
    _emit 0xE8
    _emit 0x30
    _emit 0x08
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x30
    _emit 0x89
    _emit 0x16
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
    _emit 0x04
    _emit 0x48
    _emit 0x89
    _emit 0x45
    _emit 0x1C
    _emit 0x39
    _emit 0x1D
    _emit 0xC4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x06
    _emit 0x83
    _emit 0xC0
    _emit 0x06
    _emit 0x89
    _emit 0x45
    _emit 0x1C
    _emit 0x8B
    _emit 0x4D
    _emit 0x1C
    _emit 0xA1
    _emit 0x1C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xBA
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x38
    _emit 0x9C
    _emit 0x01
    _emit 0xCA
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x75
    _emit 0x03
    _emit 0x09
    _emit 0x55
    _emit 0x20
    _emit 0x38
    _emit 0x98
    _emit 0xD6
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x75
    _emit 0x04
    _emit 0x83
    _emit 0x4D
    _emit 0x20
    _emit 0x02
    _emit 0x08
    _emit 0x94
    _emit 0x01
    _emit 0xCA
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x39
    _emit 0x15
    _emit 0xA8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x8C
    _emit 0x01
    _emit 0xCA
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x7C
    _emit 0x12
    _emit 0x8B
    _emit 0x4D
    _emit 0x1C
    _emit 0x80
    _emit 0x8C
    _emit 0x01
    _emit 0xCA
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x10
    _emit 0x8D
    _emit 0x8C
    _emit 0x01
    _emit 0xCA
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0x7D
    _emit 0x1C
    _emit 0x06
    _emit 0x7C
    _emit 0x06
    _emit 0x88
    _emit 0x90
    _emit 0xD6
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x55
    _emit 0x1C
    _emit 0x8B
    _emit 0x04
    _emit 0x95
    _emit 0x28
    _emit 0xF1
    _emit 0x4A
    _emit 0x00
    _emit 0x88
    _emit 0x1D
    _emit 0x38
    _emit 0x4F
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0xC8
    _emit 0x8A
    _emit 0x10
    _emit 0x40
    _emit 0x3A
    _emit 0xD3
    _emit 0x75
    _emit 0xF9
    _emit 0xBF
    _emit 0x38
    _emit 0x4F
    _emit 0x4D
    _emit 0x00
    _emit 0x2B
    _emit 0xC1
    _emit 0x8B
    _emit 0xF1
    _emit 0x4F
    _emit 0x8A
    _emit 0x4F
    _emit 0x01
    _emit 0x47
    _emit 0x3A
    _emit 0xCB
    _emit 0x75
    _emit 0xF8
    _emit 0x8B
    _emit 0xC8
    _emit 0xC1
    _emit 0xE9
    _emit 0x02
    _emit 0xF3
    _emit 0xA5
    _emit 0x8B
    _emit 0xC8
    _emit 0x53
    _emit 0x83
    _emit 0xE1
    _emit 0x03
    _emit 0x53
    _emit 0xB8
    _emit 0x38
    _emit 0x4F
    _emit 0x4D
    _emit 0x00
    _emit 0xF3
    _emit 0xA4
    _emit 0xE8
    _emit 0xDD
    _emit 0x2D
    _emit 0x05
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0x14
    _emit 0x3B
    _emit 0xC3
    _emit 0x75
    _emit 0x17
    _emit 0x68
    _emit 0x34
    _emit 0xF4
    _emit 0x49
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xD7
    _emit 0x33
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0xEB
    _emit 0x31
    _emit 0x68
    _emit 0xF0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x8F
    _emit 0xBB
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x30
    _emit 0x89
    _emit 0x5C
    _emit 0x24
    _emit 0x28
    _emit 0x3B
    _emit 0xC3
    _emit 0x74
    _emit 0x11
    _emit 0x8B
    _emit 0x4D
    _emit 0x14
    _emit 0x8B
    _emit 0x51
    _emit 0x04
    _emit 0x03
    _emit 0xD1
    _emit 0x52
    _emit 0x50
    _emit 0xE8
    _emit 0x37
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x45
    _emit 0x18
    _emit 0x33
    _emit 0xC0
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x20
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
    _emit 0x18
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
