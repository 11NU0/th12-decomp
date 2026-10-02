/* Byte-for-byte override for FUN_00445a40.

 * Original bytes (1360):
 *     0000: 51 53 8b 1d a8 0c 4b 00
 *     0008: 83 eb 04 f7 db 1b db 55
 *     0010: 8b 6c 24 10 8b 45 24 83
 *     0018: e3 fd 81 c3 b2 00 00 00
 *     0020: 89 5c 24 10 83 f8 04 0f
 *     0028: 87 25 05 00 00 56 57 ff
 *     0030: 24 85 a0 5f 44 00 c7 45
 *     0038: 30 02 00 00 00 83 3d a8
 *     0040: 0c 4b 00 04 0f 85 9e 00
 *     0048: 00 00 8b 0d 1c 45 4b 00
 *     0050: a1 90 0c 4b 00 b2 10 84
 *     0058: 94 41 d0 e9 01 00 75 40
 *     0060: 83 7d 28 00 75 23 8b 45
 *     0068: 30 85 c0 74 15 83 f8 01
 *     0070: 7f 06 48 89 45 28 eb 11
 *     0078: b8 01 00 00 00 89 45 28
 *     0080: eb 07 c7 45 28 01 00 00
 *     0088: 00 8b 85 fc 00 00 00 c7
 *     0090: 84 85 b8 00 00 00 00 00
 *     0098: 00 00 ff 85 fc 00 00 00
 *     00a0: a1 90 0c 4b 00 84 94 41
 *     00a8: d1 e9 01 00 75 3a b9 01
 *     00b0: 00 00 00 39 4d 28 75 1d
 *     00b8: 8b 45 30 85 c0 74 0f 7f
 *     00c0: 06 48 89 45 28 eb 0e 33
 *     00c8: c0 89 45 28 eb 07 c7 45
 *     00d0: 28 00 00 00 00 8b 95 fc
 *     00d8: 00 00 00 89 8c 95 b8 00
 *     00e0: 00 00 01 8d fc 00 00 00
 *     00e8: 8b 4d 14 6a 00 6a 70 8d
 *     00f0: 44 24 18 50 51 b8 17 00
 *     00f8: 00 00 33 c9 e8 5f ba 01
 *     0100: 00 8b 54 24 10 89 95 88
 *     0108: 04 00 00 a1 90 0c 4b 00
 *     0110: 8d 34 18 8b 8c b5 c8 02
 *     0118: 00 00 51 bb 01 00 00 00
 *     0120: e8 0b be 01 00 8b 5c 24
 *     0128: 18 c7 84 b5 c8 02 00 00
 *     0130: 00 00 00 00 8b 15 90 0c
 *     0138: 4b 00 8d 34 1a 8b fd e8
 *     0140: 1c 94 ff ff a1 90 0c 4b
 *     0148: 00 03 c3 8b 8c 85 c8 02
 *     0150: 00 00 51 bb 03 00 00 00
 *     0158: e8 43 be 01 00 8b 15 90
 *     0160: 0c 4b 00 8b 74 24 18 0f
 *     0168: b7 5d 28 03 d6 8b 84 95
 *     0170: c8 02 00 00 66 83 c3 11
 *     0178: 50 e8 b2 bd 01 00 b9 01
 *     0180: 00 00 00 8b c5 e8 76 93
 *     0188: ff ff a1 90 0c 4b 00 8b
 *     0190: 1d 1c 45 4b 00 8b c8 69
 *     0198: c9 fa 22 00 00 03 0d a8
 *     01a0: 0c 4b 00 83 bc 8b 98 05
 *     01a8: 00 00 00 75 64 03 c6 8b
 *     01b0: 94 85 c8 02 00 00 8d bc
 *     01b8: 85 c8 02 00 00 52 8b 15
 *     01c0: cc e8 4c 00 e8 17 bd 01
 *     01c8: 00 85 c0 75 02 89 07 83
 *     01d0: c0 10 74 27 eb 0a 8d a4
 *     01d8: 24 00 00 00 00 8d 49 00
 *     01e0: 8b 08 ba a8 00 00 00 66
 *     01e8: 39 91 ea 03 00 00 0f 84
 *     01f0: aa 00 00 00 8b 40 04 85
 *     01f8: c0 75 e5 c7 44 24 18 00
 *     0200: 00 00 00 8d 44 24 18 e8
 *     0208: 34 c1 01 00 a1 90 0c 4b
 *     0210: 00 8b d0 69 d2 fa 22 00
 *     0218: 00 03 15 a8 0c 4b 00 83
 *     0220: bc 93 8c 4b 00 00 00 75
 *     0228: 4f 8b 15 cc e8 4c 00 03
 *     0230: c6 8d b4 85 c8 02 00 00
 *     0238: 8b 06 50 e8 a0 bc 01 00
 *     0240: 85 c0 75 02 89 06 83 c0
 *     0248: 10 74 1c eb 03 8d 49 00
 *     0250: 8b 08 ba a9 00 00 00 66
 *     0258: 39 91 ea 03 00 00 74 4b
 *     0260: 8b 40 04 85 c0 75 e9 c7
 *     0268: 44 24 18 00 00 00 00 8d
 *     0270: 44 24 18 e8 c8 c0 01 00
 *     0278: 83 bd b8 02 00 00 06 0f
 *     0280: 8e cb 02 00 00 b9 02 00
 *     0288: 00 00 8b c5 e8 6f 92 ff
 *     0290: ff 5f 5e 5d b8 01 00 00
 *     0298: 00 5b 59 c2 04 00 8b c1
 *     02a0: 8b 08 89 4c 24 18 e9 58
 *     02a8: ff ff ff 8b c1 8b 08 89
 *     02b0: 4c 24 18 eb ba 8b 55 28
 *     02b8: 8d 75 28 b0 10 89 56 04
 *     02c0: 84 05 c4 48 4d 00 75 08
 *     02c8: 84 05 c0 48 4d 00 74 09
 *     02d0: 6a ff 8b c6 e8 57 ec 01
 *     02d8: 00 b0 20 84 05 c4 48 4d
 *     02e0: 00 75 08 84 05 c0 48 4d
 *     02e8: 00 74 09 6a 01 8b c6 e8
 *     02f0: 3c ec 01 00 8b 46 04 bf
 *     02f8: 07 00 00 00 3b 06 74 42
 *     0300: 8d 57 03 e8 48 e0 00 00
 *     0308: 8b 0d 90 0c 4b 00 03 cb
 *     0310: 8b 94 8d c8 02 00 00 52
 *     0318: 8d 5f fc e8 80 bc 01 00
 *     0320: a1 90 0c 4b 00 8b 4c 24
 *     0328: 18 0f b7 1e 03 c1 8b 94
 *     0330: 85 c8 02 00 00 66 03 df
 *     0338: 52 e8 f2 bb 01 00 8b 5c
 *     0340: 24 18 a1 c4 48 4d 00 a9
 *     0348: 02 01 00 00 74 23 b9 04
 *     0350: 00 00 00 8b c5 e8 a6 91
 *     0358: ff ff ba 09 00 00 00 e8
 *     0360: ec df 00 00 5f 5e 5d b8
 *     0368: 01 00 00 00 5b 59 c2 04
 *     0370: 00 a9 01 00 08 00 0f 84
 *     0378: d4 01 00 00 b9 03 00 00
 *     0380: 00 8b c5 e8 78 91 ff ff
 *     0388: 8b d7 e8 c1 df 00 00 8b
 *     0390: 0e a1 90 0c 4b 00 8d bc
 *     0398: 81 90 00 00 00 03 c3 8d
 *     03a0: b4 85 c8 02 00 00 8d 5c
 *     03a8: 24 18 e8 71 c2 01 00 8b
 *     03b0: 54 24 18 52 bb 06 00 00
 *     03b8: 00 e8 72 bb 01 00 f6 05
 *     03c0: e0 0c 4b 00 10 0f 85 85
 *     03c8: 01 00 00 d9 e8 51 d9 1c
 *     03d0: 24 e8 5a a4 fe ff 5f 5e
 *     03d8: 5d 8d 43 fb 5b 59 c2 04
 *     03e0: 00 83 bd b8 02 00 00 0a
 *     03e8: 75 64 f6 05 e0 0c 4b 00
 *     03f0: 10 75 2e d9 05 60 42 4a
 *     03f8: 00 83 ec 08 d9 5c 24 04
 *     0400: d9 05 c0 3e 4a 00 d9 1c
 *     0408: 24 e8 32 bd fc ff 6a 40
 *     0410: 6a 00 6a 00 6a 00 6a 20
 *     0418: 6a 05 e8 41 cb 00 00 eb
 *     0420: 2d 8b 4d 28 8d 45 28 89
 *     0428: 0d 94 0c 4b 00 89 0d c0
 *     0430: e8 4c 00 e8 88 ea 01 00
 *     0438: be 70 00 00 00 8b fd e8
 *     0440: 4c 91 ff ff 8d 56 98 8b
 *     0448: c5 e8 52 90 ff ff 83 bd
 *     0450: b8 02 00 00 28 0f 8c f5
 *     0458: 00 00 00 8b 4d 28 8d 45
 *     0460: 28 89 0d 94 0c 4b 00 89
 *     0468: 0d c0 e8 4c 00 e8 4e ea
 *     0470: 01 00 f6 05 e0 0c 4b 00
 *     0478: 10 75 6a ba 02 00 00 00
 *     0480: 8b c5 e8 19 90 ff ff 83
 *     0488: 3d a8 0c 4b 00 04 bf 07
 *     0490: 00 00 00 7d 27 89 3d 40
 *     0498: ee 4c 00 5f 5e b8 01 00
 *     04a0: 00 00 5d c7 05 2c 45 4b
 *     04a8: 00 30 ec 4a 00 a3 b0 0c
 *     04b0: 4b 00 a3 b4 0c 4b 00 5b
 *     04b8: 59 c2 04 00 89 3d b0 0c
 *     04c0: 4b 00 89 3d b4 0c 4b 00
 *     04c8: 89 3d 40 ee 4c 00 5f 5e
 *     04d0: 5d c7 05 2c 45 4b 00 b0
 *     04d8: ed 4a 00 b8 01 00 00 00
 *     04e0: 5b 59 c2 04 00 be 70 00
 *     04e8: 00 00 8b fd e8 9f 90 ff
 *     04f0: ff 8d 56 98 8b c5 e8 a5
 *     04f8: 8f ff ff 5f 5e 5d b8 01
 *     0500: 00 00 00 5b 59 c2 04 00
 *     0508: 83 bd b8 02 00 00 06 7c
 *     0510: 3f 8d 45 28 89 44 24 18
 *     0518: 8b 00 a3 94 0c 4b 00 a3
 *     0520: c0 e8 4c 00 a1 90 0c 4b
 *     0528: 00 8d 34 18 8b fd e8 5d
 *     0530: 90 ff ff be 70 00 00 00
 *     0538: e8 53 90 ff ff 8d 56 96
 *     0540: 8b c5 e8 59 8f ff ff 8b
 *     0548: 44 24 18 e8 b0 e9 01 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_00445a40(void * a0, int a1)
{
  __asm {
    _emit 0x51
    _emit 0x53
    _emit 0x8B
    _emit 0x1D
    _emit 0xA8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0xEB
    _emit 0x04
    _emit 0xF7
    _emit 0xDB
    _emit 0x1B
    _emit 0xDB
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x45
    _emit 0x24
    _emit 0x83
    _emit 0xE3
    _emit 0xFD
    _emit 0x81
    _emit 0xC3
    _emit 0xB2
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x5C
    _emit 0x24
    _emit 0x10
    _emit 0x83
    _emit 0xF8
    _emit 0x04
    _emit 0x0F
    _emit 0x87
    _emit 0x25
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0x57
    _emit 0xFF
    _emit 0x24
    _emit 0x85
    _emit 0xA0
    _emit 0x5F
    _emit 0x44
    _emit 0x00
    _emit 0xC7
    _emit 0x45
    _emit 0x30
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x3D
    _emit 0xA8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x04
    _emit 0x0F
    _emit 0x85
    _emit 0x9E
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x1C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xB2
    _emit 0x10
    _emit 0x84
    _emit 0x94
    _emit 0x41
    _emit 0xD0
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x75
    _emit 0x40
    _emit 0x83
    _emit 0x7D
    _emit 0x28
    _emit 0x00
    _emit 0x75
    _emit 0x23
    _emit 0x8B
    _emit 0x45
    _emit 0x30
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x15
    _emit 0x83
    _emit 0xF8
    _emit 0x01
    _emit 0x7F
    _emit 0x06
    _emit 0x48
    _emit 0x89
    _emit 0x45
    _emit 0x28
    _emit 0xEB
    _emit 0x11
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0x28
    _emit 0xEB
    _emit 0x07
    _emit 0xC7
    _emit 0x45
    _emit 0x28
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x85
    _emit 0xFC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x84
    _emit 0x85
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x85
    _emit 0xFC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x84
    _emit 0x94
    _emit 0x41
    _emit 0xD1
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x75
    _emit 0x3A
    _emit 0xB9
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x4D
    _emit 0x28
    _emit 0x75
    _emit 0x1D
    _emit 0x8B
    _emit 0x45
    _emit 0x30
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0F
    _emit 0x7F
    _emit 0x06
    _emit 0x48
    _emit 0x89
    _emit 0x45
    _emit 0x28
    _emit 0xEB
    _emit 0x0E
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x45
    _emit 0x28
    _emit 0xEB
    _emit 0x07
    _emit 0xC7
    _emit 0x45
    _emit 0x28
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x95
    _emit 0xFC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x8C
    _emit 0x95
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x8D
    _emit 0xFC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4D
    _emit 0x14
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x70
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x50
    _emit 0x51
    _emit 0xB8
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0xE8
    _emit 0x5F
    _emit 0xBA
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x89
    _emit 0x95
    _emit 0x88
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x34
    _emit 0x18
    _emit 0x8B
    _emit 0x8C
    _emit 0xB5
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x0B
    _emit 0xBE
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x5C
    _emit 0x24
    _emit 0x18
    _emit 0xC7
    _emit 0x84
    _emit 0xB5
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x34
    _emit 0x1A
    _emit 0x8B
    _emit 0xFD
    _emit 0xE8
    _emit 0x1C
    _emit 0x94
    _emit 0xFF
    _emit 0xFF
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x03
    _emit 0xC3
    _emit 0x8B
    _emit 0x8C
    _emit 0x85
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xBB
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x43
    _emit 0xBE
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x18
    _emit 0x0F
    _emit 0xB7
    _emit 0x5D
    _emit 0x28
    _emit 0x03
    _emit 0xD6
    _emit 0x8B
    _emit 0x84
    _emit 0x95
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x83
    _emit 0xC3
    _emit 0x11
    _emit 0x50
    _emit 0xE8
    _emit 0xB2
    _emit 0xBD
    _emit 0x01
    _emit 0x00
    _emit 0xB9
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0x76
    _emit 0x93
    _emit 0xFF
    _emit 0xFF
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x1D
    _emit 0x1C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0xC8
    _emit 0x69
    _emit 0xC9
    _emit 0xFA
    _emit 0x22
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0x0D
    _emit 0xA8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0xBC
    _emit 0x8B
    _emit 0x98
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x64
    _emit 0x03
    _emit 0xC6
    _emit 0x8B
    _emit 0x94
    _emit 0x85
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0xBC
    _emit 0x85
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x52
    _emit 0x8B
    _emit 0x15
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x17
    _emit 0xBD
    _emit 0x01
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x02
    _emit 0x89
    _emit 0x07
    _emit 0x83
    _emit 0xC0
    _emit 0x10
    _emit 0x74
    _emit 0x27
    _emit 0xEB
    _emit 0x0A
    _emit 0x8D
    _emit 0xA4
    _emit 0x24
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0xBA
    _emit 0xA8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x39
    _emit 0x91
    _emit 0xEA
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0xAA
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xE5
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0xE8
    _emit 0x34
    _emit 0xC1
    _emit 0x01
    _emit 0x00
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0xD0
    _emit 0x69
    _emit 0xD2
    _emit 0xFA
    _emit 0x22
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0x15
    _emit 0xA8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0xBC
    _emit 0x93
    _emit 0x8C
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x4F
    _emit 0x8B
    _emit 0x15
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x03
    _emit 0xC6
    _emit 0x8D
    _emit 0xB4
    _emit 0x85
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x06
    _emit 0x50
    _emit 0xE8
    _emit 0xA0
    _emit 0xBC
    _emit 0x01
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x02
    _emit 0x89
    _emit 0x06
    _emit 0x83
    _emit 0xC0
    _emit 0x10
    _emit 0x74
    _emit 0x1C
    _emit 0xEB
    _emit 0x03
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0xBA
    _emit 0xA9
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x39
    _emit 0x91
    _emit 0xEA
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x4B
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xE9
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0xE8
    _emit 0xC8
    _emit 0xC0
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
    _emit 0xCB
    _emit 0x02
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
    _emit 0x6F
    _emit 0x92
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0xC1
    _emit 0x8B
    _emit 0x08
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0xE9
    _emit 0x58
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xC1
    _emit 0x8B
    _emit 0x08
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0xEB
    _emit 0xBA
    _emit 0x8B
    _emit 0x55
    _emit 0x28
    _emit 0x8D
    _emit 0x75
    _emit 0x28
    _emit 0xB0
    _emit 0x10
    _emit 0x89
    _emit 0x56
    _emit 0x04
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
    _emit 0x57
    _emit 0xEC
    _emit 0x01
    _emit 0x00
    _emit 0xB0
    _emit 0x20
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
    _emit 0xC6
    _emit 0xE8
    _emit 0x3C
    _emit 0xEC
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x04
    _emit 0xBF
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0x06
    _emit 0x74
    _emit 0x42
    _emit 0x8D
    _emit 0x57
    _emit 0x03
    _emit 0xE8
    _emit 0x48
    _emit 0xE0
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x03
    _emit 0xCB
    _emit 0x8B
    _emit 0x94
    _emit 0x8D
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x52
    _emit 0x8D
    _emit 0x5F
    _emit 0xFC
    _emit 0xE8
    _emit 0x80
    _emit 0xBC
    _emit 0x01
    _emit 0x00
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0x0F
    _emit 0xB7
    _emit 0x1E
    _emit 0x03
    _emit 0xC1
    _emit 0x8B
    _emit 0x94
    _emit 0x85
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x03
    _emit 0xDF
    _emit 0x52
    _emit 0xE8
    _emit 0xF2
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x5C
    _emit 0x24
    _emit 0x18
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
    _emit 0x23
    _emit 0xB9
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0xA6
    _emit 0x91
    _emit 0xFF
    _emit 0xFF
    _emit 0xBA
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xEC
    _emit 0xDF
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x59
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
    _emit 0xD4
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xB9
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0x78
    _emit 0x91
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xD7
    _emit 0xE8
    _emit 0xC1
    _emit 0xDF
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0E
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0xBC
    _emit 0x81
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0xC3
    _emit 0x8D
    _emit 0xB4
    _emit 0x85
    _emit 0xC8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x5C
    _emit 0x24
    _emit 0x18
    _emit 0xE8
    _emit 0x71
    _emit 0xC2
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x18
    _emit 0x52
    _emit 0xBB
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x72
    _emit 0xBB
    _emit 0x01
    _emit 0x00
    _emit 0xF6
    _emit 0x05
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x10
    _emit 0x0F
    _emit 0x85
    _emit 0x85
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0xE8
    _emit 0x51
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xE8
    _emit 0x5A
    _emit 0xA4
    _emit 0xFE
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x8D
    _emit 0x43
    _emit 0xFB
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xBD
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x0A
    _emit 0x75
    _emit 0x64
    _emit 0xF6
    _emit 0x05
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x10
    _emit 0x75
    _emit 0x2E
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
    _emit 0x32
    _emit 0xBD
    _emit 0xFC
    _emit 0xFF
    _emit 0x6A
    _emit 0x40
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x20
    _emit 0x6A
    _emit 0x05
    _emit 0xE8
    _emit 0x41
    _emit 0xCB
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x2D
    _emit 0x8B
    _emit 0x4D
    _emit 0x28
    _emit 0x8D
    _emit 0x45
    _emit 0x28
    _emit 0x89
    _emit 0x0D
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x0D
    _emit 0xC0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x88
    _emit 0xEA
    _emit 0x01
    _emit 0x00
    _emit 0xBE
    _emit 0x70
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xFD
    _emit 0xE8
    _emit 0x4C
    _emit 0x91
    _emit 0xFF
    _emit 0xFF
    _emit 0x8D
    _emit 0x56
    _emit 0x98
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0x52
    _emit 0x90
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xBD
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x28
    _emit 0x0F
    _emit 0x8C
    _emit 0xF5
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4D
    _emit 0x28
    _emit 0x8D
    _emit 0x45
    _emit 0x28
    _emit 0x89
    _emit 0x0D
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x0D
    _emit 0xC0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x4E
    _emit 0xEA
    _emit 0x01
    _emit 0x00
    _emit 0xF6
    _emit 0x05
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x10
    _emit 0x75
    _emit 0x6A
    _emit 0xBA
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0x19
    _emit 0x90
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0x3D
    _emit 0xA8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x04
    _emit 0xBF
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x7D
    _emit 0x27
    _emit 0x89
    _emit 0x3D
    _emit 0x40
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC7
    _emit 0x05
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x30
    _emit 0xEC
    _emit 0x4A
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
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0xB4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x40
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xC7
    _emit 0x05
    _emit 0x2C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xB0
    _emit 0xED
    _emit 0x4A
    _emit 0x00
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xBE
    _emit 0x70
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xFD
    _emit 0xE8
    _emit 0x9F
    _emit 0x90
    _emit 0xFF
    _emit 0xFF
    _emit 0x8D
    _emit 0x56
    _emit 0x98
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0xA5
    _emit 0x8F
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x59
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
    _emit 0x7C
    _emit 0x3F
    _emit 0x8D
    _emit 0x45
    _emit 0x28
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x8B
    _emit 0x00
    _emit 0xA3
    _emit 0x94
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xA3
    _emit 0xC0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xA1
    _emit 0x90
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x34
    _emit 0x18
    _emit 0x8B
    _emit 0xFD
    _emit 0xE8
    _emit 0x5D
    _emit 0x90
    _emit 0xFF
    _emit 0xFF
    _emit 0xBE
    _emit 0x70
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x53
    _emit 0x90
    _emit 0xFF
    _emit 0xFF
    _emit 0x8D
    _emit 0x56
    _emit 0x96
    _emit 0x8B
    _emit 0xC5
    _emit 0xE8
    _emit 0x59
    _emit 0x8F
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0xE8
    _emit 0xB0
    _emit 0xE9
    _emit 0x01
    _emit 0x00
  }
  __assume(0);
}
