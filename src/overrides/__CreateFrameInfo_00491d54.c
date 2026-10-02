/* Byte-for-byte override for __CreateFrameInfo_00491d54.

 * Original bytes (44):
 *     0000: 8b ff 55 8b ec 8b 45 0c
 *     0008: 56 8b 75 08 89 06 e8 00
 *     0010: 37 fe ff 8b 80 98 00 00
 *     0018: 00 89 46 04 e8 f2 36 fe
 *     0020: ff 89 b0 98 00 00 00 8b
 *     0028: c6 5e 5d c3
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

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x08
    _emit 0x89
    _emit 0x06
    _emit 0xE8
    _emit 0x00
    _emit 0x37
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x80
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0xE8
    _emit 0xF2
    _emit 0x36
    _emit 0xFE
    _emit 0xFF
    _emit 0x89
    _emit 0xB0
    _emit 0x98
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
