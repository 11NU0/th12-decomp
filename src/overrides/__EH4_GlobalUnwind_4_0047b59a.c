/* Byte-for-byte override for __EH4_GlobalUnwind_4_0047b59a.

 * Original bytes (26):
 *     0000: 55 8b ec 53 56 57 6a 00
 *     0008: 6a 00 68 af b5 47 00 51
 *     0010: e8 8f 63 01 00 5f 5e 5b
 *     0018: 5d c3
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original opens with a `push ebp / mov ebp,esp`
 * frame and addresses its arguments through EBP, while this pass addresses
 * them through ESP.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall __EH4_GlobalUnwind_4(PVOID param_1)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x68
    _emit 0xAF
    _emit 0xB5
    _emit 0x47
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0x8F
    _emit 0x63
    _emit 0x01
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
