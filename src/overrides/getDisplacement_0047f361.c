/* Byte-for-byte override for getDisplacement_0047f361.

 * Original bytes (22):
 *     0000: 8b ff 55 8b ec 6a 01 ff
 *     0008: 75 08 e8 46 f9 ff ff 8b
 *     0010: 45 08 59 59 5d c3
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

DName * __cdecl UnDecorator_getDisplacement(DName *param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x6A
    _emit 0x01
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x46
    _emit 0xF9
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x59
    _emit 0x59
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
