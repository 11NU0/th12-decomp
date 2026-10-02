/* Byte-for-byte override for ___libm_setusermatherr.

 * Original bytes (46):
 *     0000: 8b ff 55 8b ec 83 7d 08
 *     0008: 00 75 09 83 25 d0 52 4d
 *     0010: 00 00 5d c3 ff 75 08 e8
 *     0018: 6e 16 fe ff 59 a3 d8 52
 *     0020: 4d 00 c7 05 d0 52 4d 00
 *     0028: 01 00 00 00 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl ___libm_setusermatherr(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0x7D
    _emit 0x08
    _emit 0x00
    _emit 0x75
    _emit 0x09
    _emit 0x83
    _emit 0x25
    _emit 0xD0
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x6E
    _emit 0x16
    _emit 0xFE
    _emit 0xFF
    _emit 0x59
    _emit 0xA3
    _emit 0xD8
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0xD0
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
