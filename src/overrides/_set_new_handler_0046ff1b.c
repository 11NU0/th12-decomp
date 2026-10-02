/* Byte-for-byte override for _set_new_handler_0046ff1b.

 * Original bytes (54):
 *     0000: 8b ff 55 8b ec 56 6a 04
 *     0008: e8 72 ed ff ff ff 35 5c
 *     0010: 3d 4b 00 e8 ab 52 00 00
 *     0018: ff 75 08 8b f0 e8 26 52
 *     0020: 00 00 6a 04 a3 5c 3d 4b
 *     0028: 00 e8 5f ec ff ff 83 c4
 *     0030: 10 8b c6 5e 5d c3
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

_func_int_uint * __cdecl _set_new_handler(_func_int_uint *param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x56
    _emit 0x6A
    _emit 0x04
    _emit 0xE8
    _emit 0x72
    _emit 0xED
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x35
    _emit 0x5C
    _emit 0x3D
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xAB
    _emit 0x52
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x8B
    _emit 0xF0
    _emit 0xE8
    _emit 0x26
    _emit 0x52
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x04
    _emit 0xA3
    _emit 0x5C
    _emit 0x3D
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x5F
    _emit 0xEC
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
