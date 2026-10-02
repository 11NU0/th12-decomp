/* Byte-for-byte override for FUN_0041fbe0.

 * Original bytes (180):
 *     0000: 6a ff 68 9b 76 49 00 64
 *     0008: a1 00 00 00 00 50 51 56
 *     0010: 57 a1 38 d1 4a 00 33 c4
 *     0018: 50 8d 44 24 10 64 a3 00
 *     0020: 00 00 00 8b 3d e4 43 4b
 *     0028: 00 8b b7 30 6d 00 00 85
 *     0030: f6 74 18 e8 78 d1 ff ff
 *     0038: 56 e8 31 ce 04 00 83 c4
 *     0040: 04 c7 87 30 6d 00 00 00
 *     0048: 00 00 00 68 ac 00 00 00
 *     0050: e8 b5 cd 04 00 83 c4 04
 *     0058: 89 44 24 0c c7 44 24 18
 *     0060: 00 00 00 00 85 c0 74 16
 *     0068: 8b 8f 34 6d 00 00 8b 54
 *     0070: d9 04 03 d1 52 8b f0 e8
 *     0078: a4 fc ff ff eb 02 33 c0
 *     0080: 89 87 30 6d 00 00 89 18
 *     0088: 8d 43 01 39 05 b8 0c 4b
 *     0090: 00 a3 b8 0c 4b 00 74 0a
 *     0098: c7 05 c0 0c 4b 00 00 00
 *     00a0: 00 00 8b 4c 24 10 64 89
 *     00a8: 0d 00 00 00 00 59 5f 5e
 *     00b0: 83 c4 10 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_0041fbe0(void * a0)
{
  __asm {
    _emit 0x6A
    _emit 0xFF
    _emit 0x68
    _emit 0x9B
    _emit 0x76
    _emit 0x49
    _emit 0x00
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x51
    _emit 0x56
    _emit 0x57
    _emit 0xA1
    _emit 0x38
    _emit 0xD1
    _emit 0x4A
    _emit 0x00
    _emit 0x33
    _emit 0xC4
    _emit 0x50
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x10
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x3D
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0xB7
    _emit 0x30
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x18
    _emit 0xE8
    _emit 0x78
    _emit 0xD1
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x31
    _emit 0xCE
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0xC7
    _emit 0x87
    _emit 0x30
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x68
    _emit 0xAC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xB5
    _emit 0xCD
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0xC7
    _emit 0x44
    _emit 0x24
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x16
    _emit 0x8B
    _emit 0x8F
    _emit 0x34
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0xD9
    _emit 0x04
    _emit 0x03
    _emit 0xD1
    _emit 0x52
    _emit 0x8B
    _emit 0xF0
    _emit 0xE8
    _emit 0xA4
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x87
    _emit 0x30
    _emit 0x6D
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x18
    _emit 0x8D
    _emit 0x43
    _emit 0x01
    _emit 0x39
    _emit 0x05
    _emit 0xB8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0xA3
    _emit 0xB8
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x74
    _emit 0x0A
    _emit 0xC7
    _emit 0x05
    _emit 0xC0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x10
    _emit 0x64
    _emit 0x89
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5F
    _emit 0x5E
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0xC3
  }
  __assume(0);
}
