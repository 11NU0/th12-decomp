/* Byte-for-byte override for FUN_0042f200.

 * Original bytes (141):
 *     0000: 83 ec 10 83 3d 94 ea 4c
 *     0008: 00 00 74 78 56 8b 35 cc
 *     0010: e8 4c 00 e8 a8 b1 02 00
 *     0018: 8b 15 98 ea 4c 00 a1 f0
 *     0020: e8 4c 00 8b 08 52 6a 00
 *     0028: 50 8b 81 94 00 00 00 ff
 *     0030: d0 d9 e8 a1 e8 ed 4c 00
 *     0038: 8b 15 f0 ed 4c 00 8b 0d
 *     0040: ec ed 4c 00 03 d0 89 44
 *     0048: 24 04 a1 f4 ed 4c 00 03
 *     0050: c1 89 44 24 10 a1 f0 e8
 *     0058: 4c 00 6a 00 89 54 24 10
 *     0060: 8b 15 a8 f2 4c 00 89 4c
 *     0068: 24 0c 8b 08 51 d9 1c 24
 *     0070: 52 6a 03 8d 54 24 14 52
 *     0078: 6a 01 50 8b 81 ac 00 00
 *     0080: 00 ff d0 5e b8 01 00 00
 *     0088: 00 83 c4 10 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0042f200(void)
{
  __asm {
    _emit 0x83
    _emit 0xEC
    _emit 0x10
    _emit 0x83
    _emit 0x3D
    _emit 0x94
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x78
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xA8
    _emit 0xB1
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x98
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x52
    _emit 0x6A
    _emit 0x00
    _emit 0x50
    _emit 0x8B
    _emit 0x81
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0xD9
    _emit 0xE8
    _emit 0xA1
    _emit 0xE8
    _emit 0xED
    _emit 0x4C
    _emit 0x00
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
    _emit 0x04
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
    _emit 0x10
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
    _emit 0x10
    _emit 0x8B
    _emit 0x15
    _emit 0xA8
    _emit 0xF2
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x4C
    _emit 0x24
    _emit 0x0C
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
    _emit 0x14
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
    _emit 0x5E
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0xC3
  }
  __assume(0);
}
