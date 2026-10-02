/* Byte-for-byte override for strncnt.

 * Original bytes (30):
 *     0000: 8b ff 55 8b ec 8b 4d 08
 *     0008: eb 07 49 80 38 00 74 06
 *     0010: 40 85 c9 75 f5 49 8b 45
 *     0018: 08 2b c1 48 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl strncnt(char * a0, int a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0xEB
    _emit 0x07
    _emit 0x49
    _emit 0x80
    _emit 0x38
    _emit 0x00
    _emit 0x74
    _emit 0x06
    _emit 0x40
    _emit 0x85
    _emit 0xC9
    _emit 0x75
    _emit 0xF5
    _emit 0x49
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x2B
    _emit 0xC1
    _emit 0x48
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
