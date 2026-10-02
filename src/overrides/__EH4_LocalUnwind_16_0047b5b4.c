/* Byte-for-byte override for __EH4_LocalUnwind_16_0047b5b4.

 * Original bytes (23):
 *     0000: 55 8b 6c 24 08 52 51 ff
 *     0008: 74 24 14 e8 b4 fe ff ff
 *     0010: 83 c4 0c 5d c2 08 00
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

void __fastcall __EH4_LocalUnwind_16(int param_1,uint param_2,undefined4 param_3,uint *param_4)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0x6C
    _emit 0x24
    _emit 0x08
    _emit 0x52
    _emit 0x51
    _emit 0xFF
    _emit 0x74
    _emit 0x24
    _emit 0x14
    _emit 0xE8
    _emit 0xB4
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
