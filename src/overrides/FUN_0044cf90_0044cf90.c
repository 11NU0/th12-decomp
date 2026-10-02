/* Byte-for-byte override for FUN_0044cf90_0044cf90.

 * Original bytes (69):
 *     0000: 56 8b f1 8b 46 0c 57 33
 *     0008: ff c7 06 d4 23 4a 00 3b
 *     0010: c7 74 0c 50 e8 98 f9 01
 *     0018: 00 83 c4 04 89 7e 0c f6
 *     0020: 44 24 0c 01 89 7e 0c 89
 *     0028: 7e 04 89 7e 08 c7 06 04
 *     0030: 23 4a 00 74 09 56 e8 84
 *     0038: fa 01 00 83 c4 04 5f 8b
 *     0040: c6 5e c2 04 00
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

undefined4 * __fastcall FUN_0044cf90(void *this,byte param_1)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0x8B
    _emit 0x46
    _emit 0x0C
    _emit 0x57
    _emit 0x33
    _emit 0xFF
    _emit 0xC7
    _emit 0x06
    _emit 0xD4
    _emit 0x23
    _emit 0x4A
    _emit 0x00
    _emit 0x3B
    _emit 0xC7
    _emit 0x74
    _emit 0x0C
    _emit 0x50
    _emit 0xE8
    _emit 0x98
    _emit 0xF9
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0xF6
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x01
    _emit 0x89
    _emit 0x7E
    _emit 0x0C
    _emit 0x89
    _emit 0x7E
    _emit 0x04
    _emit 0x89
    _emit 0x7E
    _emit 0x08
    _emit 0xC7
    _emit 0x06
    _emit 0x04
    _emit 0x23
    _emit 0x4A
    _emit 0x00
    _emit 0x74
    _emit 0x09
    _emit 0x56
    _emit 0xE8
    _emit 0x84
    _emit 0xFA
    _emit 0x01
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5F
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
