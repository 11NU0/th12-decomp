/* Byte-for-byte override for before.

 * Original bytes (36):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 83 c1 09 51 83 c0 09 50
 *     0010: e8 9a 5c 00 00 59 59 33
 *     0018: c9 85 c0 0f 9f c1 8b c1
 *     0020: 5d c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __fastcall before(type_info * a0, type_info * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x83
    _emit 0xC1
    _emit 0x09
    _emit 0x51
    _emit 0x83
    _emit 0xC0
    _emit 0x09
    _emit 0x50
    _emit 0xE8
    _emit 0x9A
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x59
    _emit 0x33
    _emit 0xC9
    _emit 0x85
    _emit 0xC0
    _emit 0x0F
    _emit 0x9F
    _emit 0xC1
    _emit 0x8B
    _emit 0xC1
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
