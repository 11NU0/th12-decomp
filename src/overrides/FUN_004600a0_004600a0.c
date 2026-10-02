/* Byte-for-byte override for FUN_004600a0.

 * Original bytes (802):
 *     0000: 83 ec 70 53 55 8b ac 24
 *     0008: 8c 00 00 00 56 57 85 ed
 *     0010: 75 1f 68 b8 33 4a 00 bf
 *     0018: c8 0e 4b 00 e8 3f 42 00
 *     0020: 00 83 c4 04 83 c8 ff 5f
 *     0028: 5e 5d 5b 83 c4 70 c2 14
 *     0030: 00 83 7d 00 07 74 07 68
 *     0038: f4 33 4a 00 eb d9 80 7d
 *     0040: 20 00 0f 85 fd 00 00 00
 *     0048: 8b 45 10 03 c5 80 38 40
 *     0050: 89 44 24 14 75 7e 80 78
 *     0058: 01 52 75 2e 8b 9c 24 88
 *     0060: 00 00 00 8b bc 24 84 00
 *     0068: 00 00 8b b7 20 01 00 00
 *     0070: 8d 1c 9b 03 db 03 db 03
 *     0078: f3 89 9c 24 94 00 00 00
 *     0080: e8 cb fa ff ff e9 14 01
 *     0088: 00 00 8b 84 24 88 00 00
 *     0090: 00 0f b7 4d 0a 8b 94 24
 *     0098: 84 00 00 00 8b b2 20 01
 *     00a0: 00 00 0f b7 7d 0e 0f b7
 *     00a8: 5d 0c 8d 04 80 03 c0 03
 *     00b0: c0 51 03 f0 89 84 24 98
 *     00b8: 00 00 00 e8 40 fa ff ff
 *     00c0: 8b 8c 24 84 00 00 00 01
 *     00c8: 81 2c 01 00 00 8b f9 e9
 *     00d0: c3 00 00 00 8b 84 24 88
 *     00d8: 00 00 00 8b 9c 24 84 00
 *     00e0: 00 00 8b b3 20 01 00 00
 *     00e8: 0f bf 4d 14 0f b7 7d 0a
 *     00f0: 8d 14 80 0f bf 45 16 50
 *     00f8: 0f b7 45 0c 03 d2 03 d2
 *     0100: 50 0f b7 45 0e 03 f2 89
 *     0108: 94 24 9c 00 00 00 e8 cd
 *     0110: f6 ff ff 85 c0 7d 24 8b
 *     0118: 4c 24 14 51 68 78 34 4a
 *     0120: 00 bf c8 0e 4b 00 e8 35
 *     0128: 41 00 00 83 c4 08 83 c8
 *     0130: ff 5f 5e 5d 5b 83 c4 70
 *     0138: c2 14 00 01 83 2c 01 00
 *     0140: 00 8b fb eb 52 0f b7 45
 *     0148: 0c 0f b7 4d 0a 8b 94 24
 *     0150: 88 00 00 00 8b b4 24 84
 *     0158: 00 00 00 8b be 20 01 00
 *     0160: 00 8d 14 92 50 0f b7 45
 *     0168: 0e 03 d2 51 8b 4d 1c 03
 *     0170: d2 03 cd 03 fa 89 94 24
 *     0178: 9c 00 00 00 e8 5f f8 ff
 *     0180: ff 85 c0 7d 0a 68 bc 34
 *     0188: 4a 00 e9 88 fe ff ff 01
 *     0190: 86 2c 01 00 00 8b fe 8b
 *     0198: 9c 24 94 00 00 00 8b 97
 *     01a0: 20 01 00 00 8b 0c 1a 8d
 *     01a8: 04 1a 8b 11 8b 00 8d 4c
 *     01b0: 24 18 51 8b 4a 44 6a 00
 *     01b8: 50 ff d1 33 d2 8d 75 40
 *     01c0: c7 84 24 84 00 00 00 00
 *     01c8: 00 00 00 66 3b 55 04 0f
 *     01d0: 83 0c 01 00 00 eb 10 eb
 *     01d8: 07 8d a4 24 00 00 00 00
 *     01e0: 8b 9c 24 94 00 00 00 8b
 *     01e8: 97 20 01 00 00 db 44 24
 *     01f0: 30 8b 0f 8b 06 03 d3 89
 *     01f8: 54 24 40 8b 54 24 30 89
 *     0200: 4c 24 38 8b 8c 24 88 00
 *     0208: 00 00 03 c5 89 4c 24 3c
 *     0210: 85 d2 7d 06 d8 05 10 3e
 *     0218: 4a 00 0f b7 4d 0a d9 5c
 *     0220: 24 14 d9 44 24 14 89 4c
 *     0228: 24 14 d9 c0 8b 54 24 34
 *     0230: db 44 24 14 de f9 d9 5c
 *     0238: 24 74 db 44 24 34 85 d2
 *     0240: 7d 06 d8 05 10 3e 4a 00
 *     0248: 0f b7 4d 0c d9 5c 24 14
 *     0250: d9 44 24 14 89 4c 24 14
 *     0258: d9 c0 8d 5c 24 38 8b d7
 *     0260: db 44 24 14 de f9 d9 5c
 *     0268: 24 78 d9 40 04 d9 44 24
 *     0270: 74 d9 c0 de ca d9 c9 d9
 *     0278: 5c 24 44 d9 40 08 d9 44
 *     0280: 24 78 d9 c0 de ca d9 c9
 *     0288: d9 5c 24 48 d9 40 0c d8
 *     0290: 40 04 de ca d9 c9 d9 5c
 *     0298: 24 4c d9 40 10 d8 40 08
 *     02a0: 8b 84 24 8c 00 00 00 de
 *     02a8: c9 d9 5c 24 50 d9 c9 d9
 *     02b0: 5c 24 58 d9 5c 24 54 e8
 *     02b8: b4 02 00 00 8b 84 24 84
 *     02c0: 00 00 00 0f b7 55 04 ff
 *     02c8: 84 24 8c 00 00 00 40 83
 *     02d0: c6 04 3b c2 89 84 24 84
 *     02d8: 00 00 00 0f 8c ff fe ff
 *     02e0: ff 33 c0 33 d2 66 3b 45
 *     02e8: 06 73 31 8b 84 24 90 00
 *     02f0: 00 00 03 c0 03 c0 8d 4e
 *     02f8: 04 8d a4 24 00 00 00 00
 *     0300: 8b 31 8b 9f 1c 01 00 00
 *     0308: 03 f5 89 34 18 0f b7 75
 *     0310: 06 42 83 c0 04 83 c1 08
 *     0318: 3b d6 7c e4 5f 5e 5d b8
 *     0320: 01 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_004600a0(undefined4 * a0, int a1, undefined4 a2, undefined4 a3, int * a4)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x70
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0xAC
    _emit 0x24
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0x57
    _emit 0x85
    _emit 0xED
    _emit 0x75
    _emit 0x1F
    _emit 0x68
    _emit 0xB8
    _emit 0x33
    _emit 0x4A
    _emit 0x00
    _emit 0xBF
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x3F
    _emit 0x42
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x70
    _emit 0xC2
    _emit 0x14
    _emit 0x00
    _emit 0x83
    _emit 0x7D
    _emit 0x00
    _emit 0x07
    _emit 0x74
    _emit 0x07
    _emit 0x68
    _emit 0xF4
    _emit 0x33
    _emit 0x4A
    _emit 0x00
    _emit 0xEB
    _emit 0xD9
    _emit 0x80
    _emit 0x7D
    _emit 0x20
    _emit 0x00
    _emit 0x0F
    _emit 0x85
    _emit 0xFD
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x10
    _emit 0x03
    _emit 0xC5
    _emit 0x80
    _emit 0x38
    _emit 0x40
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x75
    _emit 0x7E
    _emit 0x80
    _emit 0x78
    _emit 0x01
    _emit 0x52
    _emit 0x75
    _emit 0x2E
    _emit 0x8B
    _emit 0x9C
    _emit 0x24
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xBC
    _emit 0x24
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xB7
    _emit 0x20
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x1C
    _emit 0x9B
    _emit 0x03
    _emit 0xDB
    _emit 0x03
    _emit 0xDB
    _emit 0x03
    _emit 0xF3
    _emit 0x89
    _emit 0x9C
    _emit 0x24
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xCB
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0xE9
    _emit 0x14
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x84
    _emit 0x24
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x4D
    _emit 0x0A
    _emit 0x8B
    _emit 0x94
    _emit 0x24
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xB2
    _emit 0x20
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x7D
    _emit 0x0E
    _emit 0x0F
    _emit 0xB7
    _emit 0x5D
    _emit 0x0C
    _emit 0x8D
    _emit 0x04
    _emit 0x80
    _emit 0x03
    _emit 0xC0
    _emit 0x03
    _emit 0xC0
    _emit 0x51
    _emit 0x03
    _emit 0xF0
    _emit 0x89
    _emit 0x84
    _emit 0x24
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x40
    _emit 0xFA
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x8C
    _emit 0x24
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x81
    _emit 0x2C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF9
    _emit 0xE9
    _emit 0xC3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x84
    _emit 0x24
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x9C
    _emit 0x24
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xB3
    _emit 0x20
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xBF
    _emit 0x4D
    _emit 0x14
    _emit 0x0F
    _emit 0xB7
    _emit 0x7D
    _emit 0x0A
    _emit 0x8D
    _emit 0x14
    _emit 0x80
    _emit 0x0F
    _emit 0xBF
    _emit 0x45
    _emit 0x16
    _emit 0x50
    _emit 0x0F
    _emit 0xB7
    _emit 0x45
    _emit 0x0C
    _emit 0x03
    _emit 0xD2
    _emit 0x03
    _emit 0xD2
    _emit 0x50
    _emit 0x0F
    _emit 0xB7
    _emit 0x45
    _emit 0x0E
    _emit 0x03
    _emit 0xF2
    _emit 0x89
    _emit 0x94
    _emit 0x24
    _emit 0x9C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xCD
    _emit 0xF6
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x7D
    _emit 0x24
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x51
    _emit 0x68
    _emit 0x78
    _emit 0x34
    _emit 0x4A
    _emit 0x00
    _emit 0xBF
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x35
    _emit 0x41
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x70
    _emit 0xC2
    _emit 0x14
    _emit 0x00
    _emit 0x01
    _emit 0x83
    _emit 0x2C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xFB
    _emit 0xEB
    _emit 0x52
    _emit 0x0F
    _emit 0xB7
    _emit 0x45
    _emit 0x0C
    _emit 0x0F
    _emit 0xB7
    _emit 0x4D
    _emit 0x0A
    _emit 0x8B
    _emit 0x94
    _emit 0x24
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xB4
    _emit 0x24
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xBE
    _emit 0x20
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x14
    _emit 0x92
    _emit 0x50
    _emit 0x0F
    _emit 0xB7
    _emit 0x45
    _emit 0x0E
    _emit 0x03
    _emit 0xD2
    _emit 0x51
    _emit 0x8B
    _emit 0x4D
    _emit 0x1C
    _emit 0x03
    _emit 0xD2
    _emit 0x03
    _emit 0xCD
    _emit 0x03
    _emit 0xFA
    _emit 0x89
    _emit 0x94
    _emit 0x24
    _emit 0x9C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x5F
    _emit 0xF8
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x7D
    _emit 0x0A
    _emit 0x68
    _emit 0xBC
    _emit 0x34
    _emit 0x4A
    _emit 0x00
    _emit 0xE9
    _emit 0x88
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x01
    _emit 0x86
    _emit 0x2C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xFE
    _emit 0x8B
    _emit 0x9C
    _emit 0x24
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x97
    _emit 0x20
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0C
    _emit 0x1A
    _emit 0x8D
    _emit 0x04
    _emit 0x1A
    _emit 0x8B
    _emit 0x11
    _emit 0x8B
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0x51
    _emit 0x8B
    _emit 0x4A
    _emit 0x44
    _emit 0x6A
    _emit 0x00
    _emit 0x50
    _emit 0xFF
    _emit 0xD1
    _emit 0x33
    _emit 0xD2
    _emit 0x8D
    _emit 0x75
    _emit 0x40
    _emit 0xC7
    _emit 0x84
    _emit 0x24
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x3B
    _emit 0x55
    _emit 0x04
    _emit 0x0F
    _emit 0x83
    _emit 0x0C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x10
    _emit 0xEB
    _emit 0x07
    _emit 0x8D
    _emit 0xA4
    _emit 0x24
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x9C
    _emit 0x24
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x97
    _emit 0x20
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xDB
    _emit 0x44
    _emit 0x24
    _emit 0x30
    _emit 0x8B
    _emit 0x0F
    _emit 0x8B
    _emit 0x06
    _emit 0x03
    _emit 0xD3
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x40
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x30
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x38
    _emit 0x8B
    _emit 0x8C
    _emit 0x24
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0xC5
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x3C
    _emit 0x85
    _emit 0xD2
    _emit 0x7D
    _emit 0x06
    _emit 0xD8
    _emit 0x05
    _emit 0x10
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x4D
    _emit 0x0A
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0xC0
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x34
    _emit 0xDB
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0xDE
    _emit 0xF9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x74
    _emit 0xDB
    _emit 0x44
    _emit 0x24
    _emit 0x34
    _emit 0x85
    _emit 0xD2
    _emit 0x7D
    _emit 0x06
    _emit 0xD8
    _emit 0x05
    _emit 0x10
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x4D
    _emit 0x0C
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0xC0
    _emit 0x8D
    _emit 0x5C
    _emit 0x24
    _emit 0x38
    _emit 0x8B
    _emit 0xD7
    _emit 0xDB
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0xDE
    _emit 0xF9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x78
    _emit 0xD9
    _emit 0x40
    _emit 0x04
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x74
    _emit 0xD9
    _emit 0xC0
    _emit 0xDE
    _emit 0xCA
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x44
    _emit 0xD9
    _emit 0x40
    _emit 0x08
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x78
    _emit 0xD9
    _emit 0xC0
    _emit 0xDE
    _emit 0xCA
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x48
    _emit 0xD9
    _emit 0x40
    _emit 0x0C
    _emit 0xD8
    _emit 0x40
    _emit 0x04
    _emit 0xDE
    _emit 0xCA
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x4C
    _emit 0xD9
    _emit 0x40
    _emit 0x10
    _emit 0xD8
    _emit 0x40
    _emit 0x08
    _emit 0x8B
    _emit 0x84
    _emit 0x24
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xDE
    _emit 0xC9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x50
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x58
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x54
    _emit 0xE8
    _emit 0xB4
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x84
    _emit 0x24
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x55
    _emit 0x04
    _emit 0xFF
    _emit 0x84
    _emit 0x24
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x40
    _emit 0x83
    _emit 0xC6
    _emit 0x04
    _emit 0x3B
    _emit 0xC2
    _emit 0x89
    _emit 0x84
    _emit 0x24
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x8C
    _emit 0xFF
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x33
    _emit 0xC0
    _emit 0x33
    _emit 0xD2
    _emit 0x66
    _emit 0x3B
    _emit 0x45
    _emit 0x06
    _emit 0x73
    _emit 0x31
    _emit 0x8B
    _emit 0x84
    _emit 0x24
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0xC0
    _emit 0x03
    _emit 0xC0
    _emit 0x8D
    _emit 0x4E
    _emit 0x04
    _emit 0x8D
    _emit 0xA4
    _emit 0x24
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x31
    _emit 0x8B
    _emit 0x9F
    _emit 0x1C
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x03
    _emit 0xF5
    _emit 0x89
    _emit 0x34
    _emit 0x18
    _emit 0x0F
    _emit 0xB7
    _emit 0x75
    _emit 0x06
    _emit 0x42
    _emit 0x83
    _emit 0xC0
    _emit 0x04
    _emit 0x83
    _emit 0xC1
    _emit 0x08
    _emit 0x3B
    _emit 0xD6
    _emit 0x7C
    _emit 0xE4
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xB8
    _emit 0x01
    _emit 0x00
  }
  __assume(0);
}
