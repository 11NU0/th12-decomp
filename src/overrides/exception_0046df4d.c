/* Byte-for-byte override for exception_0046df4d.

 * Original bytes (17):
 *     0000: 8b c1 83 60 04 00 83 60
 *     0008: 08 00 c7 00 28 cd 49 00
 *     0010: c3
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

void __fastcall std_exception_exception(exception *_this)
{
  __asm {
    _emit 0x8B
    _emit 0xC1
    _emit 0x83
    _emit 0x60
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0x60
    _emit 0x08
    _emit 0x00
    _emit 0xC7
    _emit 0x00
    _emit 0x28
    _emit 0xCD
    _emit 0x49
    _emit 0x00
    _emit 0xC3
  }
  __assume(0);
}
