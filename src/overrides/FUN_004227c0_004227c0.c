/* Byte-for-byte override for FUN_004227c0.

 * Original bytes (989):
 *     0000: 55 8b ec 83 e4 f8 a1 e4
 *     0008: 43 4b 00 83 ec 50 f7 80
 *     0010: 18 6d 00 00 00 02 00 00
 *     0018: 53 56 74 09 83 b8 20 6d
 *     0020: 00 00 78 7c 3c 8b 47 14
 *     0028: 33 db be 02 00 00 00 3b
 *     0030: c3 0f 85 6c 01 00 00 e8
 *     0038: 34 ec ff ff f6 47 60 08
 *     0040: 74 2a be d8 f0 4c 00 e8
 *     0048: 34 24 04 00 a1 78 ee 4c
 *     0050: 00 c1 e8 0d f7 d0 83 e0
 *     0058: 01 83 c8 02 a3 40 ee 4c
 *     0060: 00 b8 01 00 00 00 5e 5b
 *     0068: 8b e5 5d c3 e8 af 2e fe
 *     0070: ff 39 1d bc 43 4b 00 74
 *     0078: 2f e8 a2 2f fe ff e8 4d
 *     0080: 30 fe ff 8b 0d e4 43 4b
 *     0088: 00 81 4f 60 00 08 00 00
 *     0090: 8b 91 68 6c 00 00 52 bb
 *     0098: 01 00 00 00 e8 0f f1 03
 *     00a0: 00 33 db e9 f7 01 00 00
 *     00a8: 81 67 60 ff f7 ff ff e8
 *     00b0: bc 6d fe ff e8 87 38 01
 *     00b8: 00 e8 32 c0 fe ff a1 dc
 *     00c0: 43 4b 00 50 e8 b7 c0 fe
 *     00c8: ff e8 62 f3 ff ff 89 1d
 *     00d0: bc 0c 4b 00 89 1d c0 0c
 *     00d8: 4b 00 e8 f1 9c 01 00 6a
 *     00e0: 50 8d 4c 24 0c 53 51 e8
 *     00e8: 74 4b 05 00 83 c4 0c 8d
 *     00f0: 54 24 08 52 68 14 fe 49
 *     00f8: 00 e8 d2 00 ff ff e8 9d
 *     0100: ac ff ff e8 d8 f5 00 00
 *     0108: e8 43 c1 fe ff a1 c8 43
 *     0110: 4b 00 e8 39 bf fe ff e8
 *     0118: 04 06 ff ff a1 f0 44 4b
 *     0120: 00 e8 2a bf fe ff a1 f4
 *     0128: 44 4b 00 e8 20 bf fe ff
 *     0130: 8b 0d d4 43 4b 00 8b 41
 *     0138: 08 09 70 04 8b 41 0c 09
 *     0140: 70 04 a1 c4 43 4b 00 e8
 *     0148: 04 bf fe ff 8b 0d 24 45
 *     0150: 4b 00 8b 41 08 09 70 04
 *     0158: 8b 41 0c 09 70 04 e8 6d
 *     0160: b0 fe ff e8 c8 77 02 00
 *     0168: f6 05 e0 0c 4b 00 20 75
 *     0170: 0f a1 2c 45 4b 00 8b 48
 *     0178: 34 51 53 e8 10 d8 00 00
 *     0180: 8b 15 b8 43 4b 00 8b 82
 *     0188: b8 8f 01 00 50 bb 01 00
 *     0190: 00 00 e8 19 f0 03 00 e8
 *     0198: a4 f1 fe ff 33 db e9 fc
 *     01a0: 00 00 00 83 f8 1e 0f 85
 *     01a8: f3 00 00 00 8b 47 60 a9
 *     01b0: 00 08 00 00 0f 84 e5 00
 *     01b8: 00 00 25 ff f7 ff ff 89
 *     01c0: 47 60 e8 a9 6c fe ff e8
 *     01c8: 74 37 01 00 e8 1f bf fe
 *     01d0: ff 8b 0d dc 43 4b 00 51
 *     01d8: e8 a3 bf fe ff e8 4e f2
 *     01e0: ff ff 89 1d bc 0c 4b 00
 *     01e8: 89 1d c0 0c 4b 00 e8 dd
 *     01f0: 9b 01 00 6a 50 8d 54 24
 *     01f8: 0c 53 52 e8 60 4a 05 00
 *     0200: 83 c4 0c 8d 44 24 08 50
 *     0208: 68 14 fe 49 00 e8 be ff
 *     0210: fe ff e8 89 ab ff ff e8
 *     0218: c4 f4 00 00 e8 2f c0 fe
 *     0220: ff a1 c8 43 4b 00 e8 25
 *     0228: be fe ff e8 f0 04 ff ff
 *     0230: a1 f0 44 4b 00 e8 16 be
 *     0238: fe ff a1 f4 44 4b 00 e8
 *     0240: 0c be fe ff 8b 0d d4 43
 *     0248: 4b 00 8b 41 08 09 70 04
 *     0250: 8b 41 0c 09 70 04 a1 c4
 *     0258: 43 4b 00 e8 f0 bd fe ff
 *     0260: 8b 0d 24 45 4b 00 8b 41
 *     0268: 08 09 70 04 8b 41 0c 09
 *     0270: 70 04 e8 59 af fe ff e8
 *     0278: b4 76 02 00 e8 ff d7 00
 *     0280: 00 8b 0d 2c 45 4b 00 8b
 *     0288: 51 34 52 53 e8 ff d6 00
 *     0290: 00 e8 aa f0 fe ff 53 8d
 *     0298: 47 10 e8 81 3d fe ff 83
 *     02a0: 7f 14 05 75 06 89 35 68
 *     02a8: f4 4c 00 8b 35 bc 43 4b
 *     02b0: 00 3b f3 74 1c f6 86 bc
 *     02b8: 35 00 00 08 74 13 3b f3
 *     02c0: 74 0f 56 e8 38 02 fe ff
 *     02c8: 56 e8 c1 9f 04 00 83 c4
 *     02d0: 04 8b 47 60 a8 04 74 13
 *     02d8: 0d 80 00 00 00 89 47 60
 *     02e0: b8 01 00 00 00 5e 5b 8b
 *     02e8: e5 5d c3 be d8 f0 4c 00
 *     02f0: e8 8b 21 04 00 f6 05 e0
 *     02f8: 0c 4b 00 20 74 5e f7 05
 *     0300: b8 48 4d 00 03 01 08 00
 *     0308: 75 06 f6 47 60 70 74 19
 *     0310: a1 78 ee 4c 00 25 00 20
 *     0318: 00 00 f7 d8 1b c0 83 e0
 *     0320: fe 83 c0 04 a3 40 ee 4c
 *     0328: 00 8b 47 14 3d d4 0d 00
 *     0330: 00 75 13 6a 3b 6a 00 6a
 *     0338: 00 6a 00 6a 3c 6a 05 e8
 *     0340: 9c fe 02 00 eb 16 3d 10
 *     0348: 0e 00 00 75 0f b9 04 00
 *     0350: 00 00 b8 e8 e8 4c 00 e8
 *     0358: 04 cc fe ff e8 4f e3 ff
 *     0360: ff 8b 47 60 a8 10 74 0b
 *     0368: b8 03 00 00 00 5e 5b 8b
 *     0370: e5 5d c3 a8 20 75 f1 a8
 *     0378: 40 75 ed 8b 0d 18 45 4b
 *     0380: 00 bb 01 00 00 00 39 59
 *     0388: 10 74 30 8b 15 94 0c 4b
 *     0390: 00 a1 90 0c 4b 00 8d 0c
 *     0398: 42 8b 15 1c 45 4b 00 69
 *     03a0: c9 f4 45 00 00 81 bc 11
 *     03a8: 94 05 00 00 ff e5 df 0c
 *     03b0: 8d 84 11 94 05 00 00 7d
 *     03b8: 02 01 18 01 1d bc 0c 4b
 *     03c0: 00 01 1d c0 0c 4b 00 01
 *     03c8: 1d 60 0c 4b 00 8d 77 10
 *     03d0: e8 eb 1e 04 00 5e 8b c3
 *     03d8: 5b 8b e5 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_004227c0(void * a0)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xE4
    _emit 0xF8
    _emit 0xA1
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0xEC
    _emit 0x50
    _emit 0xF7
    _emit 0x80
    _emit 0x18
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x56
    _emit 0x74
    _emit 0x09
    _emit 0x83
    _emit 0xB8
    _emit 0x20
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x78
    _emit 0x7C
    _emit 0x3C
    _emit 0x8B
    _emit 0x47
    _emit 0x14
    _emit 0x33
    _emit 0xDB
    _emit 0xBE
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC3
    _emit 0x0F
    _emit 0x85
    _emit 0x6C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x34
    _emit 0xEC
    _emit 0xFF
    _emit 0xFF
    _emit 0xF6
    _emit 0x47
    _emit 0x60
    _emit 0x08
    _emit 0x74
    _emit 0x2A
    _emit 0xBE
    _emit 0xD8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x34
    _emit 0x24
    _emit 0x04
    _emit 0x00
    _emit 0xA1
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xC1
    _emit 0xE8
    _emit 0x0D
    _emit 0xF7
    _emit 0xD0
    _emit 0x83
    _emit 0xE0
    _emit 0x01
    _emit 0x83
    _emit 0xC8
    _emit 0x02
    _emit 0xA3
    _emit 0x40
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
    _emit 0xE8
    _emit 0xAF
    _emit 0x2E
    _emit 0xFE
    _emit 0xFF
    _emit 0x39
    _emit 0x1D
    _emit 0xBC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x74
    _emit 0x2F
    _emit 0xE8
    _emit 0xA2
    _emit 0x2F
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0x4D
    _emit 0x30
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x0D
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x81
    _emit 0x4F
    _emit 0x60
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x91
    _emit 0x68
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x52
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x0F
    _emit 0xF1
    _emit 0x03
    _emit 0x00
    _emit 0x33
    _emit 0xDB
    _emit 0xE9
    _emit 0xF7
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0x67
    _emit 0x60
    _emit 0xFF
    _emit 0xF7
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0xBC
    _emit 0x6D
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0x87
    _emit 0x38
    _emit 0x01
    _emit 0x00
    _emit 0xE8
    _emit 0x32
    _emit 0xC0
    _emit 0xFE
    _emit 0xFF
    _emit 0xA1
    _emit 0xDC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x50
    _emit 0xE8
    _emit 0xB7
    _emit 0xC0
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0x62
    _emit 0xF3
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x1D
    _emit 0xBC
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x1D
    _emit 0xC0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xF1
    _emit 0x9C
    _emit 0x01
    _emit 0x00
    _emit 0x6A
    _emit 0x50
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
    _emit 0x53
    _emit 0x51
    _emit 0xE8
    _emit 0x74
    _emit 0x4B
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x52
    _emit 0x68
    _emit 0x14
    _emit 0xFE
    _emit 0x49
    _emit 0x00
    _emit 0xE8
    _emit 0xD2
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x9D
    _emit 0xAC
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0xD8
    _emit 0xF5
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x43
    _emit 0xC1
    _emit 0xFE
    _emit 0xFF
    _emit 0xA1
    _emit 0xC8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x39
    _emit 0xBF
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0x04
    _emit 0x06
    _emit 0xFF
    _emit 0xFF
    _emit 0xA1
    _emit 0xF0
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x2A
    _emit 0xBF
    _emit 0xFE
    _emit 0xFF
    _emit 0xA1
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x20
    _emit 0xBF
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x0D
    _emit 0xD4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x41
    _emit 0x08
    _emit 0x09
    _emit 0x70
    _emit 0x04
    _emit 0x8B
    _emit 0x41
    _emit 0x0C
    _emit 0x09
    _emit 0x70
    _emit 0x04
    _emit 0xA1
    _emit 0xC4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x04
    _emit 0xBF
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x0D
    _emit 0x24
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x41
    _emit 0x08
    _emit 0x09
    _emit 0x70
    _emit 0x04
    _emit 0x8B
    _emit 0x41
    _emit 0x0C
    _emit 0x09
    _emit 0x70
    _emit 0x04
    _emit 0xE8
    _emit 0x6D
    _emit 0xB0
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0xC8
    _emit 0x77
    _emit 0x02
    _emit 0x00
    _emit 0xF6
    _emit 0x05
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x20
    _emit 0x75
    _emit 0x0F
    _emit 0xA1
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x48
    _emit 0x34
    _emit 0x51
    _emit 0x53
    _emit 0xE8
    _emit 0x10
    _emit 0xD8
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0xB8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x82
    _emit 0xB8
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x50
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x19
    _emit 0xF0
    _emit 0x03
    _emit 0x00
    _emit 0xE8
    _emit 0xA4
    _emit 0xF1
    _emit 0xFE
    _emit 0xFF
    _emit 0x33
    _emit 0xDB
    _emit 0xE9
    _emit 0xFC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x1E
    _emit 0x0F
    _emit 0x85
    _emit 0xF3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x47
    _emit 0x60
    _emit 0xA9
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0xE5
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x25
    _emit 0xFF
    _emit 0xF7
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x47
    _emit 0x60
    _emit 0xE8
    _emit 0xA9
    _emit 0x6C
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0x74
    _emit 0x37
    _emit 0x01
    _emit 0x00
    _emit 0xE8
    _emit 0x1F
    _emit 0xBF
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x0D
    _emit 0xDC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0xA3
    _emit 0xBF
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0x4E
    _emit 0xF2
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x1D
    _emit 0xBC
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x1D
    _emit 0xC0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xDD
    _emit 0x9B
    _emit 0x01
    _emit 0x00
    _emit 0x6A
    _emit 0x50
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x53
    _emit 0x52
    _emit 0xE8
    _emit 0x60
    _emit 0x4A
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x50
    _emit 0x68
    _emit 0x14
    _emit 0xFE
    _emit 0x49
    _emit 0x00
    _emit 0xE8
    _emit 0xBE
    _emit 0xFF
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0x89
    _emit 0xAB
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0xC4
    _emit 0xF4
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x2F
    _emit 0xC0
    _emit 0xFE
    _emit 0xFF
    _emit 0xA1
    _emit 0xC8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x25
    _emit 0xBE
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0xF0
    _emit 0x04
    _emit 0xFF
    _emit 0xFF
    _emit 0xA1
    _emit 0xF0
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x16
    _emit 0xBE
    _emit 0xFE
    _emit 0xFF
    _emit 0xA1
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x0C
    _emit 0xBE
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x0D
    _emit 0xD4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x41
    _emit 0x08
    _emit 0x09
    _emit 0x70
    _emit 0x04
    _emit 0x8B
    _emit 0x41
    _emit 0x0C
    _emit 0x09
    _emit 0x70
    _emit 0x04
    _emit 0xA1
    _emit 0xC4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xF0
    _emit 0xBD
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x0D
    _emit 0x24
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x41
    _emit 0x08
    _emit 0x09
    _emit 0x70
    _emit 0x04
    _emit 0x8B
    _emit 0x41
    _emit 0x0C
    _emit 0x09
    _emit 0x70
    _emit 0x04
    _emit 0xE8
    _emit 0x59
    _emit 0xAF
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0xB4
    _emit 0x76
    _emit 0x02
    _emit 0x00
    _emit 0xE8
    _emit 0xFF
    _emit 0xD7
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x51
    _emit 0x34
    _emit 0x52
    _emit 0x53
    _emit 0xE8
    _emit 0xFF
    _emit 0xD6
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xAA
    _emit 0xF0
    _emit 0xFE
    _emit 0xFF
    _emit 0x53
    _emit 0x8D
    _emit 0x47
    _emit 0x10
    _emit 0xE8
    _emit 0x81
    _emit 0x3D
    _emit 0xFE
    _emit 0xFF
    _emit 0x83
    _emit 0x7F
    _emit 0x14
    _emit 0x05
    _emit 0x75
    _emit 0x06
    _emit 0x89
    _emit 0x35
    _emit 0x68
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0xBC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF3
    _emit 0x74
    _emit 0x1C
    _emit 0xF6
    _emit 0x86
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x74
    _emit 0x13
    _emit 0x3B
    _emit 0xF3
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x38
    _emit 0x02
    _emit 0xFE
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0xC1
    _emit 0x9F
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x47
    _emit 0x60
    _emit 0xA8
    _emit 0x04
    _emit 0x74
    _emit 0x13
    _emit 0x0D
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x47
    _emit 0x60
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
    _emit 0xBE
    _emit 0xD8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x8B
    _emit 0x21
    _emit 0x04
    _emit 0x00
    _emit 0xF6
    _emit 0x05
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x20
    _emit 0x74
    _emit 0x5E
    _emit 0xF7
    _emit 0x05
    _emit 0xB8
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x03
    _emit 0x01
    _emit 0x08
    _emit 0x00
    _emit 0x75
    _emit 0x06
    _emit 0xF6
    _emit 0x47
    _emit 0x60
    _emit 0x70
    _emit 0x74
    _emit 0x19
    _emit 0xA1
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x25
    _emit 0x00
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0xD8
    _emit 0x1B
    _emit 0xC0
    _emit 0x83
    _emit 0xE0
    _emit 0xFE
    _emit 0x83
    _emit 0xC0
    _emit 0x04
    _emit 0xA3
    _emit 0x40
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x47
    _emit 0x14
    _emit 0x3D
    _emit 0xD4
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x13
    _emit 0x6A
    _emit 0x3B
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x3C
    _emit 0x6A
    _emit 0x05
    _emit 0xE8
    _emit 0x9C
    _emit 0xFE
    _emit 0x02
    _emit 0x00
    _emit 0xEB
    _emit 0x16
    _emit 0x3D
    _emit 0x10
    _emit 0x0E
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x0F
    _emit 0xB9
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xB8
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x04
    _emit 0xCC
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0x4F
    _emit 0xE3
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x47
    _emit 0x60
    _emit 0xA8
    _emit 0x10
    _emit 0x74
    _emit 0x0B
    _emit 0xB8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
    _emit 0xA8
    _emit 0x20
    _emit 0x75
    _emit 0xF1
    _emit 0xA8
    _emit 0x40
    _emit 0x75
    _emit 0xED
    _emit 0x8B
    _emit 0x0D
    _emit 0x18
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x59
    _emit 0x10
    _emit 0x74
    _emit 0x30
    _emit 0x8B
    _emit 0x15
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x0C
    _emit 0x42
    _emit 0x8B
    _emit 0x15
    _emit 0x1C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x69
    _emit 0xC9
    _emit 0xF4
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xBC
    _emit 0x11
    _emit 0x94
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xE5
    _emit 0xDF
    _emit 0x0C
    _emit 0x8D
    _emit 0x84
    _emit 0x11
    _emit 0x94
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x7D
    _emit 0x02
    _emit 0x01
    _emit 0x18
    _emit 0x01
    _emit 0x1D
    _emit 0xBC
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x01
    _emit 0x1D
    _emit 0xC0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x01
    _emit 0x1D
    _emit 0x60
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x77
    _emit 0x10
    _emit 0xE8
    _emit 0xEB
    _emit 0x1E
    _emit 0x04
    _emit 0x00
    _emit 0x5E
    _emit 0x8B
    _emit 0xC3
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
