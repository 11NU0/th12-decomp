/* Byte-for-byte override for FUN_004466a0.

 * Original bytes (1383):
 *     0000: 55 8b 6c 24 08 8b 45 24
 *     0008: 83 f8 05 0f 87 4d 05 00
 *     0010: 00 53 56 57 ff 24 85 08
 *     0018: 6c 44 00 8b 0d b4 e8 4c
 *     0020: 00 b8 1f 85 eb 51 f7 e9
 *     0028: c1 fa 03 8b f2 c1 ee 1f
 *     0030: 03 f2 8b c6 6b c0 19 2b
 *     0038: c8 8d 55 28 c7 45 30 19
 *     0040: 00 00 00 e8 a8 90 fc ff
 *     0048: 8d 95 d8 01 00 00 8b ce
 *     0050: c7 85 e0 01 00 00 03 00
 *     0058: 00 00 e8 91 90 fc ff 33
 *     0060: db c7 85 a8 02 00 00 01
 *     0068: 00 00 00 89 1d b4 e8 4c
 *     0070: 00 39 9d 6c 06 00 00 75
 *     0078: 29 8b 15 b8 43 4b 00 8b
 *     0080: 82 b4 8f 01 00 53 6a 14
 *     0088: 8d 4c 24 1c 51 50 8d 43
 *     0090: 17 33 c9 e8 68 ae 01 00
 *     0098: 8b 4c 24 14 89 8d 6c 06
 *     00a0: 00 00 be 71 00 00 00 8b
 *     00a8: fd e8 52 88 ff ff 8d 4e
 *     00b0: 90 8b c5 e8 e8 87 ff ff
 *     00b8: 68 90 01 00 00 8d 95 80
 *     00c0: 5a 00 00 53 52 e8 b6 0c
 *     00c8: 03 00 83 a5 18 5c 00 00
 *     00d0: f3 83 c4 0c 55 8d 85 1c
 *     00d8: 5c 00 00 bf 90 66 44 00
 *     00e0: 89 9d 74 5a 00 00 e8 25
 *     00e8: e5 01 00 8b 85 54 04 00
 *     00f0: 00 8b 15 cc e8 4c 00 50
 *     00f8: e8 83 b1 01 00 85 c0 75
 *     0100: 19 8d 70 63 8b fd e8 f5
 *     0108: 87 ff ff 8b 8d 54 04 00
 *     0110: 00 51 8d 5e a0 e8 26 b2
 *     0118: 01 00 83 bd b8 02 00 00
 *     0120: 06 0f 8e 34 04 00 00 b9
 *     0128: 02 00 00 00 8b c5 e8 6d
 *     0130: 87 ff ff 5f 5e 5b b8 01
 *     0138: 00 00 00 5d c2 04 00 8b
 *     0140: 55 28 8d 75 28 89 56 04
 *     0148: 8b 85 d8 01 00 00 8d bd
 *     0150: d8 01 00 00 89 47 04 b0
 *     0158: 10 84 05 c4 48 4d 00 75
 *     0160: 08 84 05 c0 48 4d 00 74
 *     0168: 09 6a ff 8b c6 e8 5e e1
 *     0170: 01 00 bb 20 00 00 00 84
 *     0178: 1d c4 48 4d 00 75 08 84
 *     0180: 1d c0 48 4d 00 74 09 6a
 *     0188: 01 8b c6 e8 40 e1 01 00
 *     0190: b0 40 84 05 c4 48 4d 00
 *     0198: 75 08 84 05 c0 48 4d 00
 *     01a0: 74 09 6a ff 8b c7 e8 25
 *     01a8: e1 01 00 b0 80 84 05 c4
 *     01b0: 48 4d 00 75 08 84 05 c0
 *     01b8: 48 4d 00 74 09 6a 01 8b
 *     01c0: c7 e8 0a e1 01 00 8b 4f
 *     01c8: 04 3b 0f 74 0a ba 0a 00
 *     01d0: 00 00 e8 19 d5 00 00 8b
 *     01d8: 56 04 3b 16 74 0a ba 0a
 *     01e0: 00 00 00 e8 08 d5 00 00
 *     01e8: a1 c4 48 4d 00 a9 02 01
 *     01f0: 00 00 74 29 b9 05 00 00
 *     01f8: 00 8b c5 e8 a0 86 ff ff
 *     0200: ba 09 00 00 00 e8 e6 d4
 *     0208: 00 00 83 8d 18 5c 00 00
 *     0210: 04 5f 5e 5b b8 01 00 00
 *     0218: 00 5d c2 04 00 a9 01 00
 *     0220: 08 00 0f 84 33 03 00 00
 *     0228: 8b 07 6b c0 19 03 06 83
 *     0230: bc 85 80 5a 00 00 00 0f
 *     0238: 84 1e 03 00 00 b9 04 00
 *     0240: 00 00 8b c5 e8 57 86 ff
 *     0248: ff 8b 0f 6b c9 19 03 0e
 *     0250: 8b c6 89 8d 78 5a 00 00
 *     0258: e8 03 e0 01 00 ba 07 00
 *     0260: 00 00 e8 89 d4 00 00 c7
 *     0268: 45 30 07 00 00 00 8b 46
 *     0270: 08 85 c0 74 0d 7f 05 48
 *     0278: 89 06 eb 0c 33 c0 89 06
 *     0280: eb 06 c7 06 00 00 00 00
 *     0288: 33 c9 33 c0 8d 64 24 00
 *     0290: 8b 95 78 5a 00 00 8b 94
 *     0298: 95 80 5a 00 00 83 bc 02
 *     02a0: dc 00 00 00 00 75 13 8b
 *     02a8: 96 d4 00 00 00 89 8c 96
 *     02b0: 90 00 00 00 ff 86 d4 00
 *     02b8: 00 00 83 c0 24 41 3d fc
 *     02c0: 00 00 00 7c cb 6a ff 8b
 *     02c8: c6 e8 02 e0 01 00 6a 01
 *     02d0: 8b c6 e8 f9 df 01 00 5f
 *     02d8: 5e 5b b8 01 00 00 00 5d
 *     02e0: c2 04 00 83 bd b8 02 00
 *     02e8: 00 0f 0f 8c 6b 02 00 00
 *     02f0: 8b 45 28 8d 75 28 89 46
 *     02f8: 04 b0 10 84 05 c4 48 4d
 *     0300: 00 75 08 84 05 c0 48 4d
 *     0308: 00 74 09 6a ff 8b c6 e8
 *     0310: bc df 01 00 bb 20 00 00
 *     0318: 00 84 1d c4 48 4d 00 75
 *     0320: 08 84 1d c0 48 4d 00 74
 *     0328: 09 6a 01 8b c6 e8 9e df
 *     0330: 01 00 8b 4e 04 3b 0e 74
 *     0338: 0a ba 0a 00 00 00 e8 ad
 *     0340: d3 00 00 a1 c4 48 4d 00
 *     0348: a9 02 01 00 00 74 3a 8b
 *     0350: c6 e8 4a df 01 00 b9 02
 *     0358: 00 00 00 8b c5 c7 45 30
 *     0360: 19 00 00 00 c7 85 fc 00
 *     0368: 00 00 00 00 00 00 e8 2d
 *     0370: 85 ff ff ba 09 00 00 00
 *     0378: e8 73 d3 00 00 5f 5e 5b
 *     0380: b8 01 00 00 00 5d c2 04
 *     0388: 00 a9 01 00 08 00 0f 84
 *     0390: c7 01 00 00 8b 16 b9 03
 *     0398: 00 00 00 8b c5 89 95 7c
 *     03a0: 5a 00 00 e8 f8 84 ff ff
 *     03a8: 83 8d 18 5c 00 00 04 5f
 *     03b0: 5e 5b b8 01 00 00 00 5d
 *     03b8: c2 04 00 be 02 00 00 00
 *     03c0: bb 20 00 00 00 39 b5 b8
 *     03c8: 02 00 00 75 2b 6a 3b 6a
 *     03d0: 00 6a 00 6a 00 53 6a 05
 *     03d8: e8 23 bf 00 00 d9 05 60
 *     03e0: 42 4a 00 83 ec 08 d9 5c
 *     03e8: 24 04 d9 05 c0 3e 4a 00
 *     03f0: d9 1c 24 e8 e8 b0 fc ff
 *     03f8: 39 9d b8 02 00 00 0f 8c
 *     0400: 57 01 00 00 f6 85 18 5c
 *     0408: 00 00 08 0f 84 4a 01 00
 *     0410: 00 8b d6 8b c5 e8 26 84
 *     0418: ff ff d9 05 50 42 4a 00
 *     0420: 8b 85 7c 5a 00 00 40 8b
 *     0428: c8 c1 e1 06 81 c1 f0 eb
 *     0430: 4a 00 51 d9 1c 24 89 0d
 *     0438: 2c 45 4b 00 a3 b0 0c 4b
 *     0440: 00 a3 b4 0c 4b 00 e8 85
 *     0448: 97 fe ff c7 05 40 ee 4c
 *     0450: 00 0d 00 00 00 8b 95 78
 *     0458: 5a 00 00 8b 84 95 80 5a
 *     0460: 00 00 05 e0 01 00 00 ba
 *     0468: e8 43 4b 00 8d 64 24 00
 *     0470: 8a 08 88 0a 40 42 84 c9
 *     0478: 75 f6 8b 85 78 5a 00 00
 *     0480: 8b 8c 85 80 5a 00 00 8b
 *     0488: 41 1c 8b 50 5c 89 15 90
 *     0490: 0c 4b 00 8b 48 60 89 0d
 *     0498: 94 0c 4b 00 8b 50 64 5f
 *     04a0: 89 35 b0 e8 4c 00 5e 89
 *     04a8: 15 a8 0c 4b 00 8b 85 78
 *     04b0: 5a 00 00 5b a3 b4 e8 4c
 *     04b8: 00 b8 01 00 00 00 5d c2
 *     04c0: 04 00 83 bd b8 02 00 00
 *     04c8: 06 0f 8c 8c 00 00 00 f6
 *     04d0: 85 18 5c 00 00 08 0f 84
 *     04d8: 7f 00 00 00 8d b5 80 5a
 *     04e0: 00 00 bb 64 00 00 00 8b
 *     04e8: 3e 85 ff 74 0f 57 e8 bd
 *     04f0: 48 ff ff 57 e8 b6 5e 02
 *     04f8: 00 83 c4 04 83 c6 04 83
 *     0500: eb 01 75 e3 68 90 01 00
 *     0508: 00 8d 85 80 5a 00 00 53
 *     0510: 50 e8 6a 08 03 00 8b 8d
 *     0518: 8c 04 00 00 83 c4 0c 51
 *     0520: bb 01 00 00 00 e8 a6 ad
 *     0528: 01 00 c7 85 8c 04 00 00
 *     0530: 00 00 00 00 8b 95 6c 06
 *     0538: 00 00 52 e8 90 ad 01 00
 *     0540: 8b d3 8b c5 c7 85 6c 06
 *     0548: 00 00 00 00 00 00 e8 ed
 *     0550: 82 ff ff 8d 45 28 e8 45
 *     0558: dd 01 00 5f 5e 5b b8 01
 *     0560: 00 00 00 5d c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_004466a0(void * a0, void * a1)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x45
    _emit 0x24
    _emit 0x83
    _emit 0xF8
    _emit 0x05
    _emit 0x0F
    _emit 0x87
    _emit 0x4D
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0xFF
    _emit 0x24
    _emit 0x85
    _emit 0x08
    _emit 0x6C
    _emit 0x44
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0xB4
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xB8
    _emit 0x1F
    _emit 0x85
    _emit 0xEB
    _emit 0x51
    _emit 0xF7
    _emit 0xE9
    _emit 0xC1
    _emit 0xFA
    _emit 0x03
    _emit 0x8B
    _emit 0xF2
    _emit 0xC1
    _emit 0xEE
    _emit 0x1F
    _emit 0x03
    _emit 0xF2
    _emit 0x8B
    _emit 0xC6
    _emit 0x6B
    _emit 0xC0
    _emit 0x19
    _emit 0x2B
    _emit 0xC8
    _emit 0x8D
    _emit 0x55
    _emit 0x28
    _emit 0xC7
    _emit 0x45
    _emit 0x30
    _emit 0x19
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xA8
    _emit 0x90
    _emit 0xFC
    _emit 0xFF
    _emit 0x8D
    _emit 0x95
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xCE
    _emit 0xC7
    _emit 0x85
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x91
    _emit 0x90
    _emit 0xFC
    _emit 0xFF
    _emit 0x33
    _emit 0xDB
    _emit 0xC7
    _emit 0x85
    _emit 0xA8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x1D
    _emit 0xB4
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x39
    _emit 0x9D
    _emit 0x6C
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x29
    _emit 0x8B
    _emit 0x15
    _emit 0xB8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x82
    _emit 0xB4
    _emit 0x8F
    _emit 0x01
    _emit 0x00
    _emit 0x53
    _emit 0x6A
    _emit 0x14
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x1C
    _emit 0x51
    _emit 0x50
    _emit 0x8D
    _emit 0x43
    _emit 0x17
    _emit 0x33
    _emit 0xC9
    _emit 0xE8
    _emit 0x68
    _emit 0xAE
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x8D
    _emit 0x6C
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0xBE
    _emit 0x71
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xFD
    _emit 0xE8
    _emit 0x52
    _emit 0x88
    _emit 0xFF
    _emit 0xFF
    _emit 0x8D
    _emit 0x4E
    _emit 0x90
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0xE8
    _emit 0x87
    _emit 0xFF
    _emit 0xFF
    _emit 0x68
    _emit 0x90
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x95
    _emit 0x80
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x52
    _emit 0xE8
    _emit 0xB6
    _emit 0x0C
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xA5
    _emit 0x18
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0xF3
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x55
    _emit 0x8D
    _emit 0x85
    _emit 0x1C
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0xBF
    _emit 0x90
    _emit 0x66
    _emit 0x44
    _emit 0x00
    _emit 0x89
    _emit 0x9D
    _emit 0x74
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x25
    _emit 0xE5
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x85
    _emit 0x54
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x50
    _emit 0xE8
    _emit 0x83
    _emit 0xB1
    _emit 0x01
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x19
    _emit 0x8D
    _emit 0x70
    _emit 0x63
    _emit 0x8B
    _emit 0xFD
    _emit 0xE8
    _emit 0xF5
    _emit 0x87
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x8D
    _emit 0x54
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0x8D
    _emit 0x5E
    _emit 0xA0
    _emit 0xE8
    _emit 0x26
    _emit 0xB2
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xBD
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x06
    _emit 0x0F
    _emit 0x8E
    _emit 0x34
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xB9
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0x6D
    _emit 0x87
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x55
    _emit 0x28
    _emit 0x8D
    _emit 0x75
    _emit 0x28
    _emit 0x89
    _emit 0x56
    _emit 0x04
    _emit 0x8B
    _emit 0x85
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0xBD
    _emit 0xD8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x47
    _emit 0x04
    _emit 0xB0
    _emit 0x10
    _emit 0x84
    _emit 0x05
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x75
    _emit 0x08
    _emit 0x84
    _emit 0x05
    _emit 0xC0
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x74
    _emit 0x09
    _emit 0x6A
    _emit 0xFF
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x5E
    _emit 0xE1
    _emit 0x01
    _emit 0x00
    _emit 0xBB
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x84
    _emit 0x1D
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x75
    _emit 0x08
    _emit 0x84
    _emit 0x1D
    _emit 0xC0
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x74
    _emit 0x09
    _emit 0x6A
    _emit 0x01
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x40
    _emit 0xE1
    _emit 0x01
    _emit 0x00
    _emit 0xB0
    _emit 0x40
    _emit 0x84
    _emit 0x05
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x75
    _emit 0x08
    _emit 0x84
    _emit 0x05
    _emit 0xC0
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x74
    _emit 0x09
    _emit 0x6A
    _emit 0xFF
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0x25
    _emit 0xE1
    _emit 0x01
    _emit 0x00
    _emit 0xB0
    _emit 0x80
    _emit 0x84
    _emit 0x05
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x75
    _emit 0x08
    _emit 0x84
    _emit 0x05
    _emit 0xC0
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x74
    _emit 0x09
    _emit 0x6A
    _emit 0x01
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0x0A
    _emit 0xE1
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x4F
    _emit 0x04
    _emit 0x3B
    _emit 0x0F
    _emit 0x74
    _emit 0x0A
    _emit 0xBA
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x19
    _emit 0xD5
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x56
    _emit 0x04
    _emit 0x3B
    _emit 0x16
    _emit 0x74
    _emit 0x0A
    _emit 0xBA
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x08
    _emit 0xD5
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0xA9
    _emit 0x02
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x29
    _emit 0xB9
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0xA0
    _emit 0x86
    _emit 0xFF
    _emit 0xFF
    _emit 0xBA
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xE6
    _emit 0xD4
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x8D
    _emit 0x18
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0x04
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xA9
    _emit 0x01
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x33
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x07
    _emit 0x6B
    _emit 0xC0
    _emit 0x19
    _emit 0x03
    _emit 0x06
    _emit 0x83
    _emit 0xBC
    _emit 0x85
    _emit 0x80
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x1E
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xB9
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0x57
    _emit 0x86
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x0F
    _emit 0x6B
    _emit 0xC9
    _emit 0x19
    _emit 0x03
    _emit 0x0E
    _emit 0x8B
    _emit 0xC6
    _emit 0x89
    _emit 0x8D
    _emit 0x78
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x03
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0xBA
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x89
    _emit 0xD4
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x45
    _emit 0x30
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x08
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0D
    _emit 0x7F
    _emit 0x05
    _emit 0x48
    _emit 0x89
    _emit 0x06
    _emit 0xEB
    _emit 0x0C
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x06
    _emit 0xEB
    _emit 0x06
    _emit 0xC7
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0x33
    _emit 0xC0
    _emit 0x8D
    _emit 0x64
    _emit 0x24
    _emit 0x00
    _emit 0x8B
    _emit 0x95
    _emit 0x78
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x94
    _emit 0x95
    _emit 0x80
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xBC
    _emit 0x02
    _emit 0xDC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x13
    _emit 0x8B
    _emit 0x96
    _emit 0xD4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x8C
    _emit 0x96
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x86
    _emit 0xD4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC0
    _emit 0x24
    _emit 0x41
    _emit 0x3D
    _emit 0xFC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x7C
    _emit 0xCB
    _emit 0x6A
    _emit 0xFF
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x02
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xF9
    _emit 0xDF
    _emit 0x01
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xBD
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x0F
    _emit 0x8C
    _emit 0x6B
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x28
    _emit 0x8D
    _emit 0x75
    _emit 0x28
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0xB0
    _emit 0x10
    _emit 0x84
    _emit 0x05
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x75
    _emit 0x08
    _emit 0x84
    _emit 0x05
    _emit 0xC0
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x74
    _emit 0x09
    _emit 0x6A
    _emit 0xFF
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xBC
    _emit 0xDF
    _emit 0x01
    _emit 0x00
    _emit 0xBB
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x84
    _emit 0x1D
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x75
    _emit 0x08
    _emit 0x84
    _emit 0x1D
    _emit 0xC0
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x74
    _emit 0x09
    _emit 0x6A
    _emit 0x01
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x9E
    _emit 0xDF
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x04
    _emit 0x3B
    _emit 0x0E
    _emit 0x74
    _emit 0x0A
    _emit 0xBA
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xAD
    _emit 0xD3
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0xA9
    _emit 0x02
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x3A
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x4A
    _emit 0xDF
    _emit 0x01
    _emit 0x00
    _emit 0xB9
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0xC7
    _emit 0x45
    _emit 0x30
    _emit 0x19
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x85
    _emit 0xFC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x2D
    _emit 0x85
    _emit 0xFF
    _emit 0xFF
    _emit 0xBA
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x73
    _emit 0xD3
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xA9
    _emit 0x01
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0xC7
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x16
    _emit 0xB9
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0x89
    _emit 0x95
    _emit 0x7C
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xF8
    _emit 0x84
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0x8D
    _emit 0x18
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0x04
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xBE
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBB
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0xB5
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x2B
    _emit 0x6A
    _emit 0x3B
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x53
    _emit 0x6A
    _emit 0x05
    _emit 0xE8
    _emit 0x23
    _emit 0xBF
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0x60
    _emit 0x42
    _emit 0x4A
    _emit 0x00
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x05
    _emit 0xC0
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0xE8
    _emit 0xB0
    _emit 0xFC
    _emit 0xFF
    _emit 0x39
    _emit 0x9D
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x8C
    _emit 0x57
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0x85
    _emit 0x18
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x0F
    _emit 0x84
    _emit 0x4A
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xD6
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0x26
    _emit 0x84
    _emit 0xFF
    _emit 0xFF
    _emit 0xD9
    _emit 0x05
    _emit 0x50
    _emit 0x42
    _emit 0x4A
    _emit 0x00
    _emit 0x8B
    _emit 0x85
    _emit 0x7C
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x40
    _emit 0x8B
    _emit 0xC8
    _emit 0xC1
    _emit 0xE1
    _emit 0x06
    _emit 0x81
    _emit 0xC1
    _emit 0xF0
    _emit 0xEB
    _emit 0x4A
    _emit 0x00
    _emit 0x51
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0x89
    _emit 0x0D
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xA3
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xA3
    _emit 0xB4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x85
    _emit 0x97
    _emit 0xFE
    _emit 0xFF
    _emit 0xC7
    _emit 0x05
    _emit 0x40
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x95
    _emit 0x78
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x84
    _emit 0x95
    _emit 0x80
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x05
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xBA
    _emit 0xE8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x64
    _emit 0x24
    _emit 0x00
    _emit 0x8A
    _emit 0x08
    _emit 0x88
    _emit 0x0A
    _emit 0x40
    _emit 0x42
    _emit 0x84
    _emit 0xC9
    _emit 0x75
    _emit 0xF6
    _emit 0x8B
    _emit 0x85
    _emit 0x78
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x8C
    _emit 0x85
    _emit 0x80
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x41
    _emit 0x1C
    _emit 0x8B
    _emit 0x50
    _emit 0x5C
    _emit 0x89
    _emit 0x15
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x48
    _emit 0x60
    _emit 0x89
    _emit 0x0D
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x50
    _emit 0x64
    _emit 0x5F
    _emit 0x89
    _emit 0x35
    _emit 0xB0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x5E
    _emit 0x89
    _emit 0x15
    _emit 0xA8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x85
    _emit 0x78
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0xA3
    _emit 0xB4
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xBD
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x06
    _emit 0x0F
    _emit 0x8C
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0x85
    _emit 0x18
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x0F
    _emit 0x84
    _emit 0x7F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0xB5
    _emit 0x80
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0xBB
    _emit 0x64
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x3E
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x0F
    _emit 0x57
    _emit 0xE8
    _emit 0xBD
    _emit 0x48
    _emit 0xFF
    _emit 0xFF
    _emit 0x57
    _emit 0xE8
    _emit 0xB6
    _emit 0x5E
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x83
    _emit 0xC6
    _emit 0x04
    _emit 0x83
    _emit 0xEB
    _emit 0x01
    _emit 0x75
    _emit 0xE3
    _emit 0x68
    _emit 0x90
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x85
    _emit 0x80
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0x50
    _emit 0xE8
    _emit 0x6A
    _emit 0x08
    _emit 0x03
    _emit 0x00
    _emit 0x8B
    _emit 0x8D
    _emit 0x8C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x51
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xA6
    _emit 0xAD
    _emit 0x01
    _emit 0x00
    _emit 0xC7
    _emit 0x85
    _emit 0x8C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x95
    _emit 0x6C
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x52
    _emit 0xE8
    _emit 0x90
    _emit 0xAD
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0xD3
    _emit 0x8B
    _emit 0xC5
    _emit 0xC7
    _emit 0x85
    _emit 0x6C
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xED
    _emit 0x82
    _emit 0xFF
    _emit 0xFF
    _emit 0x8D
    _emit 0x45
    _emit 0x28
    _emit 0xE8
    _emit 0x45
    _emit 0xDD
    _emit 0x01
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
