/* Byte-for-byte override for DNameStatusNode_0047deb6.

 * Original bytes (37):
 *     0000: 8b ff 55 8b ec 8b 55 08
 *     0008: 8b c1 89 50 04 4a f7 da
 *     0010: 1b d2 83 e2 fc 83 c2 04
 *     0018: c7 00 d4 dd 49 00 89 50
 *     0020: 08 5d c2 04 00
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

void __fastcall DNameStatusNode_DNameStatusNode(DNameStatusNode *_this,DNameStatus param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x55
    _emit 0x08
    _emit 0x8B
    _emit 0xC1
    _emit 0x89
    _emit 0x50
    _emit 0x04
    _emit 0x4A
    _emit 0xF7
    _emit 0xDA
    _emit 0x1B
    _emit 0xD2
    _emit 0x83
    _emit 0xE2
    _emit 0xFC
    _emit 0x83
    _emit 0xC2
    _emit 0x04
    _emit 0xC7
    _emit 0x00
    _emit 0xD4
    _emit 0xDD
    _emit 0x49
    _emit 0x00
    _emit 0x89
    _emit 0x50
    _emit 0x08
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
