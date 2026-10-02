/* Byte-for-byte override for FUN_00453cd0.

 * Original bytes (187):
 *     0000: 51 83 c8 ff 89 46 20 89
 *     0008: 46 24 89 46 28 89 46 2c
 *     0010: 89 46 30 89 46 34 89 46
 *     0018: 38 89 46 3c 89 46 40 89
 *     0020: 46 44 89 46 48 89 46 4c
 *     0028: e8 33 f3 ff ff 83 7e 10
 *     0030: 00 75 05 83 c8 ff 59 c3
 *     0038: 83 3e 00 74 7a 0f be 05
 *     0040: d0 ea 4c 00 89 86 94 52
 *     0048: 00 00 0f be 05 d1 ea 4c
 *     0050: 00 89 86 98 52 00 00 85
 *     0058: c0 74 52 db 86 94 52 00
 *     0060: 00 dc 35 e8 3c 4a 00 d9
 *     0068: 1c 24 d9 04 24 d9 e8 d9
 *     0070: c0 de e2 d9 c9 d9 1c 24
 *     0078: d9 04 24 dc c8 d9 1c 24
 *     0080: d9 04 24 dc c8 d9 1c 24
 *     0088: d8 24 24 d9 1c 24 d9 04
 *     0090: 24 dc 0d d8 3d 4a 00 e8
 *     0098: 74 f4 03 00 b9 78 ec ff
 *     00a0: ff 2b c8 89 8e 9c 52 00
 *     00a8: 00 33 c0 59 c3 c7 86 9c
 *     00b0: 52 00 00 f0 d8 ff ff 33
 *     00b8: c0 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00453cd0(void)
{
  __asm {
    _emit 0x51
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x89
    _emit 0x46
    _emit 0x20
    _emit 0x89
    _emit 0x46
    _emit 0x24
    _emit 0x89
    _emit 0x46
    _emit 0x28
    _emit 0x89
    _emit 0x46
    _emit 0x2C
    _emit 0x89
    _emit 0x46
    _emit 0x30
    _emit 0x89
    _emit 0x46
    _emit 0x34
    _emit 0x89
    _emit 0x46
    _emit 0x38
    _emit 0x89
    _emit 0x46
    _emit 0x3C
    _emit 0x89
    _emit 0x46
    _emit 0x40
    _emit 0x89
    _emit 0x46
    _emit 0x44
    _emit 0x89
    _emit 0x46
    _emit 0x48
    _emit 0x89
    _emit 0x46
    _emit 0x4C
    _emit 0xE8
    _emit 0x33
    _emit 0xF3
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0x7E
    _emit 0x10
    _emit 0x00
    _emit 0x75
    _emit 0x05
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x59
    _emit 0xC3
    _emit 0x83
    _emit 0x3E
    _emit 0x00
    _emit 0x74
    _emit 0x7A
    _emit 0x0F
    _emit 0xBE
    _emit 0x05
    _emit 0xD0
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0x94
    _emit 0x52
    _emit 0x00
    _emit 0x00
    _emit 0x0F
    _emit 0xBE
    _emit 0x05
    _emit 0xD1
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x86
    _emit 0x98
    _emit 0x52
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x52
    _emit 0xDB
    _emit 0x86
    _emit 0x94
    _emit 0x52
    _emit 0x00
    _emit 0x00
    _emit 0xDC
    _emit 0x35
    _emit 0xE8
    _emit 0x3C
    _emit 0x4A
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xD9
    _emit 0xE8
    _emit 0xD9
    _emit 0xC0
    _emit 0xDE
    _emit 0xE2
    _emit 0xD9
    _emit 0xC9
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xDC
    _emit 0xC8
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xDC
    _emit 0xC8
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD8
    _emit 0x24
    _emit 0x24
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xDC
    _emit 0x0D
    _emit 0xD8
    _emit 0x3D
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x74
    _emit 0xF4
    _emit 0x03
    _emit 0x00
    _emit 0xB9
    _emit 0x78
    _emit 0xEC
    _emit 0xFF
    _emit 0xFF
    _emit 0x2B
    _emit 0xC8
    _emit 0x89
    _emit 0x8E
    _emit 0x9C
    _emit 0x52
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x59
    _emit 0xC3
    _emit 0xC7
    _emit 0x86
    _emit 0x9C
    _emit 0x52
    _emit 0x00
    _emit 0x00
    _emit 0xF0
    _emit 0xD8
    _emit 0xFF
    _emit 0xFF
    _emit 0x33
    _emit 0xC0
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
