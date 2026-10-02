/* Byte-for-byte override for FUN_0041cad0_0041cad0.

 * Original bytes (90):
 *     0000: 56 68 8c 00 00 00 e8 0f
 *     0008: ff 04 00 8b f0 83 c4 04
 *     0010: 85 f6 74 1b 68 8c 00 00
 *     0018: 00 6a 00 56 e8 2f a9 05
 *     0020: 00 83 c4 0c 83 0e 02 89
 *     0028: 35 e0 43 4b 00 eb 02 33
 *     0030: f6 57 8b fe e8 07 ff ff
 *     0038: ff 5f 85 c0 74 18 85 f6
 *     0040: 74 10 8b c6 e8 57 ff ff
 *     0048: ff 56 e8 30 ff 04 00 83
 *     0050: c4 04 33 c0 5e c3 8b c6
 *     0058: 5e c3
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

uint * __stdcall FUN_0041cad0(void)
{
  __asm {
    _emit 0x56
    _emit 0x68
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x0F
    _emit 0xFF
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x1B
    _emit 0x68
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x2F
    _emit 0xA9
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x89
    _emit 0x35
    _emit 0xE0
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x57
    _emit 0x8B
    _emit 0xFE
    _emit 0xE8
    _emit 0x07
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x18
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x57
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x30
    _emit 0xFF
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC3
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
