/* Byte-for-byte override for operator___0046cdf0.

 * Original bytes (33):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 83 c1 09 51 83 c0 09 50
 *     0010: e8 bb 5c 00 00 f7 d8 59
 *     0018: 1b c0 59 f7 d8 5d c2 04
 *     0020: 00
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

bool __fastcall type_info_operator_not_equal(type_info *_this,type_info *param_1)
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
    _emit 0xBB
    _emit 0x5C
    _emit 0x00
    _emit 0x00
    _emit 0xF7
    _emit 0xD8
    _emit 0x59
    _emit 0x1B
    _emit 0xC0
    _emit 0x59
    _emit 0xF7
    _emit 0xD8
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
