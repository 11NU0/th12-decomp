/* Byte-for-byte override for FUN_0044c3f0.

 * Original bytes (768):
 *     0000: 83 ec 24 53 56 8b 74 24
 *     0008: 34 8d 04 36 50 c6 44 24
 *     0010: 0f 80 33 db e8 41 0c 02
 *     0018: 00 83 c4 04 89 44 24 28
 *     0020: 85 c0 75 08 5e 5b 83 c4
 *     0028: 24 c2 0c 00 8b 4c 24 38
 *     0030: 55 57 8b 7c 24 38 8b e8
 *     0038: 89 19 e8 f1 04 00 00 33
 *     0040: c0 c7 44 24 18 01 00 00
 *     0048: 00 33 d2 eb 03 8d 49 00
 *     0050: 3b d6 7d 16 0f b6 0f 47
 *     0058: 42 83 f9 ff 74 0c 88 88
 *     0060: 51 c5 4c 00 40 83 f8 12
 *     0068: 7c e6 33 f6 33 d2 8b c8
 *     0070: 89 7c 24 14 89 4c 24 20
 *     0078: c7 05 48 c5 4c 00 01 00
 *     0080: 00 00 c7 05 4c 45 4b 00
 *     0088: 00 20 00 00 89 1d 54 45
 *     0090: 4b 00 89 1d 50 45 4b 00
 *     0098: 89 74 24 1c 89 54 24 28
 *     00a0: 85 c0 0f 8e 2f 02 00 00
 *     00a8: eb 0a 8d 9b 00 00 00 00
 *     00b0: 8b 54 24 28 3b f1 7e 06
 *     00b8: 89 4c 24 1c 8b f1 83 fe
 *     00c0: 02 8a 44 24 13 7f 4f 0f
 *     00c8: b6 d0 0b da d0 e8 be 01
 *     00d0: 00 00 00 88 44 24 13 75
 *     00d8: 0b 88 5d 00 45 33 db c6
 *     00e0: 44 24 13 80 8b 7c 24 18
 *     00e8: b8 80 00 00 00 8d 49 00
 *     00f0: 84 87 50 c5 4c 00 74 07
 *     00f8: 0f b6 4c 24 13 0b d9 d0
 *     0100: 6c 24 13 75 0b 88 5d 00
 *     0108: 45 33 db c6 44 24 13 80
 *     0110: d1 e8 75 dc eb 6e d0 e8
 *     0118: 75 0f 88 5d 00 c6 44 24
 *     0120: 13 80 8a 44 24 13 45 33
 *     0128: db b9 00 10 00 00 8b ff
 *     0130: 85 ca 74 05 0f b6 f8 0b
 *     0138: df d0 e8 75 0f 88 5d 00
 *     0140: c6 44 24 13 80 8a 44 24
 *     0148: 13 45 33 db d1 e9 75 e0
 *     0150: b9 08 00 00 00 8d 56 fd
 *     0158: 85 d1 74 05 0f b6 f8 0b
 *     0160: df d0 e8 88 44 24 13 75
 *     0168: 0f 88 5d 00 c6 44 24 13
 *     0170: 80 8a 44 24 13 45 33 db
 *     0178: d1 e9 75 dc 85 f6 0f 8e
 *     0180: 47 01 00 00 8b 44 24 14
 *     0188: 2b 44 24 38 89 74 24 2c
 *     0190: 89 44 24 24 eb 0a 8d a4
 *     0198: 24 00 00 00 00 8d 49 00
 *     01a0: 8b 7c 24 18 83 c7 12 81
 *     01a8: e7 ff 1f 00 00 8d 04 7f
 *     01b0: 03 c0 8b 8c 00 40 45 4b
 *     01b8: 00 03 c0 85 c9 0f 84 a3
 *     01c0: 00 00 00 8b 90 48 45 4b
 *     01c8: 00 85 d2 75 08 8b 90 44
 *     01d0: 45 4b 00 eb 0a 8b b0 44
 *     01d8: 45 4b 00 85 f6 75 43 8d
 *     01e0: 34 52 89 0c b5 40 45 4b
 *     01e8: 00 8b 88 40 45 4b 00 8d
 *     01f0: 0c 49 03 c9 03 c9 39 b9
 *     01f8: 48 45 4b 00 75 12 89 91
 *     0200: 48 45 4b 00 c7 80 40 45
 *     0208: 4b 00 00 00 00 00 eb 56
 *     0210: 89 91 44 45 4b 00 c7 80
 *     0218: 40 45 4b 00 00 00 00 00
 *     0220: eb 44 8d 04 76 83 3c 85
 *     0228: 48 45 4b 00 00 8d 04 85
 *     0230: 48 45 4b 00 74 20 eb 08
 *     0238: 8d a4 24 00 00 00 00 90
 *     0240: 8b 30 8d 04 76 83 3c 85
 *     0248: 48 45 4b 00 00 8d 04 85
 *     0250: 48 45 4b 00 75 ea 8b ce
 *     0258: e8 b3 04 00 00 8b d6 8b
 *     0260: c7 e8 4a 05 00 00 8b 54
 *     0268: 24 24 3b 54 24 3c be 01
 *     0270: 00 00 00 7d 16 8b 4c 24
 *     0278: 14 0f b6 01 01 74 24 24
 *     0280: 03 ce 89 4c 24 14 83 f8
 *     0288: ff 75 06 29 74 24 20 eb
 *     0290: 06 88 87 50 c5 4c 00 8b
 *     0298: 44 24 18 8d 50 01 81 e2
 *     02a0: ff 1f 00 00 83 7c 24 20
 *     02a8: 00 89 54 24 18 74 0e 8d
 *     02b0: 4c 24 28 51 e8 b7 02 00
 *     02b8: 00 89 44 24 1c 29 74 24
 *     02c0: 2c 0f 85 d9 fe ff ff 8b
 *     02c8: 74 24 1c 8b 4c 24 20 85
 *     02d0: c9 0f 8f d9 fd ff ff d0
 *     02d8: 6c 24 13 75 0b 88 5d 00
 *     02e0: 45 33 db c6 44 24 13 80
 *     02e8: b8 00 10 00 00 8d 49 00
 *     02f0: d0 6c 24 13 75 0b 88 5d
 *     02f8: 00 45 33 db c6 44 24 13
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0044c3f0(byte * a0, int a1, int * a2)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x24
    _emit 0x53
    _emit 0x56
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x34
    _emit 0x8D
    _emit 0x04
    _emit 0x36
    _emit 0x50
    _emit 0xC6
    _emit 0x44
    _emit 0x24
    _emit 0x0F
    _emit 0x80
    _emit 0x33
    _emit 0xDB
    _emit 0xE8
    _emit 0x41
    _emit 0x0C
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x28
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x08
    _emit 0x5E
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x24
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x38
    _emit 0x55
    _emit 0x57
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x38
    _emit 0x8B
    _emit 0xE8
    _emit 0x89
    _emit 0x19
    _emit 0xE8
    _emit 0xF1
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xD2
    _emit 0xEB
    _emit 0x03
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x3B
    _emit 0xD6
    _emit 0x7D
    _emit 0x16
    _emit 0x0F
    _emit 0xB6
    _emit 0x0F
    _emit 0x47
    _emit 0x42
    _emit 0x83
    _emit 0xF9
    _emit 0xFF
    _emit 0x74
    _emit 0x0C
    _emit 0x88
    _emit 0x88
    _emit 0x51
    _emit 0xC5
    _emit 0x4C
    _emit 0x00
    _emit 0x40
    _emit 0x83
    _emit 0xF8
    _emit 0x12
    _emit 0x7C
    _emit 0xE6
    _emit 0x33
    _emit 0xF6
    _emit 0x33
    _emit 0xD2
    _emit 0x8B
    _emit 0xC8
    _emit 0x89
    _emit 0x7C
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x20
    _emit 0xC7
    _emit 0x05
    _emit 0x48
    _emit 0xC5
    _emit 0x4C
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0x4C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x1D
    _emit 0x54
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x1D
    _emit 0x50
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x1C
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x28
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x8E
    _emit 0x2F
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x0A
    _emit 0x8D
    _emit 0x9B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x28
    _emit 0x3B
    _emit 0xF1
    _emit 0x7E
    _emit 0x06
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0xF1
    _emit 0x83
    _emit 0xFE
    _emit 0x02
    _emit 0x8A
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x7F
    _emit 0x4F
    _emit 0x0F
    _emit 0xB6
    _emit 0xD0
    _emit 0x0B
    _emit 0xDA
    _emit 0xD0
    _emit 0xE8
    _emit 0xBE
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x88
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x75
    _emit 0x0B
    _emit 0x88
    _emit 0x5D
    _emit 0x00
    _emit 0x45
    _emit 0x33
    _emit 0xDB
    _emit 0xC6
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x80
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x18
    _emit 0xB8
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0x84
    _emit 0x87
    _emit 0x50
    _emit 0xC5
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x07
    _emit 0x0F
    _emit 0xB6
    _emit 0x4C
    _emit 0x24
    _emit 0x13
    _emit 0x0B
    _emit 0xD9
    _emit 0xD0
    _emit 0x6C
    _emit 0x24
    _emit 0x13
    _emit 0x75
    _emit 0x0B
    _emit 0x88
    _emit 0x5D
    _emit 0x00
    _emit 0x45
    _emit 0x33
    _emit 0xDB
    _emit 0xC6
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x80
    _emit 0xD1
    _emit 0xE8
    _emit 0x75
    _emit 0xDC
    _emit 0xEB
    _emit 0x6E
    _emit 0xD0
    _emit 0xE8
    _emit 0x75
    _emit 0x0F
    _emit 0x88
    _emit 0x5D
    _emit 0x00
    _emit 0xC6
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x80
    _emit 0x8A
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x45
    _emit 0x33
    _emit 0xDB
    _emit 0xB9
    _emit 0x00
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xFF
    _emit 0x85
    _emit 0xCA
    _emit 0x74
    _emit 0x05
    _emit 0x0F
    _emit 0xB6
    _emit 0xF8
    _emit 0x0B
    _emit 0xDF
    _emit 0xD0
    _emit 0xE8
    _emit 0x75
    _emit 0x0F
    _emit 0x88
    _emit 0x5D
    _emit 0x00
    _emit 0xC6
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x80
    _emit 0x8A
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x45
    _emit 0x33
    _emit 0xDB
    _emit 0xD1
    _emit 0xE9
    _emit 0x75
    _emit 0xE0
    _emit 0xB9
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x56
    _emit 0xFD
    _emit 0x85
    _emit 0xD1
    _emit 0x74
    _emit 0x05
    _emit 0x0F
    _emit 0xB6
    _emit 0xF8
    _emit 0x0B
    _emit 0xDF
    _emit 0xD0
    _emit 0xE8
    _emit 0x88
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x75
    _emit 0x0F
    _emit 0x88
    _emit 0x5D
    _emit 0x00
    _emit 0xC6
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x80
    _emit 0x8A
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x45
    _emit 0x33
    _emit 0xDB
    _emit 0xD1
    _emit 0xE9
    _emit 0x75
    _emit 0xDC
    _emit 0x85
    _emit 0xF6
    _emit 0x0F
    _emit 0x8E
    _emit 0x47
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x2B
    _emit 0x44
    _emit 0x24
    _emit 0x38
    _emit 0x89
    _emit 0x74
    _emit 0x24
    _emit 0x2C
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x24
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
    _emit 0x7C
    _emit 0x24
    _emit 0x18
    _emit 0x83
    _emit 0xC7
    _emit 0x12
    _emit 0x81
    _emit 0xE7
    _emit 0xFF
    _emit 0x1F
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0x7F
    _emit 0x03
    _emit 0xC0
    _emit 0x8B
    _emit 0x8C
    _emit 0x00
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x03
    _emit 0xC0
    _emit 0x85
    _emit 0xC9
    _emit 0x0F
    _emit 0x84
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x90
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x85
    _emit 0xD2
    _emit 0x75
    _emit 0x08
    _emit 0x8B
    _emit 0x90
    _emit 0x44
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x0A
    _emit 0x8B
    _emit 0xB0
    _emit 0x44
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x43
    _emit 0x8D
    _emit 0x34
    _emit 0x52
    _emit 0x89
    _emit 0x0C
    _emit 0xB5
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x88
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x0C
    _emit 0x49
    _emit 0x03
    _emit 0xC9
    _emit 0x03
    _emit 0xC9
    _emit 0x39
    _emit 0xB9
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x12
    _emit 0x89
    _emit 0x91
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xC7
    _emit 0x80
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x56
    _emit 0x89
    _emit 0x91
    _emit 0x44
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xC7
    _emit 0x80
    _emit 0x40
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x44
    _emit 0x8D
    _emit 0x04
    _emit 0x76
    _emit 0x83
    _emit 0x3C
    _emit 0x85
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0x85
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x74
    _emit 0x20
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
    _emit 0x8B
    _emit 0x30
    _emit 0x8D
    _emit 0x04
    _emit 0x76
    _emit 0x83
    _emit 0x3C
    _emit 0x85
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x04
    _emit 0x85
    _emit 0x48
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0xEA
    _emit 0x8B
    _emit 0xCE
    _emit 0xE8
    _emit 0xB3
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xD6
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0x4A
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x24
    _emit 0x3B
    _emit 0x54
    _emit 0x24
    _emit 0x3C
    _emit 0xBE
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x7D
    _emit 0x16
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x0F
    _emit 0xB6
    _emit 0x01
    _emit 0x01
    _emit 0x74
    _emit 0x24
    _emit 0x24
    _emit 0x03
    _emit 0xCE
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x83
    _emit 0xF8
    _emit 0xFF
    _emit 0x75
    _emit 0x06
    _emit 0x29
    _emit 0x74
    _emit 0x24
    _emit 0x20
    _emit 0xEB
    _emit 0x06
    _emit 0x88
    _emit 0x87
    _emit 0x50
    _emit 0xC5
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x8D
    _emit 0x50
    _emit 0x01
    _emit 0x81
    _emit 0xE2
    _emit 0xFF
    _emit 0x1F
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x7C
    _emit 0x24
    _emit 0x20
    _emit 0x00
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x18
    _emit 0x74
    _emit 0x0E
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x28
    _emit 0x51
    _emit 0xE8
    _emit 0xB7
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x29
    _emit 0x74
    _emit 0x24
    _emit 0x2C
    _emit 0x0F
    _emit 0x85
    _emit 0xD9
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x20
    _emit 0x85
    _emit 0xC9
    _emit 0x0F
    _emit 0x8F
    _emit 0xD9
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0xD0
    _emit 0x6C
    _emit 0x24
    _emit 0x13
    _emit 0x75
    _emit 0x0B
    _emit 0x88
    _emit 0x5D
    _emit 0x00
    _emit 0x45
    _emit 0x33
    _emit 0xDB
    _emit 0xC6
    _emit 0x44
    _emit 0x24
    _emit 0x13
    _emit 0x80
    _emit 0xB8
    _emit 0x00
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x49
    _emit 0x00
    _emit 0xD0
    _emit 0x6C
    _emit 0x24
    _emit 0x13
    _emit 0x75
    _emit 0x0B
    _emit 0x88
    _emit 0x5D
    _emit 0x00
    _emit 0x45
    _emit 0x33
    _emit 0xDB
    _emit 0xC6
    _emit 0x44
    _emit 0x24
    _emit 0x13
  }
  __assume(0);
}
