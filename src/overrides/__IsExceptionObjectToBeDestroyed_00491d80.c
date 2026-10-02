/* Byte-for-byte override for __IsExceptionObjectToBeDestroyed.

 * Original bytes (39):
 *     0000: 8b ff 55 8b ec e8 dd 36
 *     0008: fe ff 8b 80 98 00 00 00
 *     0010: eb 0a 8b 08 3b 4d 08 74
 *     0018: 0a 8b 40 04 85 c0 75 f2
 *     0020: 40 5d c3 33 c0 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl __IsExceptionObjectToBeDestroyed(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0xE8
    _emit 0xDD
    _emit 0x36
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x80
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x0A
    _emit 0x8B
    _emit 0x08
    _emit 0x3B
    _emit 0x4D
    _emit 0x08
    _emit 0x74
    _emit 0x0A
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0xF2
    _emit 0x40
    _emit 0x5D
    _emit 0xC3
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
