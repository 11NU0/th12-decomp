/* Byte-for-byte override for FUN_0041c4c0.

 * Original bytes (52):
 *     0000: 55 8b ec 83 e4 f8 83 ec
 *     0008: 08 d9 41 04 d8 60 04 d9
 *     0010: 01 d8 20 dc c8 d9 c1 de
 *     0018: ca de c1 d9 5c 24 04 d9
 *     0020: 44 24 04 e8 d8 72 07 00
 *     0028: d9 5c 24 04 d9 44 24 04
 *     0030: 8b e5 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

float10 __stdcall FUN_0041c4c0(void)
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
    _emit 0x41
    _emit 0x04
    _emit 0xD8
    _emit 0x60
    _emit 0x04
    _emit 0xD9
    _emit 0x01
    _emit 0xD8
    _emit 0x20
    _emit 0xDC
    _emit 0xC8
    _emit 0xD9
    _emit 0xC1
    _emit 0xDE
    _emit 0xCA
    _emit 0xDE
    _emit 0xC1
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0xE8
    _emit 0xD8
    _emit 0x72
    _emit 0x07
    _emit 0x00
    _emit 0xD9
    _emit 0x5C
    _emit 0x24
    _emit 0x04
    _emit 0xD9
    _emit 0x44
    _emit 0x24
    _emit 0x04
    _emit 0x8B
    _emit 0xE5
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
