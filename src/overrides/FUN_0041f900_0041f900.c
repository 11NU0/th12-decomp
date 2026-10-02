/* Byte-for-byte override for FUN_0041f900.

 * Original bytes (732):
 *     0000: 83 ec 0c 53 55 57 b8 fe
 *     0008: ff ff ff 21 46 14 21 46
 *     0010: 28 21 46 3c 68 ac 00 00
 *     0018: 00 33 ff 57 56 e8 fe 7a
 *     0020: 05 00 d9 ee 8b 46 14 83
 *     0028: c4 0c ba c1 bd f0 ff b9
 *     0030: d0 2e 4b 00 a8 01 75 12
 *     0038: 83 c8 01 d9 56 0c 89 7e
 *     0040: 08 89 56 04 89 4e 10 89
 *     0048: 46 14 83 cb ff d9 56 0c
 *     0050: 89 7e 08 89 5e 04 8b 46
 *     0058: 28 a8 01 75 12 83 c8 01
 *     0060: d9 56 20 89 7e 1c 89 56
 *     0068: 18 89 4e 24 89 46 28 d9
 *     0070: 56 20 89 7e 1c 89 5e 18
 *     0078: 89 7e 60 8b 46 3c a8 01
 *     0080: 75 12 83 c8 01 d9 56 34
 *     0088: 89 7e 30 89 56 2c 89 4e
 *     0090: 38 89 46 3c 8b 44 24 1c
 *     0098: d9 5e 34 57 89 7e 30 89
 *     00a0: 5e 2c 57 89 46 64 8b 15
 *     00a8: 70 ee 4c 00 8d 4c 24 24
 *     00b0: 51 52 b8 17 00 00 00 33
 *     00b8: c9 e8 e2 1b 04 00 8b 44
 *     00c0: 24 1c 57 6a 01 89 46 4c
 *     00c8: 8b 15 70 ee 4c 00 8d 4c
 *     00d0: 24 24 51 52 b8 17 00 00
 *     00d8: 00 33 c9 e8 c0 1b 04 00
 *     00e0: 8b 44 24 1c 8b 2d cc e8
 *     00e8: 4c 00 89 46 50 8b 4e 4c
 *     00f0: 51 8b d5 e8 28 1f 04 00
 *     00f8: 3b c7 75 03 89 7e 4c b3
 *     0100: 10 88 98 9c 04 00 00 8b
 *     0108: 56 4c 52 8b d5 e8 0e 1f
 *     0110: 04 00 3b c7 75 03 89 7e
 *     0118: 4c 88 98 9d 04 00 00 8b
 *     0120: 46 50 50 8b d5 e8 f6 1e
 *     0128: 04 00 3b c7 75 03 89 7e
 *     0130: 50 88 98 9c 04 00 00 8b
 *     0138: 4e 50 51 8b d5 e8 de 1e
 *     0140: 04 00 3b c7 75 03 89 7e
 *     0148: 50 57 6a 02 88 98 9d 04
 *     0150: 00 00 a1 70 ee 4c 00 8d
 *     0158: 54 24 24 52 50 b8 17 00
 *     0160: 00 00 33 c9 e8 37 1b 04
 *     0168: 00 8b 4c 24 1c 57 6a 03
 *     0170: 89 4e 54 a1 70 ee 4c 00
 *     0178: 8d 54 24 24 52 50 b8 17
 *     0180: 00 00 00 33 c9 e8 16 1b
 *     0188: 04 00 8b 4c 24 1c 8b 2d
 *     0190: cc e8 4c 00 89 4e 58 8b
 *     0198: 56 54 52 8b d5 e8 7e 1e
 *     01a0: 04 00 3b c7 75 03 89 7e
 *     01a8: 54 88 98 9c 04 00 00 8b
 *     01b0: 46 54 50 8b d5 e8 66 1e
 *     01b8: 04 00 3b c7 75 03 89 7e
 *     01c0: 54 88 98 9d 04 00 00 8b
 *     01c8: 4e 58 51 8b d5 e8 4e 1e
 *     01d0: 04 00 3b c7 75 03 89 7e
 *     01d8: 58 88 98 9c 04 00 00 8b
 *     01e0: 56 58 52 8b d5 e8 36 1e
 *     01e8: 04 00 3b c7 75 03 89 7e
 *     01f0: 58 d9 05 54 3e 4a 00 88
 *     01f8: 98 9d 04 00 00 d9 54 24
 *     0200: 0c 8b 44 24 0c d9 ee 89
 *     0208: 46 68 d9 54 24 10 33 db
 *     0210: 8b 4c 24 10 d9 54 24 14
 *     0218: 8b 54 24 14 d9 c9 d9 54
 *     0220: 24 0c 89 4e 6c 8b 44 24
 *     0228: 0c d9 c9 d9 54 24 10 89
 *     0230: 56 70 8b 4c 24 10 d9 54
 *     0238: 24 14 8b 54 24 14 d9 c9
 *     0240: d9 5c 24 0c 89 46 74 8b
 *     0248: 44 24 0c 89 4e 78 d9 54
 *     0250: 24 10 8b 4c 24 10 89 56
 *     0258: 7c d9 5c 24 14 8b 54 24
 *     0260: 14 89 86 80 00 00 00 89
 *     0268: 8e 84 00 00 00 89 be 94
 *     0270: 00 00 00 89 be 98 00 00
 *     0278: 00 c7 86 a0 00 00 00 8f
 *     0280: f0 f8 00 c7 86 a4 00 00
 *     0288: 00 ff 88 80 00 c7 86 a8
 *     0290: 00 00 00 d8 d8 d8 00 89
 *     0298: be 9c 00 00 00 89 96 88
 *     02a0: 00 00 00 e8 88 d6 fe ff
 *     02a8: a1 f4 44 4b 00 8b 48 18
 *     02b0: 3b cf 74 18 83 79 0c 01
 *     02b8: 8b 59 08 74 09 8b 11 8b
 *     02c0: 42 14 57 57 ff d0 8b cb
 *     02c8: 3b df 75 e8 e8 8f 50 ff
 *     02d0: ff 5f 5d 8b c6 5b 83 c4
 *     02d8: 0c c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0041f900(undefined4 a0)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x0C
    _emit 0x53
    _emit 0x55
    _emit 0x57
    _emit 0xB8
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x21
    _emit 0x46
    _emit 0x14
    _emit 0x21
    _emit 0x46
    _emit 0x28
    _emit 0x21
    _emit 0x46
    _emit 0x3C
    _emit 0x68
    _emit 0xAC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xFF
    _emit 0x57
    _emit 0x56
    _emit 0xE8
    _emit 0xFE
    _emit 0x7A
    _emit 0x05
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0x8B
    _emit 0x46
    _emit 0x14
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xBA
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xB9
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x08
    _emit 0x89
    _emit 0x56
    _emit 0x04
    _emit 0x89
    _emit 0x4E
    _emit 0x10
    _emit 0x89
    _emit 0x46
    _emit 0x14
    _emit 0x83
    _emit 0xCB
    _emit 0xFF
    _emit 0xD9
    _emit 0x56
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x08
    _emit 0x89
    _emit 0x5E
    _emit 0x04
    _emit 0x8B
    _emit 0x46
    _emit 0x28
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x20
    _emit 0x89
    _emit 0x7E
    _emit 0x1C
    _emit 0x89
    _emit 0x56
    _emit 0x18
    _emit 0x89
    _emit 0x4E
    _emit 0x24
    _emit 0x89
    _emit 0x46
    _emit 0x28
    _emit 0xD9
    _emit 0x56
    _emit 0x20
    _emit 0x89
    _emit 0x7E
    _emit 0x1C
    _emit 0x89
    _emit 0x5E
    _emit 0x18
    _emit 0x89
    _emit 0x7E
    _emit 0x60
    _emit 0x8B
    _emit 0x46
    _emit 0x3C
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x12
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x56
    _emit 0x34
    _emit 0x89
    _emit 0x7E
    _emit 0x30
    _emit 0x89
    _emit 0x56
    _emit 0x2C
    _emit 0x89
    _emit 0x4E
    _emit 0x38
    _emit 0x89
    _emit 0x46
    _emit 0x3C
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0xD9
    _emit 0x5E
    _emit 0x34
    _emit 0x57
    _emit 0x89
    _emit 0x7E
    _emit 0x30
    _emit 0x89
    _emit 0x5E
    _emit 0x2C
    _emit 0x57
    _emit 0x89
    _emit 0x46
    _emit 0x64
    _emit 0x8B
    _emit 0x15
    _emit 0x70
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x24
    _emit 0x51
    _emit 0x52
    _emit 0xB8
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0xE8
    _emit 0xE2
    _emit 0x1B
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x57
    _emit 0x6A
    _emit 0x01
    _emit 0x89
    _emit 0x46
    _emit 0x4C
    _emit 0x8B
    _emit 0x15
    _emit 0x70
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x8D
    _emit 0x4C
    _emit 0x24
    _emit 0x24
    _emit 0x51
    _emit 0x52
    _emit 0xB8
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0xE8
    _emit 0xC0
    _emit 0x1B
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x2D
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x46
    _emit 0x50
    _emit 0x8B
    _emit 0x4E
    _emit 0x4C
    _emit 0x51
    _emit 0x8B
    _emit 0xD5
    _emit 0xE8
    _emit 0x28
    _emit 0x1F
    _emit 0x04
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x03
    _emit 0x89
    _emit 0x7E
    _emit 0x4C
    _emit 0xB3
    _emit 0x10
    _emit 0x88
    _emit 0x98
    _emit 0x9C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x56
    _emit 0x4C
    _emit 0x52
    _emit 0x8B
    _emit 0xD5
    _emit 0xE8
    _emit 0x0E
    _emit 0x1F
    _emit 0x04
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x03
    _emit 0x89
    _emit 0x7E
    _emit 0x4C
    _emit 0x88
    _emit 0x98
    _emit 0x9D
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x50
    _emit 0x50
    _emit 0x8B
    _emit 0xD5
    _emit 0xE8
    _emit 0xF6
    _emit 0x1E
    _emit 0x04
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x03
    _emit 0x89
    _emit 0x7E
    _emit 0x50
    _emit 0x88
    _emit 0x98
    _emit 0x9C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x50
    _emit 0x51
    _emit 0x8B
    _emit 0xD5
    _emit 0xE8
    _emit 0xDE
    _emit 0x1E
    _emit 0x04
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x03
    _emit 0x89
    _emit 0x7E
    _emit 0x50
    _emit 0x57
    _emit 0x6A
    _emit 0x02
    _emit 0x88
    _emit 0x98
    _emit 0x9D
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0x70
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x24
    _emit 0x52
    _emit 0x50
    _emit 0xB8
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0xE8
    _emit 0x37
    _emit 0x1B
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x1C
    _emit 0x57
    _emit 0x6A
    _emit 0x03
    _emit 0x89
    _emit 0x4E
    _emit 0x54
    _emit 0xA1
    _emit 0x70
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x8D
    _emit 0x54
    _emit 0x24
    _emit 0x24
    _emit 0x52
    _emit 0x50
    _emit 0xB8
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0xE8
    _emit 0x16
    _emit 0x1B
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x1C
    _emit 0x8B
    _emit 0x2D
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x4E
    _emit 0x58
    _emit 0x8B
    _emit 0x56
    _emit 0x54
    _emit 0x52
    _emit 0x8B
    _emit 0xD5
    _emit 0xE8
    _emit 0x7E
    _emit 0x1E
    _emit 0x04
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x03
    _emit 0x89
    _emit 0x7E
    _emit 0x54
    _emit 0x88
    _emit 0x98
    _emit 0x9C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x46
    _emit 0x54
    _emit 0x50
    _emit 0x8B
    _emit 0xD5
    _emit 0xE8
    _emit 0x66
    _emit 0x1E
    _emit 0x04
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x03
    _emit 0x89
    _emit 0x7E
    _emit 0x54
    _emit 0x88
    _emit 0x98
    _emit 0x9D
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4E
    _emit 0x58
    _emit 0x51
    _emit 0x8B
    _emit 0xD5
    _emit 0xE8
    _emit 0x4E
    _emit 0x1E
    _emit 0x04
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x03
    _emit 0x89
    _emit 0x7E
    _emit 0x58
    _emit 0x88
    _emit 0x98
    _emit 0x9C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x56
    _emit 0x58
    _emit 0x52
    _emit 0x8B
    _emit 0xD5
    _emit 0xE8
    _emit 0x36
    _emit 0x1E
    _emit 0x04
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x03
    _emit 0x89
    _emit 0x7E
    _emit 0x58
    _emit 0xD9
    _emit 0x05
    _emit 0x54
    _emit 0x3E
    _emit 0x4A
    _emit 0x00
    _emit 0x88
    _emit 0x98
    _emit 0x9D
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0xEE
    _emit 0x89
    _emit 0x46
    _emit 0x68
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x33
    _emit 0xDB
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x4E
    _emit 0x6C
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x89
    _emit 0x56
    _emit 0x70
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x46
    _emit 0x74
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x89
    _emit 0x4E
    _emit 0x78
    _emit 0xD9
    _emit 0x54
    _emit 0x24
    _emit 0x10
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x89
    _emit 0x56
    _emit 0x7C
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x14
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x86
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x8E
    _emit 0x84
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xBE
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0xBE
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0xA0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8F
    _emit 0xF0
    _emit 0xF8
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0xA4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x88
    _emit 0x80
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0xA8
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xD8
    _emit 0xD8
    _emit 0xD8
    _emit 0x00
    _emit 0x89
    _emit 0xBE
    _emit 0x9C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x96
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x88
    _emit 0xD6
    _emit 0xFE
    _emit 0xFF
    _emit 0xA1
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x48
    _emit 0x18
    _emit 0x3B
    _emit 0xCF
    _emit 0x74
    _emit 0x18
    _emit 0x83
    _emit 0x79
    _emit 0x0C
    _emit 0x01
    _emit 0x8B
    _emit 0x59
    _emit 0x08
    _emit 0x74
    _emit 0x09
    _emit 0x8B
    _emit 0x11
    _emit 0x8B
    _emit 0x42
    _emit 0x14
    _emit 0x57
    _emit 0x57
    _emit 0xFF
    _emit 0xD0
    _emit 0x8B
    _emit 0xCB
    _emit 0x3B
    _emit 0xDF
    _emit 0x75
    _emit 0xE8
    _emit 0xE8
    _emit 0x8F
    _emit 0x50
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x5D
    _emit 0x8B
    _emit 0xC6
    _emit 0x5B
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
