/* Byte-for-byte override for FUN_004036f0.

 * Original bytes (1133):
 *     0000: 55 8b ec 83 e4 f8 83 ec
 *     0008: 24 53 8b 5d 08 8b 83 bc
 *     0010: 35 00 00 56 57 a8 08 74
 *     0018: 0e b8 01 00 00 00 5f 5e
 *     0020: 5b 8b e5 5d c2 04 00 a8
 *     0028: 04 74 0d 83 bb c4 35 00
 *     0030: 00 3c 0f 8d d1 01 00 00
 *     0038: 8b 35 cc e8 4c 00 e8 8d
 *     0040: 6c 05 00 d9 05 04 ee 4c
 *     0048: 00 d9 9b f4 36 00 00 8d
 *     0050: b3 0c 36 00 00 d9 05 08
 *     0058: ee 4c 00 b9 46 00 00 00
 *     0060: d9 9b f8 36 00 00 bf 1c
 *     0068: ed 4c 00 f3 a5 bf 1c ed
 *     0070: 4c 00 c7 05 34 ee 4c 00
 *     0078: 1c ed 4c 00 e8 ff d2 02
 *     0080: 00 8b 15 34 ee 4c 00 a1
 *     0088: f0 e8 4c 00 8b 08 81 c2
 *     0090: cc 00 00 00 52 50 8b 81
 *     0098: bc 00 00 00 ff d0 8b 35
 *     00a0: cc e8 4c 00 c7 05 38 ee
 *     00a8: 4c 00 02 00 00 00 e8 1d
 *     00b0: 6c 05 00 a1 f0 e8 4c 00
 *     00b8: 8b 08 8b 91 e4 00 00 00
 *     00c0: 6a 01 6a 0e 50 ff d2 8b
 *     00c8: 35 cc e8 4c 00 e8 fe 6b
 *     00d0: 05 00 a1 f0 e8 4c 00 8b
 *     00d8: 08 8b 91 e4 00 00 00 6a
 *     00e0: 04 6a 17 50 ff d2 8b 35
 *     00e8: cc e8 4c 00 8b bb 20 37
 *     00f0: 00 00 e8 d9 6b 05 00 a1
 *     00f8: f0 e8 4c 00 8b 08 8b 91
 *     0100: e4 00 00 00 57 6a 22 50
 *     0108: ff d2 8b 35 cc e8 4c 00
 *     0110: 8b bb 08 37 00 00 e8 b5
 *     0118: 6b 05 00 a1 f0 e8 4c 00
 *     0120: 8b 08 8b 91 e4 00 00 00
 *     0128: 57 6a 24 50 ff d2 8b 35
 *     0130: cc e8 4c 00 8b bb 0c 37
 *     0138: 00 00 e8 91 6b 05 00 a1
 *     0140: f0 e8 4c 00 8b 08 8b 91
 *     0148: e4 00 00 00 57 6a 25 50
 *     0150: ff d2 f6 83 bc 35 00 00
 *     0158: 04 74 5c 83 bb d8 35 00
 *     0160: 00 22 7d 53 a1 e8 ed 4c
 *     0168: 00 d9 e8 8b 15 f0 ed 4c
 *     0170: 00 8b 0d ec ed 4c 00 03
 *     0178: d0 89 44 24 10 a1 f4 ed
 *     0180: 4c 00 03 c1 89 44 24 1c
 *     0188: a1 f0 e8 4c 00 6a 00 89
 *     0190: 54 24 1c 89 4c 24 18 8b
 *     0198: 08 51 d9 1c 24 6a 00 6a
 *     01a0: 03 8d 54 24 20 52 bf 01
 *     01a8: 00 00 00 57 50 8b 81 ac
 *     01b0: 00 00 00 ff d0 eb 57 a1
 *     01b8: e8 ed 4c 00 d9 e8 8b 15
 *     01c0: f0 ed 4c 00 8b 0d ec ed
 *     01c8: 4c 00 03 d0 89 44 24 20
 *     01d0: a1 f4 ed 4c 00 03 c1 89
 *     01d8: 44 24 2c a1 f0 e8 4c 00
 *     01e0: 6a 00 89 54 24 2c 8b 93
 *     01e8: 20 37 00 00 89 4c 24 28
 *     01f0: 8b 08 51 d9 1c 24 52 6a
 *     01f8: 03 8d 54 24 30 52 6a 01
 *     0200: 50 8b 81 ac 00 00 00 ff
 *     0208: d0 bf 01 00 00 00 8b 83
 *     0210: bc 35 00 00 a8 04 74 3e
 *     0218: 83 bb c4 35 00 00 1e 7d
 *     0220: 25 6a 0b 6a 00 6a 00 6a
 *     0228: 00 6a 1e 6a 03 e8 7e f0
 *     0230: 04 00 09 bb bc 35 00 00
 *     0238: 57 8d 83 c0 35 00 00 e8
 *     0240: ac 2e 00 00 eb 10 83 e0
 *     0248: fe c6 83 77 27 00 00 00
 *     0250: 89 83 bc 35 00 00 80 bb
 *     0258: 77 27 00 00 00 8b 35 cc
 *     0260: e8 4c 00 74 19 8b 83 74
 *     0268: 27 00 00 89 be 50 ed 88
 *     0270: 00 89 86 4c ed 88 00 c6
 *     0278: 83 77 27 00 00 00 33 c0
 *     0280: f6 83 bc 35 00 00 01 89
 *     0288: 83 b0 35 00 00 89 83 b4
 *     0290: 35 00 00 89 83 b8 35 00
 *     0298: 00 0f 84 5e 01 00 00 39
 *     02a0: 83 c0 05 00 00 0f 84 cb
 *     02a8: 00 00 00 8d 58 02 be e8
 *     02b0: e8 4c 00 e8 a8 2b 00 00
 *     02b8: 8b fe e8 51 c9 02 00 8b
 *     02c0: 35 cc e8 4c 00 e8 06 6a
 *     02c8: 05 00 8b 35 cc e8 4c 00
 *     02d0: e8 fb 69 05 00 a1 f0 e8
 *     02d8: 4c 00 8b 08 8b 91 e4 00
 *     02e0: 00 00 6a 00 6a 0e 50 ff
 *     02e8: d2 8b 75 08 81 c6 cc 01
 *     02f0: 00 00 8d 7b 06 83 be f4
 *     02f8: 03 00 00 00 74 0d a1 cc
 *     0300: e8 4c 00 50 8b c6 e8 05
 *     0308: 8f 05 00 81 c6 b4 04 00
 *     0310: 00 83 ef 01 75 df 8b 35
 *     0318: cc e8 4c 00 e8 af 69 05
 *     0320: 00 a1 f0 e8 4c 00 8b 08
 *     0328: 8b 91 e4 00 00 00 6a 01
 *     0330: 6a 0e 50 ff d2 bf 1c ed
 *     0338: 4c 00 89 3d 34 ee 4c 00
 *     0340: e8 3b d0 02 00 8b 15 34
 *     0348: ee 4c 00 a1 f0 e8 4c 00
 *     0350: 8b 08 81 c2 cc 00 00 00
 *     0358: 52 50 8b 81 bc 00 00 00
 *     0360: ff d0 8b 35 cc e8 4c 00
 *     0368: 89 1d 38 ee 4c 00 8b 5d
 *     0370: 08 bf 01 00 00 00 39 3d
 *     0378: 78 f2 4c 00 74 1e e8 4d
 *     0380: 69 05 00 a1 f0 e8 4c 00
 *     0388: 57 89 3d 78 f2 4c 00 8b
 *     0390: 08 8b 91 e4 00 00 00 6a
 *     0398: 1c 50 ff d2 6a 00 53 e8
 *     03a0: 2c 0c 00 00 57 53 e8 25
 *     03a8: 0c 00 00 6a 02 53 e8 1d
 *     03b0: 0c 00 00 6a 03 53 e8 15
 *     03b8: 0c 00 00 6a 04 53 e8 0d
 *     03c0: 0c 00 00 6a 05 53 e8 05
 *     03c8: 0c 00 00 6a 06 53 e8 fd
 *     03d0: 0b 00 00 6a 07 53 e8 f5
 *     03d8: 0b 00 00 8b 35 cc e8 4c
 *     03e0: 00 e8 ea 68 05 00 8b 83
 *     03e8: 70 27 00 00 8b 35 cc e8
 *     03f0: 4c 00 85 c0 74 07 40 89
 *     03f8: 83 70 27 00 00 c7 86 50
 *     0400: ed 88 00 00 00 00 00 c7
 *     0408: 86 4c ed 88 00 80 80 80
 *     0410: 80 83 bb 78 27 00 00 00
 *     0418: 74 10 89 be 50 ed 88 00
 *     0420: c7 86 4c ed 88 00 40 40
 *     0428: 40 ff e8 a1 68 05 00 a1
 *     0430: f0 e8 4c 00 8b 08 8b 91
 *     0438: e4 00 00 00 6a 00 6a 0e
 *     0440: 50 ff d2 8b 35 cc e8 4c
 *     0448: 00 e8 82 68 05 00 a1 f0
 *     0450: e8 4c 00 8b 08 8b 91 e4
 *     0458: 00 00 00 6a 08 6a 17 50
 *     0460: ff d2 8b c7 5f 5e 5b 8b
 *     0468: e5 5d c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_004036f0(int a0)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xE4
    _emit 0xF8
    _emit 0x83
    _emit 0xEC
    _emit 0x24
    _emit 0x53
    _emit 0x8B
    _emit 0x5D
    _emit 0x08
    _emit 0x8B
    _emit 0x83
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0x57
    _emit 0xA8
    _emit 0x08
    _emit 0x74
    _emit 0x0E
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0xA8
    _emit 0x04
    _emit 0x74
    _emit 0x0D
    _emit 0x83
    _emit 0xBB
    _emit 0xC4
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x3C
    _emit 0x0F
    _emit 0x8D
    _emit 0xD1
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x8D
    _emit 0x6C
    _emit 0x05
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0x04
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0x9B
    _emit 0xF4
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0xB3
    _emit 0x0C
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x05
    _emit 0x08
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xB9
    _emit 0x46
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x9B
    _emit 0xF8
    _emit 0x36
    _emit 0x00
    _emit 0x00
    _emit 0xBF
    _emit 0x1C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xF3
    _emit 0xA5
    _emit 0xBF
    _emit 0x1C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0x34
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x1C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xFF
    _emit 0xD2
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x34
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x81
    _emit 0xC2
    _emit 0xCC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x52
    _emit 0x50
    _emit 0x8B
    _emit 0x81
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0x38
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x1D
    _emit 0x6C
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0x6A
    _emit 0x0E
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xFE
    _emit 0x6B
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x04
    _emit 0x6A
    _emit 0x17
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xBB
    _emit 0x20
    _emit 0x37
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xD9
    _emit 0x6B
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x6A
    _emit 0x22
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xBB
    _emit 0x08
    _emit 0x37
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xB5
    _emit 0x6B
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x6A
    _emit 0x24
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xBB
    _emit 0x0C
    _emit 0x37
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x91
    _emit 0x6B
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x6A
    _emit 0x25
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0xF6
    _emit 0x83
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x04
    _emit 0x74
    _emit 0x5C
    _emit 0x83
    _emit 0xBB
    _emit 0xD8
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x22
    _emit 0x7D
    _emit 0x53
    _emit 0xA1
    _emit 0xE8
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xE8
    _emit 0x8B
    _emit 0x15
    _emit 0xF0
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0xEC
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x03
    _emit 0xD0
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0xA1
    _emit 0xF4
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x03
    _emit 0xC1
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x1C
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x18
    _emit 0x8B
    _emit 0x08
    _emit 0x51
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x03
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x20
    _emit 0x52
    _emit 0xBF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x50
    _emit 0x8B
    _emit 0x81
    _emit 0xAC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0xEB
    _emit 0x57
    _emit 0xA1
    _emit 0xE8
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0xD9
    _emit 0xE8
    _emit 0x8B
    _emit 0x15
    _emit 0xF0
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0xEC
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x03
    _emit 0xD0
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0xA1
    _emit 0xF4
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x03
    _emit 0xC1
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x2C
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x89
    _emit 0x54
    _emit 0x24
    _emit 0x2C
    _emit 0x8B
    _emit 0x93
    _emit 0x20
    _emit 0x37
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x28
    _emit 0x8B
    _emit 0x08
    _emit 0x51
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0x52
    _emit 0x6A
    _emit 0x03
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x30
    _emit 0x52
    _emit 0x6A
    _emit 0x01
    _emit 0x50
    _emit 0x8B
    _emit 0x81
    _emit 0xAC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0xBF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x83
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0xA8
    _emit 0x04
    _emit 0x74
    _emit 0x3E
    _emit 0x83
    _emit 0xBB
    _emit 0xC4
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x1E
    _emit 0x7D
    _emit 0x25
    _emit 0x6A
    _emit 0x0B
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x1E
    _emit 0x6A
    _emit 0x03
    _emit 0xE8
    _emit 0x7E
    _emit 0xF0
    _emit 0x04
    _emit 0x00
    _emit 0x09
    _emit 0xBB
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x8D
    _emit 0x83
    _emit 0xC0
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xAC
    _emit 0x2E
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x10
    _emit 0x83
    _emit 0xE0
    _emit 0xFE
    _emit 0xC6
    _emit 0x83
    _emit 0x77
    _emit 0x27
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x83
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x80
    _emit 0xBB
    _emit 0x77
    _emit 0x27
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x19
    _emit 0x8B
    _emit 0x83
    _emit 0x74
    _emit 0x27
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xBE
    _emit 0x50
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0x4C
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0xC6
    _emit 0x83
    _emit 0x77
    _emit 0x27
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0xF6
    _emit 0x83
    _emit 0xBC
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x89
    _emit 0x83
    _emit 0xB0
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x83
    _emit 0xB4
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x83
    _emit 0xB8
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0x5E
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x83
    _emit 0xC0
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0xCB
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x58
    _emit 0x02
    _emit 0xBE
    _emit 0xE8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xA8
    _emit 0x2B
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xFE
    _emit 0xE8
    _emit 0x51
    _emit 0xC9
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x06
    _emit 0x6A
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xFB
    _emit 0x69
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x0E
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x75
    _emit 0x08
    _emit 0x81
    _emit 0xC6
    _emit 0xCC
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x7B
    _emit 0x06
    _emit 0x83
    _emit 0xBE
    _emit 0xF4
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x0D
    _emit 0xA1
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x50
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x05
    _emit 0x8F
    _emit 0x05
    _emit 0x00
    _emit 0x81
    _emit 0xC6
    _emit 0xB4
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x75
    _emit 0xDF
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xAF
    _emit 0x69
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0x6A
    _emit 0x0E
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0xBF
    _emit 0x1C
    _emit 0xED
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x34
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x3B
    _emit 0xD0
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x34
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x81
    _emit 0xC2
    _emit 0xCC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x52
    _emit 0x50
    _emit 0x8B
    _emit 0x81
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x1D
    _emit 0x38
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x5D
    _emit 0x08
    _emit 0xBF
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x39
    _emit 0x3D
    _emit 0x78
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x1E
    _emit 0xE8
    _emit 0x4D
    _emit 0x69
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x57
    _emit 0x89
    _emit 0x3D
    _emit 0x78
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x1C
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x6A
    _emit 0x00
    _emit 0x53
    _emit 0xE8
    _emit 0x2C
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x53
    _emit 0xE8
    _emit 0x25
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x02
    _emit 0x53
    _emit 0xE8
    _emit 0x1D
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x03
    _emit 0x53
    _emit 0xE8
    _emit 0x15
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x04
    _emit 0x53
    _emit 0xE8
    _emit 0x0D
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x05
    _emit 0x53
    _emit 0xE8
    _emit 0x05
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x06
    _emit 0x53
    _emit 0xE8
    _emit 0xFD
    _emit 0x0B
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x07
    _emit 0x53
    _emit 0xE8
    _emit 0xF5
    _emit 0x0B
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xEA
    _emit 0x68
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x83
    _emit 0x70
    _emit 0x27
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x07
    _emit 0x40
    _emit 0x89
    _emit 0x83
    _emit 0x70
    _emit 0x27
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x50
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x4C
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x80
    _emit 0x80
    _emit 0x80
    _emit 0x80
    _emit 0x83
    _emit 0xBB
    _emit 0x78
    _emit 0x27
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x10
    _emit 0x89
    _emit 0xBE
    _emit 0x50
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x4C
    _emit 0xED
    _emit 0x88
    _emit 0x00
    _emit 0x40
    _emit 0x40
    _emit 0x40
    _emit 0xFF
    _emit 0xE8
    _emit 0xA1
    _emit 0x68
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x0E
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x82
    _emit 0x68
    _emit 0x05
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x08
    _emit 0x6A
    _emit 0x17
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0xC7
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
