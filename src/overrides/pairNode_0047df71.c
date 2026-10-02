/* Byte-for-byte override for pairNode_0047df71.

 * Original bytes (33):
 *     0000: 8b ff 55 8b ec 8b c1 8b
 *     0008: 4d 08 83 48 0c ff 89 48
 *     0010: 04 8b 4d 0c c7 00 e0 dd
 *     0018: 49 00 89 48 08 5d c2 08
 *     0020: 00
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

void __fastcall pairNode_pairNode(pairNode *_this,DNameNode *param_1,DNameNode *param_2)
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
    _emit 0x83
    _emit 0x48
    _emit 0x0C
    _emit 0xFF
    _emit 0x89
    _emit 0x48
    _emit 0x04
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0xC7
    _emit 0x00
    _emit 0xE0
    _emit 0xDD
    _emit 0x49
    _emit 0x00
    _emit 0x89
    _emit 0x48
    _emit 0x08
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
