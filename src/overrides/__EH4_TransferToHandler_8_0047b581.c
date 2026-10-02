/* Byte-for-byte override for __EH4_TransferToHandler_8_0047b581.

 * Original bytes (25):
 *     0000: 8b ea 8b f1 8b c1 6a 01
 *     0008: e8 0f 14 01 00 33 c0 33
 *     0010: db 33 c9 33 d2 33 ff ff
 *     0018: e6
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the instruction sequences differ in ways this note does
 * not characterise; compare with cmpfun.py before trusting it.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall __EH4_TransferToHandler_8(undefined *UNRECOVERED_JUMPTABLE)
{
  __asm {
    _emit 0x8B
    _emit 0xEA
    _emit 0x8B
    _emit 0xF1
    _emit 0x8B
    _emit 0xC1
    _emit 0x6A
    _emit 0x01
    _emit 0xE8
    _emit 0x0F
    _emit 0x14
    _emit 0x01
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x33
    _emit 0xDB
    _emit 0x33
    _emit 0xC9
    _emit 0x33
    _emit 0xD2
    _emit 0x33
    _emit 0xFF
    _emit 0xFF
    _emit 0xE6
  }
  __assume(0);
}
