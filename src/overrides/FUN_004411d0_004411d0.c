/* Byte-for-byte override for FUN_004411d0.

 * Original bytes (839):
 *     0000: 51 8b 46 24 53 83 f8 04
 *     0008: 0f 87 31 03 00 00 57 ff
 *     0010: 24 85 18 15 44 00 c7 46
 *     0018: 30 05 00 00 00 8b 46 30
 *     0020: 85 c0 74 0f 7f 06 48 89
 *     0028: 46 28 eb 0e 33 c0 89 46
 *     0030: 28 eb 07 c7 46 28 00 00
 *     0038: 00 00 8b 4e 14 6a 00 6a
 *     0040: 01 8d 44 24 10 50 51 b8
 *     0048: 17 00 00 00 33 c9 e8 7d
 *     0050: 03 02 00 8b 54 24 08 8b
 *     0058: de 89 96 cc 02 00 00 e8
 *     0060: 7c 14 00 00 b9 01 00 00
 *     0068: 00 8b c6 e8 00 dd ff ff
 *     0070: 83 be b8 02 00 00 06 0f
 *     0078: 8e c1 02 00 00 b9 02 00
 *     0080: 00 00 8b c6 e8 e7 dc ff
 *     0088: ff 8b 86 cc 02 00 00 50
 *     0090: bb 03 00 00 00 e8 76 07
 *     0098: 02 00 0f b7 5e 28 66 83
 *     00a0: c3 11 e9 d1 00 00 00 8b
 *     00a8: 56 28 8d 7e 28 b0 10 89
 *     00b0: 57 04 84 05 c4 48 4d 00
 *     00b8: 75 08 84 05 c0 48 4d 00
 *     00c0: 74 09 6a ff 8b c7 e8 d5
 *     00c8: 36 02 00 b0 20 84 05 c4
 *     00d0: 48 4d 00 75 08 84 05 c0
 *     00d8: 48 4d 00 74 09 6a 01 8b
 *     00e0: c7 e8 ba 36 02 00 8b 47
 *     00e8: 04 3b 07 74 34 ba 0a 00
 *     00f0: 00 00 e8 c9 2a 01 00 8b
 *     00f8: 8e cc 02 00 00 51 bb 03
 *     0100: 00 00 00 e8 08 07 02 00
 *     0108: 0f b7 1f 8b 96 cc 02 00
 *     0110: 00 66 83 c3 07 52 e8 85
 *     0118: 06 02 00 56 e8 3f 02 00
 *     0120: 00 f7 05 c4 48 4d 00 02
 *     0128: 01 00 00 74 66 83 3f 04
 *     0130: 0f 84 4f 01 00 00 ba 09
 *     0138: 00 00 00 e8 80 2a 01 00
 *     0140: 8b 47 08 85 c0 74 13 83
 *     0148: f8 04 7f 05 48 89 07 eb
 *     0150: 0f b8 04 00 00 00 89 07
 *     0158: eb 06 c7 07 04 00 00 00
 *     0160: 8b 86 cc 02 00 00 50 bb
 *     0168: 03 00 00 00 e8 9f 06 02
 *     0170: 00 0f b7 1f 66 83 c3 07
 *     0178: 8b 8e cc 02 00 00 51 e8
 *     0180: 1c 06 02 00 56 e8 d6 01
 *     0188: 00 00 5f b8 01 00 00 00
 *     0190: 5b 59 c3 83 3f 01 75 1b
 *     0198: 6a 3c 8d 8e b4 02 00 00
 *     01a0: e8 8b 63 fc ff 85 c0 74
 *     01a8: 0a ba 02 00 00 00 e8 0d
 *     01b0: 2a 01 00 b0 40 84 05 c4
 *     01b8: 48 4d 00 75 08 84 05 c0
 *     01c0: 48 4d 00 74 46 8b 07 33
 *     01c8: c9 2b c1 74 1f 83 e8 01
 *     01d0: 75 39 80 3d d1 ea 4c 00
 *     01d8: 05 7d 08 88 0d d1 ea 4c
 *     01e0: 00 eb 21 80 05 d1 ea 4c
 *     01e8: 00 fb eb 18 80 3d d0 ea
 *     01f0: 4c 00 05 7d 08 88 0d d0
 *     01f8: ea 4c 00 eb 07 80 05 d0
 *     0200: ea 4c 00 fb 8b de e8 d5
 *     0208: 12 00 00 b0 80 84 05 c4
 *     0210: 48 4d 00 75 08 84 05 c0
 *     0218: 48 4d 00 74 43 8b 07 83
 *     0220: e8 00 74 1e 83 e8 01 75
 *     0228: 37 a0 d1 ea 4c 00 04 05
 *     0230: 3c 64 a2 d1 ea 4c 00 7e
 *     0238: 20 c6 05 d1 ea 4c 00 64
 *     0240: eb 17 a0 d0 ea 4c 00 04
 *     0248: 05 3c 64 a2 d0 ea 4c 00
 *     0250: 7e 07 c6 05 d0 ea 4c 00
 *     0258: 64 8b de e8 80 12 00 00
 *     0260: f7 05 c4 48 4d 00 01 00
 *     0268: 08 00 0f 84 ce 00 00 00
 *     0270: 8b 3f 83 ef 02 74 53 83
 *     0278: ef 01 74 1f 83 ef 01 0f
 *     0280: 85 b9 00 00 00 8b 96 cc
 *     0288: 02 00 00 52 bb 06 00 00
 *     0290: 00 e8 0a 05 02 00 8d 53
 *     0298: 03 eb 43 8b de c6 05 d0
 *     02a0: ea 4c 00 64 c6 05 d1 ea
 *     02a8: 4c 00 50 c6 05 d2 ea 4c
 *     02b0: 00 00 e8 29 12 00 00 ba
 *     02b8: 07 00 00 00 e8 ff 28 01
 *     02c0: 00 5f b8 01 00 00 00 5b
 *     02c8: 59 c3 8b 86 cc 02 00 00
 *     02d0: 50 bb 06 00 00 00 e8 c5
 *     02d8: 04 02 00 8d 53 01 e8 dd
 *     02e0: 28 01 00 b9 04 00 00 00
 *     02e8: 8b c6 e8 81 da ff ff 5f
 *     02f0: b8 01 00 00 00 5b 59 c3
 *     02f8: 83 be b8 02 00 00 0a 7c
 *     0300: 3d 8b 46 28 83 e8 02 8d
 *     0308: 7e 28 74 1f 83 e8 02 75
 *     0310: 2d 8d 50 01 8b c6 e8 f5
 *     0318: d9 ff ff 8b c7 e8 4e 34
 *     0320: 02 00 5f b8 01 00 00 00
 *     0328: 5b 59 c3 ba 04 00 00 00
 *     0330: 8b c6 e8 d9 d9 ff ff 8b
 *     0338: c7 e8 f2 33 02 00 5f b8
 *     0340: 01 00 00 00 5b 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __fastcall FUN_004411d0(void * a0)
{
  __asm {
    _emit 0x51
    _emit 0x8B
    _emit 0x46
    _emit 0x24
    _emit 0x53
    _emit 0x83
    _emit 0xF8
    _emit 0x04
    _emit 0x0F
    _emit 0x87
    _emit 0x31
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0xFF
    _emit 0x24
    _emit 0x85
    _emit 0x18
    _emit 0x15
    _emit 0x44
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x30
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x30
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0F
    _emit 0x7F
    _emit 0x06
    _emit 0x48
    _emit 0x89
    _emit 0x46
    _emit 0x28
    _emit 0xEB
    _emit 0x0E
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x46
    _emit 0x28
    _emit 0xEB
    _emit 0x07
    _emit 0xC7
    _emit 0x46
    _emit 0x28
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x14
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x10
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
    _emit 0x7D
    _emit 0x03
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x8B
    _emit 0xDE
    _emit 0x89
    _emit 0x96
    _emit 0xCC
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x7C
    _emit 0x14
    _emit 0x00
    _emit 0x00
    _emit 0xB9
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x00
    _emit 0xDD
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xBE
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x06
    _emit 0x0F
    _emit 0x8E
    _emit 0xC1
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xB9
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xE7
    _emit 0xDC
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x86
    _emit 0xCC
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0xBB
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x76
    _emit 0x07
    _emit 0x02
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x5E
    _emit 0x28
    _emit 0x66
    _emit 0x83
    _emit 0xC3
    _emit 0x11
    _emit 0xE9
    _emit 0xD1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x56
    _emit 0x28
    _emit 0x8D
    _emit 0x7E
    _emit 0x28
    _emit 0xB0
    _emit 0x10
    _emit 0x89
    _emit 0x57
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
    _emit 0xC7
    _emit 0xE8
    _emit 0xD5
    _emit 0x36
    _emit 0x02
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
    _emit 0xC7
    _emit 0xE8
    _emit 0xBA
    _emit 0x36
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x47
    _emit 0x04
    _emit 0x3B
    _emit 0x07
    _emit 0x74
    _emit 0x34
    _emit 0xBA
    _emit 0x0A
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xC9
    _emit 0x2A
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x8E
    _emit 0xCC
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
    _emit 0x08
    _emit 0x07
    _emit 0x02
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x1F
    _emit 0x8B
    _emit 0x96
    _emit 0xCC
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x83
    _emit 0xC3
    _emit 0x07
    _emit 0x52
    _emit 0xE8
    _emit 0x85
    _emit 0x06
    _emit 0x02
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x3F
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0x05
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x02
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x66
    _emit 0x83
    _emit 0x3F
    _emit 0x04
    _emit 0x0F
    _emit 0x84
    _emit 0x4F
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0xBA
    _emit 0x09
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x80
    _emit 0x2A
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0x47
    _emit 0x08
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x13
    _emit 0x83
    _emit 0xF8
    _emit 0x04
    _emit 0x7F
    _emit 0x05
    _emit 0x48
    _emit 0x89
    _emit 0x07
    _emit 0xEB
    _emit 0x0F
    _emit 0xB8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x07
    _emit 0xEB
    _emit 0x06
    _emit 0xC7
    _emit 0x07
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0xCC
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0xBB
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x9F
    _emit 0x06
    _emit 0x02
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x1F
    _emit 0x66
    _emit 0x83
    _emit 0xC3
    _emit 0x07
    _emit 0x8B
    _emit 0x8E
    _emit 0xCC
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0x1C
    _emit 0x06
    _emit 0x02
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0xD6
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
    _emit 0x83
    _emit 0x3F
    _emit 0x01
    _emit 0x75
    _emit 0x1B
    _emit 0x6A
    _emit 0x3C
    _emit 0x8D
    _emit 0x8E
    _emit 0xB4
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x8B
    _emit 0x63
    _emit 0xFC
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0A
    _emit 0xBA
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x0D
    _emit 0x2A
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
    _emit 0x46
    _emit 0x8B
    _emit 0x07
    _emit 0x33
    _emit 0xC9
    _emit 0x2B
    _emit 0xC1
    _emit 0x74
    _emit 0x1F
    _emit 0x83
    _emit 0xE8
    _emit 0x01
    _emit 0x75
    _emit 0x39
    _emit 0x80
    _emit 0x3D
    _emit 0xD1
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x05
    _emit 0x7D
    _emit 0x08
    _emit 0x88
    _emit 0x0D
    _emit 0xD1
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xEB
    _emit 0x21
    _emit 0x80
    _emit 0x05
    _emit 0xD1
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xFB
    _emit 0xEB
    _emit 0x18
    _emit 0x80
    _emit 0x3D
    _emit 0xD0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x05
    _emit 0x7D
    _emit 0x08
    _emit 0x88
    _emit 0x0D
    _emit 0xD0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xEB
    _emit 0x07
    _emit 0x80
    _emit 0x05
    _emit 0xD0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xFB
    _emit 0x8B
    _emit 0xDE
    _emit 0xE8
    _emit 0xD5
    _emit 0x12
    _emit 0x00
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
    _emit 0x43
    _emit 0x8B
    _emit 0x07
    _emit 0x83
    _emit 0xE8
    _emit 0x00
    _emit 0x74
    _emit 0x1E
    _emit 0x83
    _emit 0xE8
    _emit 0x01
    _emit 0x75
    _emit 0x37
    _emit 0xA0
    _emit 0xD1
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x04
    _emit 0x05
    _emit 0x3C
    _emit 0x64
    _emit 0xA2
    _emit 0xD1
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x7E
    _emit 0x20
    _emit 0xC6
    _emit 0x05
    _emit 0xD1
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x64
    _emit 0xEB
    _emit 0x17
    _emit 0xA0
    _emit 0xD0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x04
    _emit 0x05
    _emit 0x3C
    _emit 0x64
    _emit 0xA2
    _emit 0xD0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x7E
    _emit 0x07
    _emit 0xC6
    _emit 0x05
    _emit 0xD0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x64
    _emit 0x8B
    _emit 0xDE
    _emit 0xE8
    _emit 0x80
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0x05
    _emit 0xC4
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x0F
    _emit 0x84
    _emit 0xCE
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x3F
    _emit 0x83
    _emit 0xEF
    _emit 0x02
    _emit 0x74
    _emit 0x53
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x74
    _emit 0x1F
    _emit 0x83
    _emit 0xEF
    _emit 0x01
    _emit 0x0F
    _emit 0x85
    _emit 0xB9
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x96
    _emit 0xCC
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x52
    _emit 0xBB
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x0A
    _emit 0x05
    _emit 0x02
    _emit 0x00
    _emit 0x8D
    _emit 0x53
    _emit 0x03
    _emit 0xEB
    _emit 0x43
    _emit 0x8B
    _emit 0xDE
    _emit 0xC6
    _emit 0x05
    _emit 0xD0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x64
    _emit 0xC6
    _emit 0x05
    _emit 0xD1
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x50
    _emit 0xC6
    _emit 0x05
    _emit 0xD2
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x29
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0xBA
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xFF
    _emit 0x28
    _emit 0x01
    _emit 0x00
    _emit 0x5F
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
    _emit 0x8B
    _emit 0x86
    _emit 0xCC
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0xBB
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xC5
    _emit 0x04
    _emit 0x02
    _emit 0x00
    _emit 0x8D
    _emit 0x53
    _emit 0x01
    _emit 0xE8
    _emit 0xDD
    _emit 0x28
    _emit 0x01
    _emit 0x00
    _emit 0xB9
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x81
    _emit 0xDA
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
    _emit 0x83
    _emit 0xBE
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x0A
    _emit 0x7C
    _emit 0x3D
    _emit 0x8B
    _emit 0x46
    _emit 0x28
    _emit 0x83
    _emit 0xE8
    _emit 0x02
    _emit 0x8D
    _emit 0x7E
    _emit 0x28
    _emit 0x74
    _emit 0x1F
    _emit 0x83
    _emit 0xE8
    _emit 0x02
    _emit 0x75
    _emit 0x2D
    _emit 0x8D
    _emit 0x50
    _emit 0x01
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xF5
    _emit 0xD9
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0x4E
    _emit 0x34
    _emit 0x02
    _emit 0x00
    _emit 0x5F
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
    _emit 0xBA
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xD9
    _emit 0xD9
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0xF2
    _emit 0x33
    _emit 0x02
    _emit 0x00
    _emit 0x5F
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5B
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
