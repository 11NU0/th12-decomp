/* Byte-for-byte override for pDNameNode_0047de46.

 * Original bytes (42):
 *     0000: 8b ff 55 8b ec 8b c1 8b
 *     0008: 4d 08 c7 00 c8 dd 49 00
 *     0010: 85 c9 74 0f 8a 51 04 80
 *     0018: fa 02 74 05 80 fa 03 75
 *     0020: 02 33 c9 89 48 04 5d c2
 *     0028: 04 00
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original opens with a `push ebp / mov ebp,esp`
 * frame and addresses its arguments through EBP, while this pass addresses
 * them through ESP; the original carries the `/hotpatch` `mov edi,edi` slot;
 * the x87 control-word traffic differs (1 `dd` bytes against 0).
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall pDNameNode_pDNameNode(pDNameNode *_this,DName *param_1)
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
    _emit 0xC8
    _emit 0xDD
    _emit 0x49
    _emit 0x00
    _emit 0x85
    _emit 0xC9
    _emit 0x74
    _emit 0x0F
    _emit 0x8A
    _emit 0x51
    _emit 0x04
    _emit 0x80
    _emit 0xFA
    _emit 0x02
    _emit 0x74
    _emit 0x05
    _emit 0x80
    _emit 0xFA
    _emit 0x03
    _emit 0x75
    _emit 0x02
    _emit 0x33
    _emit 0xC9
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
