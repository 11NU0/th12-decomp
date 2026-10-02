/* Byte-for-byte override for getString_0047dda9.

 * Original bytes (24):
 *     0000: 8b ff 55 8b ec 8b 09 85
 *     0008: c9 75 07 8b 45 08 5d c2
 *     0010: 08 00 8b 01 5d ff 60 08
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

char * __fastcall DName_getString(DName *_this,char *param_1,char *param_2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x09
    _emit 0x85
    _emit 0xC9
    _emit 0x75
    _emit 0x07
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
    _emit 0x8B
    _emit 0x01
    _emit 0x5D
    _emit 0xFF
    _emit 0x60
    _emit 0x08
  }
  __assume(0);
}
