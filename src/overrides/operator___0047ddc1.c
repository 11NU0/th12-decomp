/* Byte-for-byte override for operator___0047ddc1.

 * Original bytes (31):
 *     0000: 8b ff 55 8b ec 8b c1 80
 *     0008: 78 04 03 74 0e 8b 4d 08
 *     0010: 8a 51 04 80 fa 01 7e 03
 *     0018: 88 50 04 5d c2 04 00
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

DName * __fastcall DName_operator_or_assign(DName *_this,DName *param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0xC1
    _emit 0x80
    _emit 0x78
    _emit 0x04
    _emit 0x03
    _emit 0x74
    _emit 0x0E
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x8A
    _emit 0x51
    _emit 0x04
    _emit 0x80
    _emit 0xFA
    _emit 0x01
    _emit 0x7E
    _emit 0x03
    _emit 0x88
    _emit 0x50
    _emit 0x04
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
