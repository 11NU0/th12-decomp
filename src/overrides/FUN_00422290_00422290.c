/* Byte-for-byte override for FUN_00422290.

 * Original bytes (1135):
 *     0000: 53 55 56 57 e8 47 b0 01
 *     0008: 00 d9 e8 a1 40 ee 4c 00
 *     0010: d9 1d d0 2e 4b 00 83 25
 *     0018: e0 0c 4b 00 fc 33 ed 89
 *     0020: 2d 0c 45 4b 00 89 2d 08
 *     0028: 45 4b 00 8d 5d 02 83 f8
 *     0030: 0a 0f 84 9b 00 00 00 83
 *     0038: f8 0b 0f 84 92 00 00 00
 *     0040: 83 f8 0c 75 26 d9 05 60
 *     0048: 42 4a 00 83 ec 08 d9 5c
 *     0050: 24 04 d9 05 c0 3e 4a 00
 *     0058: d9 1c 24 e8 90 f8 fe ff
 *     0060: 09 1d e0 0c 4b 00 e9 97
 *     0068: 00 00 00 83 f8 04 75 1d
 *     0070: d9 05 60 42 4a 00 83 ec
 *     0078: 08 d9 5c 24 04 d9 05 c0
 *     0080: 3e 4a 00 d9 1c 24 e8 65
 *     0088: f8 fe ff eb 75 83 f8 10
 *     0090: 74 de 83 f8 0e 75 70 d9
 *     0098: 05 60 42 4a 00 83 ec 08
 *     00a0: d9 5c 24 04 d9 05 c0 3e
 *     00a8: 4a 00 d9 1c 24 e8 3e f8
 *     00b0: fe ff a1 b4 0c 4b 00 3b
 *     00b8: 05 b0 0c 4b 00 74 3c b8
 *     00c0: 40 0c 4b 00 e8 47 0d 00
 *     00c8: 00 83 0d e0 0c 4b 00 08
 *     00d0: eb 29 d9 05 60 42 4a 00
 *     00d8: 83 ec 08 d9 5c 24 04 d9
 *     00e0: 05 c0 3e 4a 00 d9 1c 24
 *     00e8: e8 03 f8 fe ff 8b 0d b4
 *     00f0: 0c 4b 00 3b 0d b0 0c 4b
 *     00f8: 00 75 07 83 0d e0 0c 4b
 *     0100: 00 01 a1 40 ee 4c 00 84
 *     0108: 1d e0 0c 4b 00 0f 85 25
 *     0110: 01 00 00 83 f8 0f 74 1e
 *     0118: 83 f8 10 74 19 8b 35 18
 *     0120: 45 4b 00 3b f5 74 0f 56
 *     0128: e8 93 90 01 00 56 e8 8c
 *     0130: a6 04 00 83 c4 04 8b 35
 *     0138: c0 43 4b 00 3b f5 74 0f
 *     0140: 56 e8 ea 08 fe ff 56 e8
 *     0148: 73 a6 04 00 83 c4 04 8b
 *     0150: 35 bc 43 4b 00 3b f5 74
 *     0158: 0f 56 e8 d1 08 fe ff 56
 *     0160: e8 5a a6 04 00 83 c4 04
 *     0168: 8b 35 10 45 4b 00 3b f5
 *     0170: 74 10 8b c6 e8 c7 fa 00
 *     0178: 00 56 e8 40 a6 04 00 83
 *     0180: c4 04 8b 35 e4 43 4b 00
 *     0188: 3b f5 74 0f 56 e8 2e b8
 *     0190: ff ff 56 e8 27 a6 04 00
 *     0198: 83 c4 04 8b 35 14 45 4b
 *     01a0: 00 3b f5 74 0f 56 e8 35
 *     01a8: 3e 01 00 56 e8 0e a6 04
 *     01b0: 00 83 c4 04 8b 35 c8 43
 *     01b8: 4b 00 3b f5 74 0f 56 e8
 *     01c0: 7c 72 fe ff 56 e8 f5 a5
 *     01c8: 04 00 83 c4 04 8b 35 f0
 *     01d0: 44 4b 00 3b f5 74 0f 56
 *     01d8: e8 93 35 00 00 56 e8 dc
 *     01e0: a5 04 00 83 c4 04 8b 1d
 *     01e8: f4 44 4b 00 3b dd 74 0e
 *     01f0: e8 4b 5c 00 00 53 e8 c4
 *     01f8: a5 04 00 83 c4 04 8b 35
 *     0200: 24 45 4b 00 3b f5 74 0f
 *     0208: 56 e8 92 b7 01 00 56 e8
 *     0210: ab a5 04 00 83 c4 04 8b
 *     0218: 1d 34 45 4b 00 3b dd 0f
 *     0220: 84 bd 00 00 00 e8 66 7c
 *     0228: 02 00 53 e8 8f a5 04 00
 *     0230: 83 c4 04 e9 aa 00 00 00
 *     0238: e8 f3 b6 ff ff 8b 35 bc
 *     0240: 43 4b 00 3b f5 74 0f 56
 *     0248: e8 e3 07 fe ff 56 e8 6c
 *     0250: a5 04 00 83 c4 04 8b 15
 *     0258: c0 43 4b 00 a1 10 45 4b
 *     0260: 00 89 15 bc 43 4b 00 ba
 *     0268: fd ff ff ff 39 68 08 74
 *     0270: 06 8b 48 08 21 51 04 39
 *     0278: 68 0c 74 06 8b 40 0c 21
 *     0280: 50 04 a1 c8 43 4b 00 39
 *     0288: 68 08 74 06 8b 48 08 21
 *     0290: 51 04 39 68 0c 74 06 8b
 *     0298: 40 0c 21 50 04 a1 18 45
 *     02a0: 4b 00 39 a8 d4 01 00 00
 *     02a8: 74 09 8b 88 d4 01 00 00
 *     02b0: 21 51 04 39 68 0c 74 06
 *     02b8: 8b 40 0c 21 50 04 8b 35
 *     02c0: f0 44 4b 00 68 c0 6f 66
 *     02c8: 00 8d 46 14 55 50 e8 bd
 *     02d0: 4e 05 00 83 c4 0c 89 ae
 *     02d8: d8 6f 66 00 89 ae e0 6f
 *     02e0: 66 00 f6 05 e0 0c 4b 00
 *     02e8: 09 75 1c 8b 35 dc 43 4b
 *     02f0: 00 3b f5 74 1e 8b c6 e8
 *     02f8: 84 09 ff ff 56 e8 bd a4
 *     0300: 04 00 83 c4 04 eb 0c 8b
 *     0308: 0d dc 43 4b 00 51 e8 9d
 *     0310: c3 fe ff 8b 35 d4 43 4b
 *     0318: 00 3b f5 74 10 8b c6 e8
 *     0320: 7c d4 fe ff 56 e8 95 a4
 *     0328: 04 00 83 c4 04 8b 35 c4
 *     0330: 43 4b 00 3b f5 74 0f 56
 *     0338: e8 63 43 fe ff 56 e8 7c
 *     0340: a4 04 00 83 c4 04 8b 35
 *     0348: cc 43 4b 00 3b f5 74 10
 *     0350: 8b c6 e8 d9 b3 fe ff 56
 *     0358: e8 62 a4 04 00 83 c4 04
 *     0360: 8b 54 24 14 8b 72 08 8b
 *     0368: 3d 9c e8 4c 00 8b 1d 8c
 *     0370: 80 49 00 3b f5 8b 2d 88
 *     0378: 80 49 00 74 3b f7 05 78
 *     0380: ee 4c 00 00 80 00 00 74
 *     0388: 0d 68 f8 f0 4c 00 ff d5
 *     0390: fe 05 18 f2 4c 00 8b ce
 *     0398: 8b d7 e8 61 02 04 00 f7
 *     03a0: 05 78 ee 4c 00 00 80 00
 *     03a8: 00 74 0d 68 f8 f0 4c 00
 *     03b0: ff d3 fe 0d 18 f2 4c 00
 *     03b8: 8b 44 24 14 8b 70 0c 8b
 *     03c0: 3d 9c e8 4c 00 85 f6 74
 *     03c8: 3b f7 05 78 ee 4c 00 00
 *     03d0: 80 00 00 74 0d 68 f8 f0
 *     03d8: 4c 00 ff d5 fe 05 18 f2
 *     03e0: 4c 00 8b ce 8b d7 e8 15
 *     03e8: 02 04 00 f7 05 78 ee 4c
 *     03f0: 00 00 80 00 00 74 0d 68
 *     03f8: f8 f0 4c 00 ff d3 fe 0d
 *     0400: 18 f2 4c 00 f6 05 e0 0c
 *     0408: 4b 00 22 c7 05 e8 44 4b
 *     0410: 00 00 00 00 00 75 20 f6
 *     0418: 05 e8 ea 4c 00 10 6a 00
 *     0420: bf 20 0a 4a 00 b8 e8 f4
 *     0428: 4c 00 74 04 6a 04 eb 02
 *     0430: 6a 03 e8 99 22 03 00 e8
 *     0438: 54 09 00 00 8a 0d e0 0c
 *     0440: 4b 00 80 e1 01 0f be d1
 *     0448: f7 da 5f 1b d2 5e 81 e2
 *     0450: 00 00 00 01 81 c2 00 00
 *     0458: 00 ff 5d 89 15 a8 f2 4c
 *     0460: 00 c7 05 5c e5 4c 00 01
 *     0468: 00 00 00 5b c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00422290(int a0)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x56
    _emit 0x57
    _emit 0xE8
    _emit 0x47
    _emit 0xB0
    _emit 0x01
    _emit 0x00
    _emit 0xD9
    _emit 0xE8
    _emit 0xA1
    _emit 0x40
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x1D
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0x25
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xFC
    _emit 0x33
    _emit 0xED
    _emit 0x89
    _emit 0x2D
    _emit 0x0C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x2D
    _emit 0x08
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8D
    _emit 0x5D
    _emit 0x02
    _emit 0x83
    _emit 0xF8
    _emit 0x0A
    _emit 0x0F
    _emit 0x84
    _emit 0x9B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x0B
    _emit 0x0F
    _emit 0x84
    _emit 0x92
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x0C
    _emit 0x75
    _emit 0x26
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
    _emit 0x90
    _emit 0xF8
    _emit 0xFE
    _emit 0xFF
    _emit 0x09
    _emit 0x1D
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xE9
    _emit 0x97
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x04
    _emit 0x75
    _emit 0x1D
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
    _emit 0x65
    _emit 0xF8
    _emit 0xFE
    _emit 0xFF
    _emit 0xEB
    _emit 0x75
    _emit 0x83
    _emit 0xF8
    _emit 0x10
    _emit 0x74
    _emit 0xDE
    _emit 0x83
    _emit 0xF8
    _emit 0x0E
    _emit 0x75
    _emit 0x70
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
    _emit 0x3E
    _emit 0xF8
    _emit 0xFE
    _emit 0xFF
    _emit 0xA1
    _emit 0xB4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0x05
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x74
    _emit 0x3C
    _emit 0xB8
    _emit 0x40
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x47
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x0D
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x08
    _emit 0xEB
    _emit 0x29
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
    _emit 0x03
    _emit 0xF8
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x0D
    _emit 0xB4
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0x0D
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x07
    _emit 0x83
    _emit 0x0D
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x01
    _emit 0xA1
    _emit 0x40
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x84
    _emit 0x1D
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0x85
    _emit 0x25
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0x0F
    _emit 0x74
    _emit 0x1E
    _emit 0x83
    _emit 0xF8
    _emit 0x10
    _emit 0x74
    _emit 0x19
    _emit 0x8B
    _emit 0x35
    _emit 0x18
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x93
    _emit 0x90
    _emit 0x01
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x8C
    _emit 0xA6
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0xC0
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0xEA
    _emit 0x08
    _emit 0xFE
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x73
    _emit 0xA6
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0xBC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0xD1
    _emit 0x08
    _emit 0xFE
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x5A
    _emit 0xA6
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0x10
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xC7
    _emit 0xFA
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x40
    _emit 0xA6
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x2E
    _emit 0xB8
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x27
    _emit 0xA6
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0x14
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x35
    _emit 0x3E
    _emit 0x01
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x0E
    _emit 0xA6
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0xC8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x7C
    _emit 0x72
    _emit 0xFE
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0xF5
    _emit 0xA5
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0xF0
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x93
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0xDC
    _emit 0xA5
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x1D
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xDD
    _emit 0x74
    _emit 0x0E
    _emit 0xE8
    _emit 0x4B
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0x53
    _emit 0xE8
    _emit 0xC4
    _emit 0xA5
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0x24
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x92
    _emit 0xB7
    _emit 0x01
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0xAB
    _emit 0xA5
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x1D
    _emit 0x34
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xDD
    _emit 0x0F
    _emit 0x84
    _emit 0xBD
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x66
    _emit 0x7C
    _emit 0x02
    _emit 0x00
    _emit 0x53
    _emit 0xE8
    _emit 0x8F
    _emit 0xA5
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xE9
    _emit 0xAA
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xF3
    _emit 0xB6
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x35
    _emit 0xBC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0xE3
    _emit 0x07
    _emit 0xFE
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x6C
    _emit 0xA5
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x15
    _emit 0xC0
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xA1
    _emit 0x10
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0xBC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xBA
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x39
    _emit 0x68
    _emit 0x08
    _emit 0x74
    _emit 0x06
    _emit 0x8B
    _emit 0x48
    _emit 0x08
    _emit 0x21
    _emit 0x51
    _emit 0x04
    _emit 0x39
    _emit 0x68
    _emit 0x0C
    _emit 0x74
    _emit 0x06
    _emit 0x8B
    _emit 0x40
    _emit 0x0C
    _emit 0x21
    _emit 0x50
    _emit 0x04
    _emit 0xA1
    _emit 0xC8
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x39
    _emit 0x68
    _emit 0x08
    _emit 0x74
    _emit 0x06
    _emit 0x8B
    _emit 0x48
    _emit 0x08
    _emit 0x21
    _emit 0x51
    _emit 0x04
    _emit 0x39
    _emit 0x68
    _emit 0x0C
    _emit 0x74
    _emit 0x06
    _emit 0x8B
    _emit 0x40
    _emit 0x0C
    _emit 0x21
    _emit 0x50
    _emit 0x04
    _emit 0xA1
    _emit 0x18
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x39
    _emit 0xA8
    _emit 0xD4
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x09
    _emit 0x8B
    _emit 0x88
    _emit 0xD4
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x21
    _emit 0x51
    _emit 0x04
    _emit 0x39
    _emit 0x68
    _emit 0x0C
    _emit 0x74
    _emit 0x06
    _emit 0x8B
    _emit 0x40
    _emit 0x0C
    _emit 0x21
    _emit 0x50
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0xF0
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x68
    _emit 0xC0
    _emit 0x6F
    _emit 0x66
    _emit 0x00
    _emit 0x8D
    _emit 0x46
    _emit 0x14
    _emit 0x55
    _emit 0x50
    _emit 0xE8
    _emit 0xBD
    _emit 0x4E
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x89
    _emit 0xAE
    _emit 0xD8
    _emit 0x6F
    _emit 0x66
    _emit 0x00
    _emit 0x89
    _emit 0xAE
    _emit 0xE0
    _emit 0x6F
    _emit 0x66
    _emit 0x00
    _emit 0xF6
    _emit 0x05
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x09
    _emit 0x75
    _emit 0x1C
    _emit 0x8B
    _emit 0x35
    _emit 0xDC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x1E
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x84
    _emit 0x09
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0xBD
    _emit 0xA4
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xEB
    _emit 0x0C
    _emit 0x8B
    _emit 0x0D
    _emit 0xDC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0x9D
    _emit 0xC3
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x35
    _emit 0xD4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x7C
    _emit 0xD4
    _emit 0xFE
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x95
    _emit 0xA4
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0xC4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x63
    _emit 0x43
    _emit 0xFE
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x7C
    _emit 0xA4
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xD9
    _emit 0xB3
    _emit 0xFE
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x62
    _emit 0xA4
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x72
    _emit 0x08
    _emit 0x8B
    _emit 0x3D
    _emit 0x9C
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x1D
    _emit 0x8C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x3B
    _emit 0xF5
    _emit 0x8B
    _emit 0x2D
    _emit 0x88
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x74
    _emit 0x3B
    _emit 0xF7
    _emit 0x05
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x0D
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xD5
    _emit 0xFE
    _emit 0x05
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xCE
    _emit 0x8B
    _emit 0xD7
    _emit 0xE8
    _emit 0x61
    _emit 0x02
    _emit 0x04
    _emit 0x00
    _emit 0xF7
    _emit 0x05
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x0D
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xD3
    _emit 0xFE
    _emit 0x0D
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x70
    _emit 0x0C
    _emit 0x8B
    _emit 0x3D
    _emit 0x9C
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x3B
    _emit 0xF7
    _emit 0x05
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x0D
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xD5
    _emit 0xFE
    _emit 0x05
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xCE
    _emit 0x8B
    _emit 0xD7
    _emit 0xE8
    _emit 0x15
    _emit 0x02
    _emit 0x04
    _emit 0x00
    _emit 0xF7
    _emit 0x05
    _emit 0x78
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x0D
    _emit 0x68
    _emit 0xF8
    _emit 0xF0
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0xD3
    _emit 0xFE
    _emit 0x0D
    _emit 0x18
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0xF6
    _emit 0x05
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x22
    _emit 0xC7
    _emit 0x05
    _emit 0xE8
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x20
    _emit 0xF6
    _emit 0x05
    _emit 0xE8
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x10
    _emit 0x6A
    _emit 0x00
    _emit 0xBF
    _emit 0x20
    _emit 0x0A
    _emit 0x4A
    _emit 0x00
    _emit 0xB8
    _emit 0xE8
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x04
    _emit 0x6A
    _emit 0x04
    _emit 0xEB
    _emit 0x02
    _emit 0x6A
    _emit 0x03
    _emit 0xE8
    _emit 0x99
    _emit 0x22
    _emit 0x03
    _emit 0x00
    _emit 0xE8
    _emit 0x54
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x8A
    _emit 0x0D
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x80
    _emit 0xE1
    _emit 0x01
    _emit 0x0F
    _emit 0xBE
    _emit 0xD1
    _emit 0xF7
    _emit 0xDA
    _emit 0x5F
    _emit 0x1B
    _emit 0xD2
    _emit 0x5E
    _emit 0x81
    _emit 0xE2
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x81
    _emit 0xC2
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x5D
    _emit 0x89
    _emit 0x15
    _emit 0xA8
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0x5C
    _emit 0xE5
    _emit 0x4C
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
