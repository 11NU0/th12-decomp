/* Byte-for-byte override for FUN_00421740.

 * Original bytes (55):
 *     0000: 51 83 3d 40 ee 4c 00 08
 *     0008: 74 2b f6 05 e0 0c 4b 00
 *     0010: 20 75 22 8b 0d e4 43 4b
 *     0018: 00 8b 91 e4 6c 00 00 6a
 *     0020: 00 6a 00 8d 44 24 08 50
 *     0028: 52 b8 17 00 00 00 33 c9
 *     0030: e8 2b fe 03 00 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00421740(void)
{
  __asm {
    _emit 0x51
    _emit 0x83
    _emit 0x3D
    _emit 0x40
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x08
    _emit 0x74
    _emit 0x2B
    _emit 0xF6
    _emit 0x05
    _emit 0xE0
    _emit 0x0C
    _emit 0x4B
    _emit 0x00
    _emit 0x20
    _emit 0x75
    _emit 0x22
    _emit 0x8B
    _emit 0x0D
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x6C
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x50
    _emit 0x52
    _emit 0xB8
    _emit 0x17
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC9
    _emit 0xE8
    _emit 0x2B
    _emit 0xFE
    _emit 0x03
    _emit 0x00
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
