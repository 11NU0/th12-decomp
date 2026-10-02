/* Byte-for-byte override for __EH4_CallFilterFunc_8_0047b56a.

 * Original bytes (23):
 *     0000: 55 56 57 53 8b ea 33 c0
 *     0008: 33 db 33 d2 33 f6 33 ff
 *     0010: ff d1 5b 5f 5e 5d c3
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

void __fastcall __EH4_CallFilterFunc_8(undefined *param_1)
{
  __asm {
    _emit 0x55
    _emit 0x56
    _emit 0x57
    _emit 0x53
    _emit 0x8B
    _emit 0xEA
    _emit 0x33
    _emit 0xC0
    _emit 0x33
    _emit 0xDB
    _emit 0x33
    _emit 0xD2
    _emit 0x33
    _emit 0xF6
    _emit 0x33
    _emit 0xFF
    _emit 0xFF
    _emit 0xD1
    _emit 0x5B
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
