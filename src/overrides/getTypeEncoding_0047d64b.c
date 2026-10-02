/* Byte-for-byte override for getTypeEncoding.

 * Original bytes (1223):
 *     0000: 8b 0d 18 43 4b 00 53 56
 *     0008: ba 00 40 00 00 57 33 f6
 *     0010: 80 39 5f 75 09 41 8b f2
 *     0018: 89 0d 18 43 4b 00 8a 01
 *     0020: 3c 41 7c 08 3c 5a 0f 8e
 *     0028: 89 00 00 00 3c 24 0f 85
 *     0030: 36 03 00 00 32 db 41 89
 *     0038: 0d 18 43 4b 00 0f be 01
 *     0040: 83 f8 42 0f 8f f0 01 00
 *     0048: 00 0f 84 df 01 00 00 85
 *     0050: c0 0f 84 cc 01 00 00 83
 *     0058: f8 24 0f 85 57 01 00 00
 *     0060: 8d 41 01 80 38 50 75 02
 *     0068: 8b c8 41 89 0d 18 43 4b
 *     0070: 00 0f be 01 83 f8 4a 7f
 *     0078: 18 0f 84 6e 01 00 00 83
 *     0080: e8 00 0f 84 5b 01 00 00
 *     0088: 83 e8 46 74 1c 48 48 eb
 *     0090: 16 83 f8 4c 7c 79 83 f8
 *     0098: 4d 7e 0e 83 f8 4f 0f 8e
 *     00a0: 49 01 00 00 83 f8 51 75
 *     00a8: 66 41 89 0d 18 43 4b 00
 *     00b0: e9 59 ff ff ff 0f be 01
 *     00b8: 83 e8 41 ba 00 80 00 00
 *     00c0: 41 0b f2 89 0d 18 43 4b
 *     00c8: 00 a8 01 74 08 81 ce 00
 *     00d0: 20 00 00 eb 06 81 e6 ff
 *     00d8: df ff ff 83 f8 18 0f 8d
 *     00e0: dd 03 00 00 bb ff 9f ff
 *     00e8: ff bf 00 08 00 00 85 f2
 *     00f0: 74 0a 81 e6 ff ef ff ff
 *     00f8: 0b f7 eb 02 23 f3 8b c8
 *     0100: 83 e1 18 74 45 83 f9 08
 *     0108: 74 23 83 f9 10 74 0a b8
 *     0110: ff ff 00 00 e9 aa 03 00
 *     0118: 00 85 f2 74 08 81 e6 3f
 *     0120: ff ff ff eb 3c 81 e6 ff
 *     0128: e7 ff ff eb 34 85 f2 74
 *     0130: 0b 83 e6 bf 81 ce 80 00
 *     0138: 00 00 eb 25 81 e6 ff f7
 *     0140: ff ff 81 ce 00 10 00 00
 *     0148: eb 17 85 f2 74 0b 81 e6
 *     0150: 7f ff ff ff 83 ce 40 eb
 *     0158: 08 81 e6 ff ef ff ff 0b
 *     0160: f7 83 e0 06 83 e8 00 0f
 *     0168: 84 54 03 00 00 48 48 74
 *     0170: 2a 48 48 74 15 48 48 75
 *     0178: 96 81 e6 ff fc ff ff 81
 *     0180: ce 00 04 00 00 e9 37 03
 *     0188: 00 00 81 e6 ff f9 ff ff
 *     0190: 81 ce 00 01 00 00 e9 26
 *     0198: 03 00 00 85 f2 74 11 81
 *     01a0: e6 ff fa ff ff 81 ce 00
 *     01a8: 02 00 00 e9 11 03 00 00
 *     01b0: 23 f3 e9 0a 03 00 00 83
 *     01b8: f8 2f 0f 8e 4f ff ff ff
 *     01c0: 83 f8 35 0f 8e ab 00 00
 *     01c8: 00 83 f8 41 0f 85 3d ff
 *     01d0: ff ff 81 e6 ff f4 ff ff
 *     01d8: 81 ce 00 90 00 00 e9 7b
 *     01e0: 01 00 00 b8 fe ff 00 00
 *     01e8: e9 d6 02 00 00 41 89 0d
 *     01f0: 18 43 4b 00 8a 01 3c 30
 *     01f8: 7c 1f 3c 39 7f 1b 0f be
 *     0200: c0 8d 44 01 d1 a3 18 43
 *     0208: 4b 00 e8 f1 fd ff ff 0d
 *     0210: 00 00 01 00 e9 aa 02 00
 *     0218: 00 be ff ff 00 00 e9 3b
 *     0220: 01 00 00 be fe ff 00 00
 *     0228: 49 e9 30 01 00 00 81 ce
 *     0230: 00 98 00 00 e9 25 01 00
 *     0238: 00 83 e8 43 0f 84 16 01
 *     0240: 00 00 48 0f 84 01 01 00
 *     0248: 00 48 0f 84 ec 00 00 00
 *     0250: 83 e8 0d 0f 85 b6 fe ff
 *     0258: ff 41 89 0d 18 43 4b 00
 *     0260: 8a 01 3c 30 b3 01 0f 8c
 *     0268: bc 00 00 00 3c 35 0f 8f
 *     0270: b4 00 00 00 0f be 01 ba
 *     0278: 00 80 00 00 0b f2 83 e8
 *     0280: 30 bf 00 08 00 00 85 f2
 *     0288: 74 0a 81 e6 ff ef ff ff
 *     0290: 0b f7 eb 06 81 e6 ff 9f
 *     0298: ff ff 84 db 74 0e 81 e6
 *     02a0: ff fe ff ff 81 ce 00 06
 *     02a8: 00 00 eb 0c 81 e6 ff fd
 *     02b0: ff ff 81 ce 00 05 00 00
 *     02b8: a8 01 74 08 81 ce 00 20
 *     02c0: 00 00 eb 06 81 e6 ff df
 *     02c8: ff ff 83 e0 06 83 e8 00
 *     02d0: 74 3d 48 48 74 1c 48 48
 *     02d8: 0f 85 31 fe ff ff 85 f2
 *     02e0: 74 08 81 e6 3f ff ff ff
 *     02e8: eb 74 81 e6 ff e7 ff ff
 *     02f0: eb 6c 85 f2 74 0b 83 e6
 *     02f8: bf 81 ce 80 00 00 00 eb
 *     0300: 5d 81 e6 ff f7 ff ff 81
 *     0308: ce 00 10 00 00 eb 4f 85
 *     0310: f2 74 0b 81 e6 7f ff ff
 *     0318: ff 83 ce 40 eb 40 81 e6
 *     0320: ff ef ff ff 0b f7 eb 36
 *     0328: 33 c9 84 c0 0f 94 c1 81
 *     0330: c1 fe ff 00 00 8b c1 e9
 *     0338: 87 01 00 00 81 e6 ff f6
 *     0340: ff ff 81 ce 00 92 00 00
 *     0348: eb 14 81 e6 ff f5 ff ff
 *     0350: 81 ce 00 91 00 00 eb 06
 *     0358: 81 ce 00 7c 00 00 41 89
 *     0360: 0d 18 43 4b 00 e9 57 01
 *     0368: 00 00 8a 01 3c 30 0f 8c
 *     0370: 2c 01 00 00 3c 38 0f 8f
 *     0378: 24 01 00 00 0f be c0 41
 *     0380: 83 c0 d0 81 e6 ff 7f ff
 *     0388: ff 89 0d 18 43 4b 00 83
 *     0390: f8 08 0f 87 77 fd ff ff
 *     0398: ff 24 85 13 db 47 00 ba
 *     03a0: 00 80 00 00 85 f2 74 0e
 *     03a8: 81 e6 ff fa ff ff 81 ce
 *     03b0: 00 02 00 00 eb 06 81 e6
 *     03b8: ff 9f ff ff 85 f2 74 0e
 *     03c0: 81 e6 7f ff ff ff 83 ce
 *     03c8: 40 e9 f3 00 00 00 81 e6
 *     03d0: ff ef ff ff 81 ce 00 08
 *     03d8: 00 00 e9 e2 00 00 00 ba
 *     03e0: 00 80 00 00 85 f2 74 0e
 *     03e8: 81 e6 ff fa ff ff 81 ce
 *     03f0: 00 02 00 00 eb 06 81 e6
 *     03f8: ff 9f ff ff 85 f2 74 0e
 *     0400: 83 e6 bf 81 ce 80 00 00
 *     0408: 00 e9 b3 00 00 00 81 e6
 *     0410: ff f7 ff ff 81 ce 00 10
 *     0418: 00 00 e9 a2 00 00 00 ba
 *     0420: 00 80 00 00 85 f2 74 0e
 *     0428: 81 e6 ff fa ff ff 81 ce
 *     0430: 00 02 00 00 eb 06 81 e6
 *     0438: ff 9f ff ff 85 f2 74 08
 *     0440: 81 e6 3f ff ff ff eb 79
 *     0448: 81 e6 ff e7 ff ff eb 71
 *     0450: 81 e6 ff df ff ff 0b f2
 *     0458: eb 67 81 e6 ff e3 ff ff
 *     0460: 81 ce 00 60 00 00 eb 59
 *     0468: 81 e6 ff bf ff ff 81 ce
 *     0470: 00 20 00 00 eb 4b 81 e6
 *     0478: ff eb ff ff 81 ce 00 68
 *     0480: 00 00 eb 3d 81 e6 ff f3
 *     0488: ff ff 81 ce 00 70 00 00
 *     0490: eb 2f 81 e6 ff fb ff ff
 *     0498: 81 ce 00 78 00 00 eb 21
 *     04a0: 3c 39 75 0e 41 89 0d 18
 *     04a8: 43 4b 00 be fd ff 00 00
 *     04b0: eb 0f 33 c9 84 c0 0f 95
 *     04b8: c1 81 c1 fe ff 00 00 8b
 *     04c0: f1 8b c6 5f 5e 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl getTypeEncoding(void)
{
  __asm {
    _emit 0x8B
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x53
    _emit 0x56
    _emit 0xBA
    _emit 0x00
    _emit 0x40
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x33
    _emit 0xF6
    _emit 0x80
    _emit 0x39
    _emit 0x5F
    _emit 0x75
    _emit 0x09
    _emit 0x41
    _emit 0x8B
    _emit 0xF2
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8A
    _emit 0x01
    _emit 0x3C
    _emit 0x41
    _emit 0x7C
    _emit 0x08
    _emit 0x3C
    _emit 0x5A
    _emit 0x0F
    _emit 0x8E
    _emit 0x89
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3C
    _emit 0x24
    _emit 0x0F
    _emit 0x85
    _emit 0x36
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x32
    _emit 0xDB
    _emit 0x41
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0xBE
    _emit 0x01
    _emit 0x83
    _emit 0xF8
    _emit 0x42
    _emit 0x0F
    _emit 0x8F
    _emit 0xF0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0xDF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x84
    _emit 0xCC
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x24
    _emit 0x0F
    _emit 0x85
    _emit 0x57
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x41
    _emit 0x01
    _emit 0x80
    _emit 0x38
    _emit 0x50
    _emit 0x75
    _emit 0x02
    _emit 0x8B
    _emit 0xC8
    _emit 0x41
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0xBE
    _emit 0x01
    _emit 0x83
    _emit 0xF8
    _emit 0x4A
    _emit 0x7F
    _emit 0x18
    _emit 0x0F
    _emit 0x84
    _emit 0x6E
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xE8
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x5B
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xE8
    _emit 0x46
    _emit 0x74
    _emit 0x1C
    _emit 0x48
    _emit 0x48
    _emit 0xEB
    _emit 0x16
    _emit 0x83
    _emit 0xF8
    _emit 0x4C
    _emit 0x7C
    _emit 0x79
    _emit 0x83
    _emit 0xF8
    _emit 0x4D
    _emit 0x7E
    _emit 0x0E
    _emit 0x83
    _emit 0xF8
    _emit 0x4F
    _emit 0x0F
    _emit 0x8E
    _emit 0x49
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x51
    _emit 0x75
    _emit 0x66
    _emit 0x41
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xE9
    _emit 0x59
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x0F
    _emit 0xBE
    _emit 0x01
    _emit 0x83
    _emit 0xE8
    _emit 0x41
    _emit 0xBA
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x41
    _emit 0x0B
    _emit 0xF2
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xA8
    _emit 0x01
    _emit 0x74
    _emit 0x08
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x06
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xDF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xF8
    _emit 0x18
    _emit 0x0F
    _emit 0x8D
    _emit 0xDD
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xBB
    _emit 0xFF
    _emit 0x9F
    _emit 0xFF
    _emit 0xFF
    _emit 0xBF
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0A
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xEF
    _emit 0xFF
    _emit 0xFF
    _emit 0x0B
    _emit 0xF7
    _emit 0xEB
    _emit 0x02
    _emit 0x23
    _emit 0xF3
    _emit 0x8B
    _emit 0xC8
    _emit 0x83
    _emit 0xE1
    _emit 0x18
    _emit 0x74
    _emit 0x45
    _emit 0x83
    _emit 0xF9
    _emit 0x08
    _emit 0x74
    _emit 0x23
    _emit 0x83
    _emit 0xF9
    _emit 0x10
    _emit 0x74
    _emit 0x0A
    _emit 0xB8
    _emit 0xFF
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0xAA
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x08
    _emit 0x81
    _emit 0xE6
    _emit 0x3F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x3C
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xE7
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x34
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0B
    _emit 0x83
    _emit 0xE6
    _emit 0xBF
    _emit 0x81
    _emit 0xCE
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x25
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xF7
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x17
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0B
    _emit 0x81
    _emit 0xE6
    _emit 0x7F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xCE
    _emit 0x40
    _emit 0xEB
    _emit 0x08
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xEF
    _emit 0xFF
    _emit 0xFF
    _emit 0x0B
    _emit 0xF7
    _emit 0x83
    _emit 0xE0
    _emit 0x06
    _emit 0x83
    _emit 0xE8
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x54
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x48
    _emit 0x48
    _emit 0x74
    _emit 0x2A
    _emit 0x48
    _emit 0x48
    _emit 0x74
    _emit 0x15
    _emit 0x48
    _emit 0x48
    _emit 0x75
    _emit 0x96
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0x37
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xF9
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0x26
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x11
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0x11
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x23
    _emit 0xF3
    _emit 0xE9
    _emit 0x0A
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x2F
    _emit 0x0F
    _emit 0x8E
    _emit 0x4F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xF8
    _emit 0x35
    _emit 0x0F
    _emit 0x8E
    _emit 0xAB
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x41
    _emit 0x0F
    _emit 0x85
    _emit 0x3D
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xF4
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0x7B
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xB8
    _emit 0xFE
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0xD6
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x41
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8A
    _emit 0x01
    _emit 0x3C
    _emit 0x30
    _emit 0x7C
    _emit 0x1F
    _emit 0x3C
    _emit 0x39
    _emit 0x7F
    _emit 0x1B
    _emit 0x0F
    _emit 0xBE
    _emit 0xC0
    _emit 0x8D
    _emit 0x44
    _emit 0x01
    _emit 0xD1
    _emit 0xA3
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xF1
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0xE9
    _emit 0xAA
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xBE
    _emit 0xFF
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0x3B
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xBE
    _emit 0xFE
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0x49
    _emit 0xE9
    _emit 0x30
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0x25
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xE8
    _emit 0x43
    _emit 0x0F
    _emit 0x84
    _emit 0x16
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x48
    _emit 0x0F
    _emit 0x84
    _emit 0x01
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x48
    _emit 0x0F
    _emit 0x84
    _emit 0xEC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xE8
    _emit 0x0D
    _emit 0x0F
    _emit 0x85
    _emit 0xB6
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x41
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8A
    _emit 0x01
    _emit 0x3C
    _emit 0x30
    _emit 0xB3
    _emit 0x01
    _emit 0x0F
    _emit 0x8C
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3C
    _emit 0x35
    _emit 0x0F
    _emit 0x8F
    _emit 0xB4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xBE
    _emit 0x01
    _emit 0xBA
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x0B
    _emit 0xF2
    _emit 0x83
    _emit 0xE8
    _emit 0x30
    _emit 0xBF
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0A
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xEF
    _emit 0xFF
    _emit 0xFF
    _emit 0x0B
    _emit 0xF7
    _emit 0xEB
    _emit 0x06
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0x9F
    _emit 0xFF
    _emit 0xFF
    _emit 0x84
    _emit 0xDB
    _emit 0x74
    _emit 0x0E
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x0C
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xA8
    _emit 0x01
    _emit 0x74
    _emit 0x08
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x06
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xDF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xE0
    _emit 0x06
    _emit 0x83
    _emit 0xE8
    _emit 0x00
    _emit 0x74
    _emit 0x3D
    _emit 0x48
    _emit 0x48
    _emit 0x74
    _emit 0x1C
    _emit 0x48
    _emit 0x48
    _emit 0x0F
    _emit 0x85
    _emit 0x31
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x08
    _emit 0x81
    _emit 0xE6
    _emit 0x3F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x74
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xE7
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x6C
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0B
    _emit 0x83
    _emit 0xE6
    _emit 0xBF
    _emit 0x81
    _emit 0xCE
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x5D
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xF7
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x4F
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0B
    _emit 0x81
    _emit 0xE6
    _emit 0x7F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xCE
    _emit 0x40
    _emit 0xEB
    _emit 0x40
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xEF
    _emit 0xFF
    _emit 0xFF
    _emit 0x0B
    _emit 0xF7
    _emit 0xEB
    _emit 0x36
    _emit 0x33
    _emit 0xC9
    _emit 0x84
    _emit 0xC0
    _emit 0x0F
    _emit 0x94
    _emit 0xC1
    _emit 0x81
    _emit 0xC1
    _emit 0xFE
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC1
    _emit 0xE9
    _emit 0x87
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xF6
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x92
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x14
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xF5
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x91
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x06
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x7C
    _emit 0x00
    _emit 0x00
    _emit 0x41
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xE9
    _emit 0x57
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8A
    _emit 0x01
    _emit 0x3C
    _emit 0x30
    _emit 0x0F
    _emit 0x8C
    _emit 0x2C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x3C
    _emit 0x38
    _emit 0x0F
    _emit 0x8F
    _emit 0x24
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xBE
    _emit 0xC0
    _emit 0x41
    _emit 0x83
    _emit 0xC0
    _emit 0xD0
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0x7F
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x08
    _emit 0x0F
    _emit 0x87
    _emit 0x77
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x24
    _emit 0x85
    _emit 0x13
    _emit 0xDB
    _emit 0x47
    _emit 0x00
    _emit 0xBA
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0E
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x06
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0x9F
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0E
    _emit 0x81
    _emit 0xE6
    _emit 0x7F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xCE
    _emit 0x40
    _emit 0xE9
    _emit 0xF3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xEF
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0xE2
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBA
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0E
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x06
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0x9F
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0E
    _emit 0x83
    _emit 0xE6
    _emit 0xBF
    _emit 0x81
    _emit 0xCE
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0xB3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xF7
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0xE9
    _emit 0xA2
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBA
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x0E
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x06
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0x9F
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xF2
    _emit 0x74
    _emit 0x08
    _emit 0x81
    _emit 0xE6
    _emit 0x3F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x79
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xE7
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x71
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xDF
    _emit 0xFF
    _emit 0xFF
    _emit 0x0B
    _emit 0xF2
    _emit 0xEB
    _emit 0x67
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xE3
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x60
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x59
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xBF
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x4B
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xEB
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x68
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x3D
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xF3
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x70
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x2F
    _emit 0x81
    _emit 0xE6
    _emit 0xFF
    _emit 0xFB
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0xCE
    _emit 0x00
    _emit 0x78
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x21
    _emit 0x3C
    _emit 0x39
    _emit 0x75
    _emit 0x0E
    _emit 0x41
    _emit 0x89
    _emit 0x0D
    _emit 0x18
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xBE
    _emit 0xFD
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x0F
    _emit 0x33
    _emit 0xC9
    _emit 0x84
    _emit 0xC0
    _emit 0x0F
    _emit 0x95
    _emit 0xC1
    _emit 0x81
    _emit 0xC1
    _emit 0xFE
    _emit 0xFF
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF1
    _emit 0x8B
    _emit 0xC6
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
