/* Byte-for-byte override for FUN_0042f8c0.

 * Original bytes (738):
 *     0000: 53 55 56 57 33 ff be fe
 *     0008: ff ff ff 6a 24 89 35 3c
 *     0010: ee 4c 00 89 3d 40 ee 4c
 *     0018: 00 89 3d 48 ee 4c 00 e8
 *     0020: 06 d1 03 00 83 c4 04 3b
 *     0028: c7 74 19 21 70 04 89 78
 *     0030: 08 89 78 0c 89 78 10 89
 *     0038: 38 89 40 14 89 78 18 89
 *     0040: 78 1c eb 02 33 c0 bd 03
 *     0048: 00 00 00 09 68 04 8d 5d
 *     0050: fe 8b f0 c7 40 08 00 f0
 *     0058: 42 00 89 78 10 c7 40 20
 *     0060: e8 e8 4c 00 c7 40 0c 60
 *     0068: f5 42 00 e8 50 2a 03 00
 *     0070: 3b c7 0f 85 65 02 00 00
 *     0078: 6a 24 e8 ab d0 03 00 83
 *     0080: c4 04 3b c7 74 1c 83 60
 *     0088: 04 fe 89 78 08 89 78 0c
 *     0090: 89 78 10 89 38 89 40 14
 *     0098: 89 78 18 89 78 1c 8b f0
 *     00a0: eb 02 33 f6 09 6e 04 c7
 *     00a8: 46 08 b0 f0 42 00 89 7e
 *     00b0: 0c 89 7e 10 c7 46 20 e8
 *     00b8: e8 4c 00 e8 a0 2a 03 00
 *     00c0: 6a 24 e8 63 d0 03 00 83
 *     00c8: c4 04 3b c7 74 1a 83 60
 *     00d0: 04 fe 89 78 08 89 78 0c
 *     00d8: 89 78 10 89 38 89 40 14
 *     00e0: 89 78 18 89 78 1c eb 02
 *     00e8: 33 c0 09 68 04 bb 0c 00
 *     00f0: 00 00 8b f0 c7 40 08 00
 *     00f8: f2 42 00 89 78 0c 89 78
 *     0100: 10 c7 40 20 e8 e8 4c 00
 *     0108: e8 53 2a 03 00 6a 24 e8
 *     0110: 16 d0 03 00 83 c4 04 3b
 *     0118: c7 74 1a 83 60 04 fe 89
 *     0120: 78 08 89 78 0c 89 78 10
 *     0128: 89 38 89 40 14 89 78 18
 *     0130: 89 78 1c eb 02 33 c0 09
 *     0138: 68 04 bb 0e 00 00 00 8b
 *     0140: f0 c7 40 08 b0 f3 42 00
 *     0148: 89 78 0c 89 78 10 c7 40
 *     0150: 20 e8 e8 4c 00 e8 06 2a
 *     0158: 03 00 6a 24 e8 c9 cf 03
 *     0160: 00 83 c4 04 3b c7 74 1a
 *     0168: 83 60 04 fe 89 78 08 89
 *     0170: 78 0c 89 78 10 89 38 89
 *     0178: 40 14 89 78 18 89 78 1c
 *     0180: eb 02 33 c0 09 68 04 bb
 *     0188: 25 00 00 00 8b f0 c7 40
 *     0190: 08 90 f2 42 00 89 78 0c
 *     0198: 89 78 10 c7 40 20 e8 e8
 *     01a0: 4c 00 e8 b9 29 03 00 6a
 *     01a8: 24 e8 7c cf 03 00 83 c4
 *     01b0: 04 3b c7 74 1a 83 60 04
 *     01b8: fe 89 78 08 89 78 0c 89
 *     01c0: 78 10 89 38 89 40 14 89
 *     01c8: 78 18 89 78 1c eb 02 33
 *     01d0: c0 09 68 04 bb 27 00 00
 *     01d8: 00 8b f0 c7 40 08 10 f4
 *     01e0: 42 00 89 78 0c 89 78 10
 *     01e8: c7 40 20 e8 e8 4c 00 e8
 *     01f0: 6c 29 03 00 6a 24 e8 2f
 *     01f8: cf 03 00 83 c4 04 3b c7
 *     0200: 74 1a 83 60 04 fe 89 78
 *     0208: 08 89 78 0c 89 78 10 89
 *     0210: 38 89 40 14 89 78 18 89
 *     0218: 78 1c eb 02 33 c0 09 68
 *     0220: 04 bb 30 00 00 00 8b f0
 *     0228: c7 40 08 20 f3 42 00 89
 *     0230: 78 0c 89 78 10 c7 40 20
 *     0238: e8 e8 4c 00 e8 1f 29 03
 *     0240: 00 6a 24 e8 e2 ce 03 00
 *     0248: 83 c4 04 3b c7 74 1a 83
 *     0250: 60 04 fe 89 78 08 89 78
 *     0258: 0c 89 78 10 89 38 89 40
 *     0260: 14 89 78 18 89 78 1c eb
 *     0268: 02 33 c0 09 68 04 bb 31
 *     0270: 00 00 00 8b f0 c7 40 08
 *     0278: 70 f4 42 00 89 78 0c 89
 *     0280: 78 10 c7 40 20 e8 e8 4c
 *     0288: 00 e8 d2 28 03 00 6a 24
 *     0290: e8 95 ce 03 00 83 c4 04
 *     0298: 3b c7 74 1a 83 60 04 fe
 *     02a0: 89 78 08 89 78 0c 89 78
 *     02a8: 10 89 38 89 40 14 89 78
 *     02b0: 18 89 78 1c eb 02 33 c0
 *     02b8: 09 68 04 bb 47 00 00 00
 *     02c0: 8b f0 c7 40 08 80 f3 42
 *     02c8: 00 89 78 0c 89 78 10 c7
 *     02d0: 40 20 e8 e8 4c 00 e8 85
 *     02d8: 28 03 00 33 c0 5f 5e 5d
 *     02e0: 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __stdcall FUN_0042f8c0(void)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x57
    _emit 0x33
    _emit 0xFF
    _emit 0xBE
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x6A
    _emit 0x24
    _emit 0x89
    _emit 0x35
    _emit 0x3C
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x40
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x48
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x06
    _emit 0xD1
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x19
    _emit 0x21
    _emit 0x70
    _emit 0x04
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0xBD
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x09
    _emit 0x68
    _emit 0x04
    _emit 0x8D
    _emit 0x5D
    _emit 0xFE
    _emit 0x8B
    _emit 0xF0
    _emit 0xC7
    _emit 0x40
    _emit 0x08
    _emit 0x00
    _emit 0xF0
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0xC7
    _emit 0x40
    _emit 0x20
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x40
    _emit 0x0C
    _emit 0x60
    _emit 0xF5
    _emit 0x42
    _emit 0x00
    _emit 0xE8
    _emit 0x50
    _emit 0x2A
    _emit 0x03
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x0F
    _emit 0x85
    _emit 0x65
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0xAB
    _emit 0xD0
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x09
    _emit 0x6E
    _emit 0x04
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0xB0
    _emit 0xF0
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x10
    _emit 0xC7
    _emit 0x46
    _emit 0x20
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xA0
    _emit 0x2A
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x63
    _emit 0xD0
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1A
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x09
    _emit 0x68
    _emit 0x04
    _emit 0xBB
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0xC7
    _emit 0x40
    _emit 0x08
    _emit 0x00
    _emit 0xF2
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0xC7
    _emit 0x40
    _emit 0x20
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x53
    _emit 0x2A
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x16
    _emit 0xD0
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1A
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x09
    _emit 0x68
    _emit 0x04
    _emit 0xBB
    _emit 0x0E
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0xC7
    _emit 0x40
    _emit 0x08
    _emit 0xB0
    _emit 0xF3
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0xC7
    _emit 0x40
    _emit 0x20
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x06
    _emit 0x2A
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0xC9
    _emit 0xCF
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1A
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x09
    _emit 0x68
    _emit 0x04
    _emit 0xBB
    _emit 0x25
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0xC7
    _emit 0x40
    _emit 0x08
    _emit 0x90
    _emit 0xF2
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0xC7
    _emit 0x40
    _emit 0x20
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xB9
    _emit 0x29
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x7C
    _emit 0xCF
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1A
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x09
    _emit 0x68
    _emit 0x04
    _emit 0xBB
    _emit 0x27
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0xC7
    _emit 0x40
    _emit 0x08
    _emit 0x10
    _emit 0xF4
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0xC7
    _emit 0x40
    _emit 0x20
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x6C
    _emit 0x29
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x2F
    _emit 0xCF
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1A
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x09
    _emit 0x68
    _emit 0x04
    _emit 0xBB
    _emit 0x30
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0xC7
    _emit 0x40
    _emit 0x08
    _emit 0x20
    _emit 0xF3
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0xC7
    _emit 0x40
    _emit 0x20
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x1F
    _emit 0x29
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0xE2
    _emit 0xCE
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1A
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x09
    _emit 0x68
    _emit 0x04
    _emit 0xBB
    _emit 0x31
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0xC7
    _emit 0x40
    _emit 0x08
    _emit 0x70
    _emit 0xF4
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0xC7
    _emit 0x40
    _emit 0x20
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xD2
    _emit 0x28
    _emit 0x03
    _emit 0x00
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x95
    _emit 0xCE
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x1A
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0xFE
    _emit 0x89
    _emit 0x78
    _emit 0x08
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0x89
    _emit 0x38
    _emit 0x89
    _emit 0x40
    _emit 0x14
    _emit 0x89
    _emit 0x78
    _emit 0x18
    _emit 0x89
    _emit 0x78
    _emit 0x1C
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x09
    _emit 0x68
    _emit 0x04
    _emit 0xBB
    _emit 0x47
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0xC7
    _emit 0x40
    _emit 0x08
    _emit 0x80
    _emit 0xF3
    _emit 0x42
    _emit 0x00
    _emit 0x89
    _emit 0x78
    _emit 0x0C
    _emit 0x89
    _emit 0x78
    _emit 0x10
    _emit 0xC7
    _emit 0x40
    _emit 0x20
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x85
    _emit 0x28
    _emit 0x03
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
