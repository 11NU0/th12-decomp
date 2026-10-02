/* Byte-for-byte override for FUN_00432960.

 * Original bytes (59):
 *     0000: a1 e8 44 4b 00 83 60 60
 *     0008: ef 57 e8 01 2d 00 00 6a
 *     0010: 00 6a 07 bf 4c 10 4a 00
 *     0018: b8 e8 f4 4c 00 e8 de 1f
 *     0020: 02 00 d9 86 d8 02 00 00
 *     0028: d9 1d d0 2e 4b 00 8b 86
 *     0030: 00 02 00 00 a3 68 f4 4c
 *     0038: 00 5f c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00432960(void)
{
  __asm {
    _emit 0xA1
    _emit 0xE8
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0x60
    _emit 0x60
    _emit 0xEF
    _emit 0x57
    _emit 0xE8
    _emit 0x01
    _emit 0x2D
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x07
    _emit 0xBF
    _emit 0x4C
    _emit 0x10
    _emit 0x4A
    _emit 0x00
    _emit 0xB8
    _emit 0xE8
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xDE
    _emit 0x1F
    _emit 0x02
    _emit 0x00
    _emit 0xD9
    _emit 0x86
    _emit 0xD8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xD9
    _emit 0x1D
    _emit 0xD0
    _emit 0x2E
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x86
    _emit 0x00
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xA3
    _emit 0x68
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x5F
    _emit 0xC3
  }
  __assume(0);
}
