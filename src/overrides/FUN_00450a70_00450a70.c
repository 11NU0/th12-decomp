/* Byte-for-byte override for FUN_00450a70.

 * Original bytes (577):
 *     0000: 83 ec 30 33 c0 55 56 57
 *     0008: 6a 04 89 44 24 14 89 44
 *     0010: 24 18 89 44 24 1c 89 44
 *     0018: 24 20 89 44 24 24 89 44
 *     0020: 24 28 89 44 24 2c 89 44
 *     0028: 24 30 89 44 24 34 89 44
 *     0030: 24 38 ff 15 10 80 49 00
 *     0038: 68 00 7f 00 00 6a 00 89
 *     0040: 44 24 34 ff 15 7c 82 49
 *     0048: 00 89 44 24 28 8d 44 24
 *     0050: 10 50 89 5c 24 24 c7 44
 *     0058: 24 18 00 fe 44 00 c7 05
 *     0060: fc f3 4c 00 01 00 00 00
 *     0068: c7 05 00 f4 4c 00 00 00
 *     0070: 00 00 c7 44 24 38 94 26
 *     0078: 4a 00 ff 15 10 82 49 00
 *     0080: 0f b6 0d cd ea 4c 00 a1
 *     0088: 28 f4 4c 00 03 c9 03 c9
 *     0090: 33 c8 ba 0c 00 00 00 23
 *     0098: ca 33 c1 84 c2 b9 00 00
 *     00a0: 00 00 0f 95 c1 80 3d ce
 *     00a8: ea 4c 00 00 89 0d fc e9
 *     00b0: 4c 00 75 0e 80 3d d3 ea
 *     00b8: 4c 00 02 75 05 83 c8 10
 *     00c0: eb 03 83 e0 ef 33 ff be
 *     00c8: 0f 00 00 00 bd 08 00 00
 *     00d0: 00 a3 28 f4 4c 00 89 35
 *     00d8: 6c f4 4c 00 89 35 70 f4
 *     00e0: 4c 00 89 3d 74 f4 4c 00
 *     00e8: 89 15 78 f4 4c 00 89 15
 *     00f0: 7c f4 4c 00 89 3d 80 f4
 *     00f8: 4c 00 89 15 84 f4 4c 00
 *     0100: 89 15 88 f4 4c 00 89 3d
 *     0108: 8c f4 4c 00 89 2d 90 f4
 *     0110: 4c 00 89 2d 94 f4 4c 00
 *     0118: 89 3d 98 f4 4c 00 89 3d
 *     0120: 68 f4 4c 00 3b cf 75 2b
 *     0128: 57 53 57 57 68 e0 01 00
 *     0130: 00 68 80 02 00 00 57 57
 *     0138: 68 00 00 00 90 68 9c 26
 *     0140: 4a 00 68 94 26 4a 00 57
 *     0148: ff 15 50 82 49 00 e9 8a
 *     0150: 00 00 00 8b 3d 78 82 49
 *     0158: 00 c1 e8 02 83 e0 03 6a
 *     0160: 07 83 f8 03 75 15 ff d7
 *     0168: 55 8d b4 00 00 05 00 00
 *     0170: ff d7 8d ac 00 c0 03 00
 *     0178: 00 eb 2d 83 f8 02 75 15
 *     0180: ff d7 55 8d b4 00 c0 03
 *     0188: 00 00 ff d7 8d ac 00 d0
 *     0190: 02 00 00 eb 13 ff d7 55
 *     0198: 8d b4 00 80 02 00 00 ff
 *     01a0: d7 8d ac 00 e0 01 00 00
 *     01a8: 6a 04 ff d7 8b 15 dc ea
 *     01b0: 4c 00 6a 00 53 6a 00 6a
 *     01b8: 00 03 c5 50 a1 d8 ea 4c
 *     01c0: 00 56 52 50 68 00 00 0b
 *     01c8: 10 68 9c 26 4a 00 68 94
 *     01d0: 26 4a 00 6a 00 ff 15 50
 *     01d8: 82 49 00 33 ff 68 f8 e8
 *     01e0: 4c 00 50 a3 f0 f3 4c 00
 *     01e8: ff 15 30 82 49 00 a1 f0
 *     01f0: f3 4c 00 a3 40 e9 4c 00
 *     01f8: 3b c7 75 0c b8 01 00 00
 *     0200: 00 5f 5e 5d 83 c4 30 c3
 *     0208: 8b 35 38 82 49 00 57 68
 *     0210: 20 f0 00 00 68 12 01 00
 *     0218: 00 50 ff d6 6a 10 ff 15
 *     0220: 84 80 49 00 8b 0d f0 f3
 *     0228: 4c 00 57 68 20 f1 00 00
 *     0230: 68 12 01 00 00 51 ff d6
 *     0238: 5f 5e 33 c0 5d 83 c4 30
 *     0240: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00450a70(void)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x30
    _emit 0x33
    _emit 0xC0
    _emit 0x55
    _emit 0x56
    _emit 0x57
    _emit 0x6A
    _emit 0x04
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x14
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x1C
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x20
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x24
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x28
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x2C
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x30
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x34
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x38
    _emit 0xFF
    _emit 0x15
    _emit 0x10
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x68
    _emit 0x00
    _emit 0x7F
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x34
    _emit 0xFF
    _emit 0x15
    _emit 0x7C
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x28
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x50
    _emit 0x89
    _emit 0x5C
    _emit 0x24
    _emit 0x24
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x00
    _emit 0xFE
    _emit 0x44
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xFC
    _emit 0xF3
    _emit 0x4C
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0x00
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x38
    _emit 0x94
    _emit 0x26
    _emit 0x4A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x10
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x0F
    _emit 0xB6
    _emit 0x0D
    _emit 0xCD
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xA1
    _emit 0x28
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x03
    _emit 0xC9
    _emit 0x03
    _emit 0xC9
    _emit 0x33
    _emit 0xC8
    _emit 0xBA
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x23
    _emit 0xCA
    _emit 0x33
    _emit 0xC1
    _emit 0x84
    _emit 0xC2
    _emit 0xB9
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0x95
    _emit 0xC1
    _emit 0x80
    _emit 0x3D
    _emit 0xCE
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x0D
    _emit 0xFC
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0x75
    _emit 0x0E
    _emit 0x80
    _emit 0x3D
    _emit 0xD3
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x02
    _emit 0x75
    _emit 0x05
    _emit 0x83
    _emit 0xC8
    _emit 0x10
    _emit 0xEB
    _emit 0x03
    _emit 0x83
    _emit 0xE0
    _emit 0xEF
    _emit 0x33
    _emit 0xFF
    _emit 0xBE
    _emit 0x0F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBD
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xA3
    _emit 0x28
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0x6C
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x35
    _emit 0x70
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x74
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x78
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x7C
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x80
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x84
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0x88
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x8C
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x2D
    _emit 0x90
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x2D
    _emit 0x94
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x98
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x68
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x3B
    _emit 0xCF
    _emit 0x75
    _emit 0x2B
    _emit 0x57
    _emit 0x53
    _emit 0x57
    _emit 0x57
    _emit 0x68
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0x80
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x57
    _emit 0x68
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x90
    _emit 0x68
    _emit 0x9C
    _emit 0x26
    _emit 0x4A
    _emit 0x00
    _emit 0x68
    _emit 0x94
    _emit 0x26
    _emit 0x4A
    _emit 0x00
    _emit 0x57
    _emit 0xFF
    _emit 0x15
    _emit 0x50
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0xE9
    _emit 0x8A
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x3D
    _emit 0x78
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0xC1
    _emit 0xE8
    _emit 0x02
    _emit 0x83
    _emit 0xE0
    _emit 0x03
    _emit 0x6A
    _emit 0x07
    _emit 0x83
    _emit 0xF8
    _emit 0x03
    _emit 0x75
    _emit 0x15
    _emit 0xFF
    _emit 0xD7
    _emit 0x55
    _emit 0x8D
    _emit 0xB4
    _emit 0x00
    _emit 0x00
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD7
    _emit 0x8D
    _emit 0xAC
    _emit 0x00
    _emit 0xC0
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x2D
    _emit 0x83
    _emit 0xF8
    _emit 0x02
    _emit 0x75
    _emit 0x15
    _emit 0xFF
    _emit 0xD7
    _emit 0x55
    _emit 0x8D
    _emit 0xB4
    _emit 0x00
    _emit 0xC0
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD7
    _emit 0x8D
    _emit 0xAC
    _emit 0x00
    _emit 0xD0
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x13
    _emit 0xFF
    _emit 0xD7
    _emit 0x55
    _emit 0x8D
    _emit 0xB4
    _emit 0x00
    _emit 0x80
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD7
    _emit 0x8D
    _emit 0xAC
    _emit 0x00
    _emit 0xE0
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x04
    _emit 0xFF
    _emit 0xD7
    _emit 0x8B
    _emit 0x15
    _emit 0xDC
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x53
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x03
    _emit 0xC5
    _emit 0x50
    _emit 0xA1
    _emit 0xD8
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x56
    _emit 0x52
    _emit 0x50
    _emit 0x68
    _emit 0x00
    _emit 0x00
    _emit 0x0B
    _emit 0x10
    _emit 0x68
    _emit 0x9C
    _emit 0x26
    _emit 0x4A
    _emit 0x00
    _emit 0x68
    _emit 0x94
    _emit 0x26
    _emit 0x4A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x50
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x33
    _emit 0xFF
    _emit 0x68
    _emit 0xF8
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x50
    _emit 0xA3
    _emit 0xF0
    _emit 0xF3
    _emit 0x4C
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x30
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xF3
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0x40
    _emit 0xE9
    _emit 0x4C
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x0C
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x30
    _emit 0xC3
    _emit 0x8B
    _emit 0x35
    _emit 0x38
    _emit 0x82
    _emit 0x49
    _emit 0x00
    _emit 0x57
    _emit 0x68
    _emit 0x20
    _emit 0xF0
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0x12
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0xFF
    _emit 0xD6
    _emit 0x6A
    _emit 0x10
    _emit 0xFF
    _emit 0x15
    _emit 0x84
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0xF0
    _emit 0xF3
    _emit 0x4C
    _emit 0x00
    _emit 0x57
    _emit 0x68
    _emit 0x20
    _emit 0xF1
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0x12
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xFF
    _emit 0xD6
    _emit 0x5F
    _emit 0x5E
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0x83
    _emit 0xC4
    _emit 0x30
    _emit 0xC3
  }
  __assume(0);
}
