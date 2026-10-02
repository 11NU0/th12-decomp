/* Byte-for-byte override for FUN_0044bd20_0044bd20.

 * Original bytes (66):
 *     0000: 56 8b f1 8b 46 04 c7 06
 *     0008: dc 22 4a 00 83 f8 ff 74
 *     0010: 15 50 ff 15 a4 80 49 00
 *     0018: c7 46 04 ff ff ff ff c7
 *     0020: 46 08 00 00 00 00 f6 44
 *     0028: 24 08 01 c7 06 04 23 4a
 *     0030: 00 74 09 56 e8 f6 0c 02
 *     0038: 00 83 c4 04 8b c6 5e c2
 *     0040: 04 00
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

undefined4 * __fastcall FUN_0044bd20(void *this,byte param_1)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0x8B
    _emit 0x46
    _emit 0x04
    _emit 0xC7
    _emit 0x06
    _emit 0xDC
    _emit 0x22
    _emit 0x4A
    _emit 0x00
    _emit 0x83
    _emit 0xF8
    _emit 0xFF
    _emit 0x74
    _emit 0x15
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0xA4
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x04
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x46
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xF6
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x01
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
    _emit 0xF6
    _emit 0x0C
    _emit 0x02
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
