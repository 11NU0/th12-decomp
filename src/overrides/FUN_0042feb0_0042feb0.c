/* Byte-for-byte override for FUN_0042feb0.

 * Original bytes (542):
 *     0000: 53 55 8b 6c 24 0c 56 57
 *     0008: be b0 ea 4c 00 e8 8e 33
 *     0010: ff ff 6a 01 8d 44 24 18
 *     0018: 50 b8 0c 25 4a 00 e8 3d
 *     0020: 3d 03 00 b3 04 85 c0 75
 *     0028: 0a 68 2c 0b 4a 00 e9 a1
 *     0030: 00 00 00 8b f0 b9 0f 00
 *     0038: 00 00 bf b0 ea 4c 00 50
 *     0040: f3 a5 e8 4a ca 03 00 83
 *     0048: c4 04 80 3d ca ea 4c 00
 *     0050: 02 73 7c b0 03 38 05 cb
 *     0058: ea 4c 00 73 72 80 3d cc
 *     0060: ea 4c 00 02 73 69 38 1d
 *     0068: cd ea 4c 00 73 61 38 05
 *     0070: ce ea 4c 00 73 59 38 05
 *     0078: cf ea 4c 00 73 51 81 3d
 *     0080: b0 ea 4c 00 01 00 12 00
 *     0088: 75 45 83 7c 24 14 3c 75
 *     0090: 3e 8b 0d b4 ea 4c 00 8b
 *     0098: 15 b8 ea 4c 00 a1 bc ea
 *     00a0: 4c 00 89 0d ec 49 4d 00
 *     00a8: 8b 0d c0 ea 4c 00 89 15
 *     00b0: f0 49 4d 00 66 8b 15 c4
 *     00b8: ea 4c 00 a3 f4 49 4d 00
 *     00c0: 89 0d f8 49 4d 00 66 89
 *     00c8: 15 fc 49 4d 00 eb 1c 68
 *     00d0: 60 0b 4a 00 b9 c8 0e 4b
 *     00d8: 00 e8 92 42 03 00 83 c4
 *     00e0: 04 be b0 ea 4c 00 e8 b5
 *     00e8: 32 ff ff c7 85 7c 05 00
 *     00f0: 00 00 00 00 00 84 9d 00
 *     00f8: 02 00 00 74 12 68 94 0b
 *     0100: 4a 00 b9 c8 0e 4b 00 e8
 *     0108: 64 42 03 00 83 c4 04 f6
 *     0110: 85 00 02 00 00 01 74 12
 *     0118: 68 b0 0b 4a 00 b9 c8 0e
 *     0120: 4b 00 e8 49 42 03 00 83
 *     0128: c4 04 83 bd 14 01 00 00
 *     0130: 00 74 12 68 d8 0b 4a 00
 *     0138: b9 c8 0e 4b 00 e8 2e 42
 *     0140: 03 00 83 c4 04 f6 85 00
 *     0148: 02 00 00 02 74 12 68 f8
 *     0150: 0b 4a 00 b9 c8 0e 4b 00
 *     0158: e8 13 42 03 00 83 c4 04
 *     0160: f6 85 00 02 00 00 08 74
 *     0168: 12 68 20 0c 4a 00 b9 c8
 *     0170: 0e 4b 00 e8 f8 41 03 00
 *     0178: 83 c4 04 f6 85 00 02 00
 *     0180: 00 10 74 12 68 58 0c 4a
 *     0188: 00 b9 c8 0e 4b 00 e8 dd
 *     0190: 41 03 00 83 c4 04 f6 85
 *     0198: 00 02 00 00 20 74 1c 68
 *     01a0: 78 0c 4a 00 b9 c8 0e 4b
 *     01a8: 00 e8 c2 41 03 00 83 c4
 *     01b0: 04 c7 05 64 ee 4c 00 01
 *     01b8: 00 00 00 f6 85 00 02 00
 *     01c0: 00 40 74 12 68 90 0c 4a
 *     01c8: 00 b9 c8 0e 4b 00 e8 9d
 *     01d0: 41 03 00 83 c4 04 68 b0
 *     01d8: ea 4c 00 bb 3c 00 00 00
 *     01e0: bf 0c 25 4a 00 e8 e6 3d
 *     01e8: 03 00 85 c0 74 27 57 68
 *     01f0: b4 0c 4a 00 bf c8 0e 4b
 *     01f8: 00 e8 52 42 03 00 68 d8
 *     0200: 0c 4a 00 e8 48 42 03 00
 *     0208: 83 c4 0c 5f 5e 5d 83 c8
 *     0210: ff 5b c2 04 00 5f 5e 5d
 *     0218: 33 c0 5b c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0042feb0(size_t a0)
{
  __asm {
    _emit 0x53
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x0C
    _emit 0x56
    _emit 0x57
    _emit 0xBE
    _emit 0xB0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x8E
    _emit 0x33
    _emit 0xFF
    _emit 0xFF
    _emit 0x6A
    _emit 0x01
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x50
    _emit 0xB8
    _emit 0x0C
    _emit 0x25
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x3D
    _emit 0x3D
    _emit 0x03
    _emit 0x00
    _emit 0xB3
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x0A
    _emit 0x68
    _emit 0x2C
    _emit 0x0B
    _emit 0x4A
    _emit 0x00
    _emit 0xE9
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0xB9
    _emit 0x0F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBF
    _emit 0xB0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x50
    _emit 0xF3
    _emit 0xA5
    _emit 0xE8
    _emit 0x4A
    _emit 0xCA
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x80
    _emit 0x3D
    _emit 0xCA
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x02
    _emit 0x73
    _emit 0x7C
    _emit 0xB0
    _emit 0x03
    _emit 0x38
    _emit 0x05
    _emit 0xCB
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x73
    _emit 0x72
    _emit 0x80
    _emit 0x3D
    _emit 0xCC
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x02
    _emit 0x73
    _emit 0x69
    _emit 0x38
    _emit 0x1D
    _emit 0xCD
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x73
    _emit 0x61
    _emit 0x38
    _emit 0x05
    _emit 0xCE
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x73
    _emit 0x59
    _emit 0x38
    _emit 0x05
    _emit 0xCF
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x73
    _emit 0x51
    _emit 0x81
    _emit 0x3D
    _emit 0xB0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x12
    _emit 0x00
    _emit 0x75
    _emit 0x45
    _emit 0x83
    _emit 0x7C
    _emit 0x24
    _emit 0x14
    _emit 0x3C
    _emit 0x75
    _emit 0x3E
    _emit 0x8B
    _emit 0x0D
    _emit 0xB4
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0xB8
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xA1
    _emit 0xBC
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x0D
    _emit 0xEC
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0xC0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x15
    _emit 0xF0
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x66
    _emit 0x8B
    _emit 0x15
    _emit 0xC4
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xA3
    _emit 0xF4
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x89
    _emit 0x0D
    _emit 0xF8
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0x66
    _emit 0x89
    _emit 0x15
    _emit 0xFC
    _emit 0x49
    _emit 0x4D
    _emit 0x00
    _emit 0xEB
    _emit 0x1C
    _emit 0x68
    _emit 0x60
    _emit 0x0B
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x92
    _emit 0x42
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xBE
    _emit 0xB0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xB5
    _emit 0x32
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x85
    _emit 0x7C
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x84
    _emit 0x9D
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x12
    _emit 0x68
    _emit 0x94
    _emit 0x0B
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x64
    _emit 0x42
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xF6
    _emit 0x85
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x74
    _emit 0x12
    _emit 0x68
    _emit 0xB0
    _emit 0x0B
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x49
    _emit 0x42
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x83
    _emit 0xBD
    _emit 0x14
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x12
    _emit 0x68
    _emit 0xD8
    _emit 0x0B
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x2E
    _emit 0x42
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xF6
    _emit 0x85
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x02
    _emit 0x74
    _emit 0x12
    _emit 0x68
    _emit 0xF8
    _emit 0x0B
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x13
    _emit 0x42
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xF6
    _emit 0x85
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x74
    _emit 0x12
    _emit 0x68
    _emit 0x20
    _emit 0x0C
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xF8
    _emit 0x41
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xF6
    _emit 0x85
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x10
    _emit 0x74
    _emit 0x12
    _emit 0x68
    _emit 0x58
    _emit 0x0C
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xDD
    _emit 0x41
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xF6
    _emit 0x85
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x20
    _emit 0x74
    _emit 0x1C
    _emit 0x68
    _emit 0x78
    _emit 0x0C
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xC2
    _emit 0x41
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xC7
    _emit 0x05
    _emit 0x64
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0x85
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x40
    _emit 0x74
    _emit 0x12
    _emit 0x68
    _emit 0x90
    _emit 0x0C
    _emit 0x4A
    _emit 0x00
    _emit 0xB9
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x9D
    _emit 0x41
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x68
    _emit 0xB0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xBB
    _emit 0x3C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xBF
    _emit 0x0C
    _emit 0x25
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0xE6
    _emit 0x3D
    _emit 0x03
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x27
    _emit 0x57
    _emit 0x68
    _emit 0xB4
    _emit 0x0C
    _emit 0x4A
    _emit 0x00
    _emit 0xBF
    _emit 0xC8
    _emit 0x0E
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x52
    _emit 0x42
    _emit 0x03
    _emit 0x00
    _emit 0x68
    _emit 0xD8
    _emit 0x0C
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x48
    _emit 0x42
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0x33
    _emit 0xC0
    _emit 0x5B
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
