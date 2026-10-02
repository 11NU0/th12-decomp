/* Byte-for-byte override for FUN_00421350.

 * Original bytes (210):
 *     0000: 83 ec 08 56 8b 35 e4 43
 *     0008: 4b 00 8b 8e 44 6d 00 00
 *     0010: 6a 00 6a 55 8d 44 24 10
 *     0018: 50 51 b8 17 00 00 00 33
 *     0020: c9 e8 2a 02 04 00 8b 54
 *     0028: 24 08 89 96 ac 6c 00 00
 *     0030: 8b 0d b0 0c 4b 00 69 c9
 *     0038: 40 42 0f 00 b8 67 66 66
 *     0040: 66 f7 e9 89 8e 48 6d 00
 *     0048: 00 a1 44 0c 4b 00 c1 fa
 *     0050: 02 8b ca c1 e9 1f 03 ca
 *     0058: 03 c1 3d 00 ca 9a 3b a3
 *     0060: 44 0c 4b 00 7c 0a c7 05
 *     0068: 44 0c 4b 00 ff c9 9a 3b
 *     0070: 81 8e 18 6d 00 00 00 02
 *     0078: 00 00 d9 ee 8b 86 2c 6d
 *     0080: 00 00 a8 01 75 2d 83 c8
 *     0088: 01 d9 96 24 6d 00 00 c7
 *     0090: 86 20 6d 00 00 00 00 00
 *     0098: 00 c7 86 1c 6d 00 00 c1
 *     00a0: bd f0 ff c7 86 28 6d 00
 *     00a8: 00 d0 2e 4b 00 89 86 2c
 *     00b0: 6d 00 00 d9 9e 24 6d 00
 *     00b8: 00 c7 86 20 6d 00 00 00
 *     00c0: 00 00 00 c7 86 1c 6d 00
 *     00c8: 00 ff ff ff ff 5e 83 c4
 *     00d0: 08 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00421350(void)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x08
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x8E
    _emit 0x44
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x55
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
    _emit 0x2A
    _emit 0x02
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x08
    _emit 0x89
    _emit 0x96
    _emit 0xAC
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0xB0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x69
    _emit 0xC9
    _emit 0x40
    _emit 0x42
    _emit 0x0F
    _emit 0x00
    _emit 0xB8
    _emit 0x67
    _emit 0x66
    _emit 0x66
    _emit 0x66
    _emit 0xF7
    _emit 0xE9
    _emit 0x89
    _emit 0x8E
    _emit 0x48
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xA1
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xC1
    _emit 0xFA
    _emit 0x02
    _emit 0x8B
    _emit 0xCA
    _emit 0xC1
    _emit 0xE9
    _emit 0x1F
    _emit 0x03
    _emit 0xCA
    _emit 0x03
    _emit 0xC1
    _emit 0x3D
    _emit 0x00
    _emit 0xCA
    _emit 0x9A
    _emit 0x3B
    _emit 0xA3
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x7C
    _emit 0x0A
    _emit 0xC7
    _emit 0x05
    _emit 0x44
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xFF
    _emit 0xC9
    _emit 0x9A
    _emit 0x3B
    _emit 0x81
    _emit 0x8E
    _emit 0x18
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0xEE
    _emit 0x8B
    _emit 0x86
    _emit 0x2C
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xA8
    _emit 0x01
    _emit 0x75
    _emit 0x2D
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xD9
    _emit 0x96
    _emit 0x24
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x20
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x1C
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xC1
    _emit 0xBD
    _emit 0xF0
    _emit 0xFF
    _emit 0xC7
    _emit 0x86
    _emit 0x28
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0x2C
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x9E
    _emit 0x24
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x20
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x86
    _emit 0x1C
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0xC3
  }
  __assume(0);
}
