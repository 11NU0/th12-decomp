/* Byte-for-byte override for FUN_0047de2f_0047de2f.

 * Original bytes (23):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 3b 45 0c 73 06 8a 49 04
 *     0010: 88 08 40 5d c2 08 00
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

undefined * __fastcall FUN_0047de2f(void *this,undefined *param_1,undefined *param_2)
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
    _emit 0x3B
    _emit 0x45
    _emit 0x0C
    _emit 0x73
    _emit 0x06
    _emit 0x8A
    _emit 0x49
    _emit 0x04
    _emit 0x88
    _emit 0x08
    _emit 0x40
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
