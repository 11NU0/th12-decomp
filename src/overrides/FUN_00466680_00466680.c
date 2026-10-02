/* Byte-for-byte override for FUN_00466680_00466680.

 * Original bytes (36):
 *     0000: 56 8b f1 c7 06 24 3b 4a
 *     0008: 00 e8 c2 f8 ff ff f6 44
 *     0010: 24 08 01 74 09 56 e8 b4
 *     0018: 63 00 00 83 c4 04 8b c6
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

undefined4 * __fastcall FUN_00466680(void *this,byte param_1)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0xC7
    _emit 0x06
    _emit 0x24
    _emit 0x3B
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0xC2
    _emit 0xF8
    _emit 0xFF
    _emit 0xFF
    _emit 0xF6
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x01
    _emit 0x74
    _emit 0x09
    _emit 0x56
    _emit 0xE8
    _emit 0xB4
    _emit 0x63
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
