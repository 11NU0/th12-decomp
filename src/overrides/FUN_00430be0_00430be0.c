/* Byte-for-byte override for FUN_00430be0.

 * Original bytes (807):
 *     0000: 83 ec 0c d9 ee 57 d9 54
 *     0008: 24 04 c7 05 dc ec 4c 00
 *     0010: e0 01 00 00 8b 44 24 04
 *     0018: d9 54 24 08 8b 54 24 08
 *     0020: d9 54 24 0c d9 54 24 04
 *     0028: a3 04 ec 4c 00 8b 44 24
 *     0030: 0c d9 54 24 08 d9 54 24
 *     0038: 0c 89 15 08 ec 4c 00 8b
 *     0040: 54 24 04 d9 54 24 04 d9
 *     0048: e8 a3 0c ec 4c 00 8b 44
 *     0050: 24 08 d9 54 24 08 89 15
 *     0058: 10 ec 4c 00 d9 c9 8b 54
 *     0060: 24 0c d9 54 24 0c d9 05
 *     0068: 0c 3e 4a 00 a3 14 ec 4c
 *     0070: 00 8b 44 24 04 d9 15 4c
 *     0078: ec 4c 00 d9 c9 89 15 18
 *     0080: ec 4c 00 8b 54 24 08 d9
 *     0088: 15 e0 ec 4c 00 d9 ca a3
 *     0090: 1c ec 4c 00 8b 44 24 0c
 *     0098: d9 15 e4 ec 4c 00 d9 ca
 *     00a0: 89 15 20 ec 4c 00 d9 54
 *     00a8: 24 04 a3 24 ec 4c 00 d9
 *     00b0: 54 24 08 33 c0 8b 7c 24
 *     00b8: 04 d9 54 24 0c 89 3d 40
 *     00c0: ec 4c 00 d9 54 24 04 8b
 *     00c8: 7c 24 08 d9 54 24 08 d9
 *     00d0: 05 e4 3d 4a 00 89 3d 44
 *     00d8: ec 4c 00 8b 7c 24 0c d9
 *     00e0: 54 24 0c 89 3d 48 ec 4c
 *     00e8: 00 d9 c9 8b 7c 24 04 d9
 *     00f0: 54 24 04 89 3d ec ea 4c
 *     00f8: 00 8b 7c 24 08 d9 54 24
 *     0100: 08 89 3d f0 ea 4c 00 8b
 *     0108: 7c 24 0c d9 54 24 0c 89
 *     0110: 3d f4 ea 4c 00 8b 7c 24
 *     0118: 04 d9 54 24 04 89 3d f8
 *     0120: ea 4c 00 8b 7c 24 08 89
 *     0128: 3d fc ea 4c 00 8b 7c 24
 *     0130: 0c d9 54 24 0c 89 3d 00
 *     0138: eb 4c 00 d9 cb 8b 7c 24
 *     0140: 04 d9 54 24 08 ba 80 02
 *     0148: 00 00 89 3d 04 eb 4c 00
 *     0150: 8b 7c 24 08 a3 d0 ec 4c
 *     0158: 00 a3 d4 ec 4c 00 89 15
 *     0160: d8 ec 4c 00 c7 05 e8 ec
 *     0168: 4c 00 01 00 00 00 d9 ca
 *     0170: 89 3d 08 eb 4c 00 8b 7c
 *     0178: 24 0c d9 15 34 eb 4c 00
 *     0180: d9 cb 89 3d 0c eb 4c 00
 *     0188: d9 15 c8 eb 4c 00 a3 d0
 *     0190: eb 4c 00 d9 ca d9 15 cc
 *     0198: eb 4c 00 d9 ca d9 54 24
 *     01a0: 04 8b 7c 24 04 89 3d 28
 *     01a8: eb 4c 00 d9 54 24 08 8b
 *     01b0: 7c 24 08 d9 54 24 0c 89
 *     01b8: 3d 2c eb 4c 00 8b 7c 24
 *     01c0: 0c 89 3d 30 eb 4c 00 bf
 *     01c8: 00 40 00 00 85 b9 90 05
 *     01d0: 00 00 74 2a c7 05 b8 eb
 *     01d8: 4c 00 20 00 00 00 c7 05
 *     01e0: bc eb 4c 00 10 00 00 00
 *     01e8: c7 05 c0 eb 4c 00 80 01
 *     01f0: 00 00 c7 05 c4 eb 4c 00
 *     01f8: c0 01 00 00 eb 1a a3 b8
 *     0200: eb 4c 00 a3 bc eb 4c 00
 *     0208: 89 15 c0 eb 4c 00 c7 05
 *     0210: c4 eb 4c 00 e0 01 00 00
 *     0218: d9 54 24 04 8b 54 24 04
 *     0220: 89 15 1c ed 4c 00 d9 54
 *     0228: 24 08 8b 54 24 08 d9 c9
 *     0230: d9 5c 24 0c 89 15 20 ed
 *     0238: 4c 00 8b 54 24 0c 89 15
 *     0240: 24 ed 4c 00 d9 54 24 04
 *     0248: 8b 54 24 04 d9 54 24 08
 *     0250: 89 15 28 ed 4c 00 d9 54
 *     0258: 24 0c 8b 54 24 08 d9 54
 *     0260: 24 04 89 15 2c ed 4c 00
 *     0268: 8b 54 24 0c d9 54 24 0c
 *     0270: 89 15 30 ed 4c 00 d9 c9
 *     0278: 8b 54 24 04 d9 54 24 08
 *     0280: 89 15 34 ed 4c 00 d9 ca
 *     0288: 8b 54 24 08 d9 1d 64 ed
 *     0290: 4c 00 89 15 38 ed 4c 00
 *     0298: 8b 54 24 0c d9 15 f8 ed
 *     02a0: 4c 00 d9 c9 89 15 3c ed
 *     02a8: 4c 00 d9 1d fc ed 4c 00
 *     02b0: a3 00 ee 4c 00 d9 54 24
 *     02b8: 04 8b 54 24 04 89 15 58
 *     02c0: ed 4c 00 d9 54 24 08 8b
 *     02c8: 54 24 08 d9 5c 24 0c 89
 *     02d0: 15 5c ed 4c 00 8b 54 24
 *     02d8: 0c 89 15 60 ed 4c 00 85
 *     02e0: b9 90 05 00 00 5f a3 ec
 *     02e8: ed 4c 00 74 22 c7 05 e8
 *     02f0: ed 4c 00 0d 00 00 00 c7
 *     02f8: 05 f0 ed 4c 00 a6 01 00
 *     0300: 00 c7 05 f4 ed 4c 00 e0
 *     0308: 01 00 00 83 c4 0c c3 a3
 *     0310: e8 ed 4c 00 b8 00 02 00
 *     0318: 00 a3 f0 ed 4c 00 a3 f4
 *     0320: ed 4c 00 83 c4 0c c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00430be0(int a0)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0xD9
    _emit 0xEE
    _emit 0x57
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0xC7
    _emit 0x05
    _emit 0xDC
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0xA3
    _emit 0x04
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x15
    _emit 0x08
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0xE8
    _emit 0xA3
    _emit 0x0C
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x15
    _emit 0x10
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xC9
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x05
    _emit 0x0C
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0xA3
    _emit 0x14
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x15
    _emit 0x4C
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xC9
    _emit 0x89
    _emit 0x15
    _emit 0x18
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x15
    _emit 0xE0
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCA
    _emit 0xA3
    _emit 0x1C
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x15
    _emit 0xE4
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCA
    _emit 0x89
    _emit 0x15
    _emit 0x20
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0xA3
    _emit 0x24
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x33
    _emit 0xC0
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x3D
    _emit 0x40
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x05
    _emit 0xE4
    _emit 0x3D
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x44
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x3D
    _emit 0x48
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xC9
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x3D
    _emit 0xEC
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x3D
    _emit 0xF0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x3D
    _emit 0xF4
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x3D
    _emit 0xF8
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x3D
    _emit 0xFC
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x3D
    _emit 0x00
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCB
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xBA
    _emit 0x80
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x04
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x08
    _emit 0xA3
    _emit 0xD0
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0xD4
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0xD8
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xE8
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0xCA
    _emit 0x89
    _emit 0x3D
    _emit 0x08
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x15
    _emit 0x34
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCB
    _emit 0x89
    _emit 0x3D
    _emit 0x0C
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x15
    _emit 0xC8
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0xD0
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCA
    _emit 0xD9
    _emit 0x15
    _emit 0xCC
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCA
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x3D
    _emit 0x28
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x3D
    _emit 0x2C
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x7C
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x3D
    _emit 0x30
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xBF
    _emit 0x00
    _emit 0x40
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xB9
    _emit 0x90
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x2A
    _emit 0xC7
    _emit 0x05
    _emit 0xB8
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xBC
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xC0
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x80
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xC4
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xC0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x1A
    _emit 0xA3
    _emit 0xB8
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0xBC
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0xC0
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xC4
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x15
    _emit 0x1C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x15
    _emit 0x20
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x15
    _emit 0x24
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x15
    _emit 0x28
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x15
    _emit 0x2C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x15
    _emit 0x30
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xC9
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x15
    _emit 0x34
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCA
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x1D
    _emit 0x64
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x38
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x15
    _emit 0xF8
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xC9
    _emit 0x89
    _emit 0x15
    _emit 0x3C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x1D
    _emit 0xFC
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0x00
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x15
    _emit 0x58
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x15
    _emit 0x5C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x15
    _emit 0x60
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x85
    _emit 0xB9
    _emit 0x90
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0xA3
    _emit 0xEC
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x22
    _emit 0xC7
    _emit 0x05
    _emit 0xE8
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xF0
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xA6
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xF4
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC3
    _emit 0xA3
    _emit 0xE8
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xB8
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xA3
    _emit 0xF0
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0xF4
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC3
  }
  __assume(0);
}
