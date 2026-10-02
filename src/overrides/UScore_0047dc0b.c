/* Byte-for-byte override for UScore_0047dc0b.

 * Original bytes (30):
 *     0000: 8b ff 55 8b ec a1 28 43
 *     0008: 4b 00 f7 d0 a8 01 8b 45
 *     0010: 08 8b 04 85 30 dc 49 00
 *     0018: 75 02 40 40 5d c3
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original opens with a `push ebp / mov ebp,esp`
 * frame and addresses its arguments through EBP, while this pass addresses
 * them through ESP; the original carries the `/hotpatch` `mov edi,edi` slot.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

char * __cdecl UnDecorator_UScore(Tokens param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0xA1
    _emit 0x28
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xF7
    _emit 0xD0
    _emit 0xA8
    _emit 0x01
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x8B
    _emit 0x04
    _emit 0x85
    _emit 0x30
    _emit 0xDC
    _emit 0x49
    _emit 0x00
    _emit 0x75
    _emit 0x02
    _emit 0x40
    _emit 0x40
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
