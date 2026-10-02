/* Byte-for-byte override for getDataIndirectType_0047e0c2.

 * Original bytes (53):
 *     0000: 8b ff 55 8b ec 83 ec 10
 *     0008: 33 c9 b8 00 00 ff ff 21
 *     0010: 45 fc 21 45 f4 51 8d 45
 *     0018: f8 50 51 8d 45 f0 50 ff
 *     0020: 75 08 89 4d f8 89 4d f0
 *     0028: e8 85 39 00 00 8b 45 08
 *     0030: 83 c4 14 c9 c3
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

DName * __cdecl UnDecorator_getDataIndirectType(DName *param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xEC
    _emit 0x10
    _emit 0x33
    _emit 0xC9
    _emit 0xB8
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xFF
    _emit 0x21
    _emit 0x45
    _emit 0xFC
    _emit 0x21
    _emit 0x45
    _emit 0xF4
    _emit 0x51
    _emit 0x8D
    _emit 0x45
    _emit 0xF8
    _emit 0x50
    _emit 0x51
    _emit 0x8D
    _emit 0x45
    _emit 0xF0
    _emit 0x50
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x89
    _emit 0x4D
    _emit 0xF8
    _emit 0x89
    _emit 0x4D
    _emit 0xF0
    _emit 0xE8
    _emit 0x85
    _emit 0x39
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
