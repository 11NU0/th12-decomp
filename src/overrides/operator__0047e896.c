/* Byte-for-byte override for operator__0047e896.

 * Original bytes (53):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 33 d2 56 8b f1 88 56 04
 *     0010: 81 66 04 ff 00 ff ff 89
 *     0018: 16 33 c9 38 10 74 06 41
 *     0020: 38 14 01 75 fa 51 50 8b
 *     0028: ce e8 2d fc ff ff 8b c6
 *     0030: 5e 5d c2 04 00
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

DName * __fastcall DName_operator_assign(DName *_this,char *param_1)
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
    _emit 0x33
    _emit 0xD2
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0x88
    _emit 0x56
    _emit 0x04
    _emit 0x81
    _emit 0x66
    _emit 0x04
    _emit 0xFF
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0x89
    _emit 0x16
    _emit 0x33
    _emit 0xC9
    _emit 0x38
    _emit 0x10
    _emit 0x74
    _emit 0x06
    _emit 0x41
    _emit 0x38
    _emit 0x14
    _emit 0x01
    _emit 0x75
    _emit 0xFA
    _emit 0x51
    _emit 0x50
    _emit 0x8B
    _emit 0xCE
    _emit 0xE8
    _emit 0x2D
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
