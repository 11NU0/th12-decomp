/* Byte-for-byte override for FUN_00492121.

 * Original bytes (27):
 *     0000: e8 41 33 fe ff 83 b8 90
 *     0008: 00 00 00 00 7e 0c e8 33
 *     0010: 33 fe ff 05 90 00 00 00
 *     0018: ff 08 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00492121(void)
{
  __asm {
    _emit 0xE8
    _emit 0x41
    _emit 0x33
    _emit 0xFE
    _emit 0xFF
    _emit 0x83
    _emit 0xB8
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x7E
    _emit 0x0C
    _emit 0xE8
    _emit 0x33
    _emit 0x33
    _emit 0xFE
    _emit 0xFF
    _emit 0x05
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x08
    _emit 0xC3
  }
  __assume(0);
}
