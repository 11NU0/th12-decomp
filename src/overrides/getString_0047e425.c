/* Byte-for-byte override for getString_0047e425.

 * Original bytes (29):
 *     0000: 8b ff 55 8b ec ff 71 08
 *     0008: ff 71 04 ff 75 0c ff 75
 *     0010: 08 e8 09 fd ff ff 83 c4
 *     0018: 10 5d c2 08 00
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

char * __fastcall pcharNode_getString(pcharNode *_this,char *param_1,char *param_2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0xFF
    _emit 0x71
    _emit 0x08
    _emit 0xFF
    _emit 0x71
    _emit 0x04
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x09
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
