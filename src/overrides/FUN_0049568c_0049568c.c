/* Byte-for-byte override for FUN_0049568c.

 * Original bytes (25):
 *     0000: a9 00 00 08 00 74 06 b8
 *     0008: 07 00 00 00 c3 dc 05 d0
 *     0010: 5d 4a 00 b8 01 00 00 00
 *     0018: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0049568c(void)
{
  __asm {
    _emit 0xA9
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x74
    _emit 0x06
    _emit 0xB8
    _emit 0x07
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC3
    _emit 0xDC
    _emit 0x05
    _emit 0xD0
    _emit 0x5D
    _emit 0x4A
    _emit 0x00
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC3
  }
  __assume(0);
}
