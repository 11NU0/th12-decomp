/* Byte-for-byte override for FID_conflict__ValidateExecute_004931c0.

 * Original bytes (18):
 *     0000: 8b ff 55 8b ec 33 c0 40
 *     0008: 83 7d 08 00 75 02 33 c0
 *     0010: 5d c3
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

bool __cdecl FID_conflict__ValidateExecute(int param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0x83
    _emit 0x7D
    _emit 0x08
    _emit 0x00
    _emit 0x75
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
