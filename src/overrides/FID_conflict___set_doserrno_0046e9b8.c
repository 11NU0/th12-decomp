/* Byte-for-byte override for FID_conflict___set_doserrno_0046e9b8.

 * Original bytes (33):
 *     0000: 8b ff 55 8b ec e8 2c 6a
 *     0008: 00 00 85 c0 75 05 6a 0c
 *     0010: 58 5d c3 e8 9f ff ff ff
 *     0018: 8b 4d 08 89 08 33 c0 5d
 *     0020: c3
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

errno_t __cdecl FID_conflict___set_doserrno(ulong _Value)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0xE8
    _emit 0x2C
    _emit 0x6A
    _emit 0x00
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x05
    _emit 0x6A
    _emit 0x0C
    _emit 0x58
    _emit 0x5D
    _emit 0xC3
    _emit 0xE8
    _emit 0x9F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x89
    _emit 0x08
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
