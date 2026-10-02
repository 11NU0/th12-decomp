/* Byte-for-byte override for FUN_00464bf0_00464bf0.

 * Original bytes (36):
 *     0000: 56 8b f1 c7 06 38 37 4a
 *     0008: 00 e8 42 00 00 00 f6 44
 *     0010: 24 08 01 74 09 56 e8 44
 *     0018: 7e 00 00 83 c4 04 8b c6
 *     0020: 5e c2 04 00
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

undefined4 * __fastcall FUN_00464bf0(void *this,byte param_1)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0xC7
    _emit 0x06
    _emit 0x38
    _emit 0x37
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x42
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x01
    _emit 0x74
    _emit 0x09
    _emit 0x56
    _emit 0xE8
    _emit 0x44
    _emit 0x7E
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
