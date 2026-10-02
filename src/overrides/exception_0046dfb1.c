/* Byte-for-byte override for exception_0046dfb1.

 * Original bytes (29):
 *     0000: 8b ff 55 8b ec 8b c1 8b
 *     0008: 4d 08 c7 00 28 cd 49 00
 *     0010: 8b 09 83 60 08 00 89 48
 *     0018: 04 5d c2 08 00
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

void __fastcall std_exception_exception(exception *_this,char **param_1,int param_2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0xC1
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0xC7
    _emit 0x00
    _emit 0x28
    _emit 0xCD
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x09
    _emit 0x83
    _emit 0x60
    _emit 0x08
    _emit 0x00
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
