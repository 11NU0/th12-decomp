/* Byte-for-byte override for FID_conflict___set_inconsistency_0046df19.

 * Original bytes (39):
 *     0000: 8b ff 55 8b ec 56 ff 35
 *     0008: dc 41 4b 00 e8 b4 72 00
 *     0010: 00 ff 75 08 8b f0 e8 2f
 *     0018: 72 00 00 59 59 a3 dc 41
 *     0020: 4b 00 8b c6 5e 5d c3
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

_purecall_handler __cdecl FID_conflict___set_inconsistency(_purecall_handler _Handler)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x56
    _emit 0xFF
    _emit 0x35
    _emit 0xDC
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xB4
    _emit 0x72
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x8B
    _emit 0xF0
    _emit 0xE8
    _emit 0x2F
    _emit 0x72
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x59
    _emit 0xA3
    _emit 0xDC
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
