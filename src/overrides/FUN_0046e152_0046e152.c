/* Byte-for-byte override for FUN_0046e152_0046e152.

 * Original bytes (29):
 *     0000: 8b ff 55 8b ec 56 ff 75
 *     0008: 08 8b f1 e8 ab ff ff ff
 *     0010: c7 06 60 cd 49 00 8b c6
 *     0018: 5e 5d c2 04 00
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original opens with a `push ebp / mov ebp,esp`
 * frame and addresses its arguments through EBP, while this pass addresses
 * them through ESP; the original carries the `/hotpatch` `mov edi,edi` slot;
 * the original pushes each argument straight onto the stack (`push dword
 * [ebp+n]`) where this pass copies it into a register first.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 * __fastcall FUN_0046e152(void *this,exception *param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x56
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x8B
    _emit 0xF1
    _emit 0xE8
    _emit 0xAB
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x06
    _emit 0x60
    _emit 0xCD
    _emit 0x49
    _emit 0x00
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
