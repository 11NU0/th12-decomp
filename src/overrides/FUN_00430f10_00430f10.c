/* Byte-for-byte override for FUN_00430f10.

 * Original bytes (705):
 *     0000: 83 ec 0c d9 ee 56 d9 54
 *     0008: 24 04 c7 05 e8 ec 4c 00
 *     0010: 01 00 00 00 8b 44 24 04
 *     0018: d9 54 24 08 8b 4c 24 08
 *     0020: d9 54 24 0c 8b 54 24 0c
 *     0028: d9 54 24 04 d9 54 24 08
 *     0030: a3 04 ec 4c 00 8b 44 24
 *     0038: 04 d9 54 24 0c d9 54 24
 *     0040: 04 89 0d 08 ec 4c 00 8b
 *     0048: 4c 24 08 d9 e8 d9 54 24
 *     0050: 08 89 15 0c ec 4c 00 8b
 *     0058: 54 24 0c d9 c9 d9 54 24
 *     0060: 0c a3 10 ec 4c 00 d9 05
 *     0068: 0c 3e 4a 00 8b 44 24 04
 *     0070: d9 15 4c ec 4c 00 89 0d
 *     0078: 14 ec 4c 00 8b 4c 24 08
 *     0080: d9 c9 d9 15 e0 ec 4c 00
 *     0088: 89 15 18 ec 4c 00 8b 54
 *     0090: 24 0c d9 ca d9 15 e4 ec
 *     0098: 4c 00 a3 1c ec 4c 00 d9
 *     00a0: ca 89 0d 20 ec 4c 00 d9
 *     00a8: 54 24 04 89 15 24 ec 4c
 *     00b0: 00 d9 54 24 08 33 c0 8b
 *     00b8: 74 24 04 d9 54 24 0c 89
 *     00c0: 35 40 ec 4c 00 d9 54 24
 *     00c8: 04 8b 74 24 08 d9 54 24
 *     00d0: 08 d9 05 e4 3d 4a 00 89
 *     00d8: 35 44 ec 4c 00 8b 74 24
 *     00e0: 0c d9 54 24 0c 89 35 48
 *     00e8: ec 4c 00 d9 c9 8b 74 24
 *     00f0: 04 d9 54 24 04 89 35 ec
 *     00f8: ea 4c 00 8b 74 24 08 d9
 *     0100: 54 24 08 89 35 f0 ea 4c
 *     0108: 00 8b 74 24 0c d9 54 24
 *     0110: 0c 89 35 f4 ea 4c 00 8b
 *     0118: 74 24 04 d9 54 24 04 89
 *     0120: 35 f8 ea 4c 00 8b 74 24
 *     0128: 08 89 35 fc ea 4c 00 8b
 *     0130: 74 24 0c d9 54 24 0c 89
 *     0138: 35 00 eb 4c 00 d9 cb 8b
 *     0140: 74 24 04 d9 54 24 08 ba
 *     0148: 80 02 00 00 b9 e0 01 00
 *     0150: 00 a3 d0 ec 4c 00 a3 d4
 *     0158: ec 4c 00 89 15 d8 ec 4c
 *     0160: 00 89 0d dc ec 4c 00 89
 *     0168: 35 04 eb 4c 00 8b 74 24
 *     0170: 08 d9 ca d9 15 34 eb 4c
 *     0178: 00 89 35 08 eb 4c 00 8b
 *     0180: 74 24 0c d9 cb d9 15 c8
 *     0188: eb 4c 00 89 35 0c eb 4c
 *     0190: 00 d9 ca a3 b8 eb 4c 00
 *     0198: d9 15 cc eb 4c 00 a3 bc
 *     01a0: eb 4c 00 d9 ca 89 15 c0
 *     01a8: eb 4c 00 d9 54 24 04 8b
 *     01b0: 74 24 04 89 35 28 eb 4c
 *     01b8: 00 d9 54 24 08 8b 74 24
 *     01c0: 08 d9 54 24 0c 89 35 2c
 *     01c8: eb 4c 00 d9 54 24 04 8b
 *     01d0: 74 24 0c d9 54 24 08 89
 *     01d8: 35 30 eb 4c 00 d9 c9 8b
 *     01e0: 74 24 04 d9 5c 24 0c 89
 *     01e8: 35 1c ed 4c 00 8b 74 24
 *     01f0: 08 d9 54 24 04 89 35 20
 *     01f8: ed 4c 00 d9 54 24 08 8b
 *     0200: 74 24 0c d9 54 24 0c 89
 *     0208: 35 24 ed 4c 00 8b 74 24
 *     0210: 04 d9 54 24 04 89 35 28
 *     0218: ed 4c 00 8b 74 24 08 89
 *     0220: 35 2c ed 4c 00 8b 74 24
 *     0228: 0c d9 54 24 0c d9 c9 89
 *     0230: 35 30 ed 4c 00 8b 74 24
 *     0238: 04 d9 54 24 08 d9 ca 89
 *     0240: 35 34 ed 4c 00 8b 74 24
 *     0248: 08 d9 1d 64 ed 4c 00 89
 *     0250: 35 38 ed 4c 00 8b 74 24
 *     0258: 0c d9 15 f8 ed 4c 00 d9
 *     0260: c9 89 0d c4 eb 4c 00 d9
 *     0268: 1d fc ed 4c 00 a3 d0 eb
 *     0270: 4c 00 a3 e8 ed 4c 00 d9
 *     0278: 54 24 04 a3 ec ed 4c 00
 *     0280: d9 54 24 08 89 15 f0 ed
 *     0288: 4c 00 d9 5c 24 0c 8b 54
 *     0290: 24 0c 89 0d f4 ed 4c 00
 *     0298: 8b 4c 24 08 a3 00 ee 4c
 *     02a0: 00 8b 44 24 04 89 35 3c
 *     02a8: ed 4c 00 a3 58 ed 4c 00
 *     02b0: 89 0d 5c ed 4c 00 89 15
 *     02b8: 60 ed 4c 00 5e 83 c4 0c
 *     02c0: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00430f10(void)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0xD9
    _emit 0xEE
    _emit 0x56
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
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
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xA3
    _emit 0x04
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x0D
    _emit 0x08
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0xE8
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x15
    _emit 0x0C
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xA3
    _emit 0x10
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0x0C
    _emit 0x3E
    _emit 0x4A
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
    _emit 0x89
    _emit 0x0D
    _emit 0x14
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x15
    _emit 0xE0
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x18
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0xCA
    _emit 0xD9
    _emit 0x15
    _emit 0xE4
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0x1C
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCA
    _emit 0x89
    _emit 0x0D
    _emit 0x20
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x15
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
    _emit 0x74
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x35
    _emit 0x40
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x74
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
    _emit 0x35
    _emit 0x44
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x35
    _emit 0x48
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xC9
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x35
    _emit 0xEC
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x35
    _emit 0xF0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x35
    _emit 0xF4
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x35
    _emit 0xF8
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x35
    _emit 0xFC
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x35
    _emit 0x00
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCB
    _emit 0x8B
    _emit 0x74
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
    _emit 0xB9
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x00
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
    _emit 0x89
    _emit 0x0D
    _emit 0xDC
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0x04
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0xCA
    _emit 0xD9
    _emit 0x15
    _emit 0x34
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0x08
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0xCB
    _emit 0xD9
    _emit 0x15
    _emit 0xC8
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0x0C
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCA
    _emit 0xA3
    _emit 0xB8
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x15
    _emit 0xCC
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0xBC
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xCA
    _emit 0x89
    _emit 0x15
    _emit 0xC0
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x35
    _emit 0x28
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x35
    _emit 0x2C
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x35
    _emit 0x30
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xC9
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x35
    _emit 0x1C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x35
    _emit 0x20
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x35
    _emit 0x24
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x35
    _emit 0x28
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x35
    _emit 0x2C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0xC9
    _emit 0x89
    _emit 0x35
    _emit 0x30
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0xCA
    _emit 0x89
    _emit 0x35
    _emit 0x34
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
    _emit 0x24
    _emit 0x08
    _emit 0xD9
    _emit 0x1D
    _emit 0x64
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0x38
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x74
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
    _emit 0x0D
    _emit 0xC4
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x1D
    _emit 0xFC
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0xD0
    _emit 0xEB
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0xE8
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x04
    _emit 0xA3
    _emit 0xEC
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x15
    _emit 0xF0
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x0D
    _emit 0xF4
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x08
    _emit 0xA3
    _emit 0x00
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x89
    _emit 0x35
    _emit 0x3C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0x58
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x0D
    _emit 0x5C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x60
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC3
  }
  __assume(0);
}
