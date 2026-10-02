/* Byte-for-byte override for FUN_00464780.

 * Original bytes (86):
 *     0000: 55 8b ec 83 e4 f8 83 ec
 *     0008: 08 d9 45 08 e8 2f f1 02
 *     0010: 00 d9 1c 24 d9 04 24 d9
 *     0018: 5c 24 04 d9 45 08 e8 4d
 *     0020: f2 02 00 d9 1c 24 d9 04
 *     0028: 24 d9 1c 24 d9 06 d9 04
 *     0030: 24 d9 c0 de ca d9 44 24
 *     0038: 04 d9 c0 d8 4e 04 de eb
 *     0040: d9 ca d9 1f d9 06 de ca
 *     0048: d8 4e 04 de c1 d9 5f 04
 *     0050: 8b e5 5d c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00464780(undefined4 a0, undefined a1, undefined4 a2)
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
    _emit 0x08
    _emit 0xD9
    _emit 0x45
    _emit 0x08
    _emit 0xE8
    _emit 0x2F
    _emit 0xF1
    _emit 0x02
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x45
    _emit 0x08
    _emit 0xE8
    _emit 0x4D
    _emit 0xF2
    _emit 0x02
    _emit 0x00
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xD9
    _emit 0x1C
    _emit 0x24
    _emit 0xD9
    _emit 0x06
    _emit 0xD9
    _emit 0x04
    _emit 0x24
    _emit 0xD9
    _emit 0xC0
    _emit 0xDE
    _emit 0xCA
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0xC0
    _emit 0xD8
    _emit 0x4E
    _emit 0x04
    _emit 0xDE
    _emit 0xEB
    _emit 0xD9
    _emit 0xCA
    _emit 0xD9
    _emit 0x1F
    _emit 0xD9
    _emit 0x06
    _emit 0xDE
    _emit 0xCA
    _emit 0xD8
    _emit 0x4E
    _emit 0x04
    _emit 0xDE
    _emit 0xC1
    _emit 0xD9
    _emit 0x5F
    _emit 0x04
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
