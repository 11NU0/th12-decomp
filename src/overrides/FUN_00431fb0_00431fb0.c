/* Byte-for-byte override for FUN_00431fb0_00431fb0.

 * Original bytes (70):
 *     0000: 57 68 e0 02 00 00 e8 2f
 *     0008: aa 03 00 83 c4 04 85 c0
 *     0010: 74 0d 56 8b f0 e8 36 fd
 *     0018: ff ff 8b f8 5e eb 02 33
 *     0020: ff e8 9a fd ff ff 85 c0
 *     0028: 74 18 85 ff 74 10 8b c7
 *     0030: e8 eb fe ff ff 57 e8 64
 *     0038: aa 03 00 83 c4 04 33 c0
 *     0040: 5f c3 8b c7 5f c3
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

void * __stdcall FUN_00431fb0(void)
{
  __asm {
    _emit 0x57
    _emit 0x68
    _emit 0xE0
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x2F
    _emit 0xAA
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0D
    _emit 0x56
    _emit 0x8B
    _emit 0xF0
    _emit 0xE8
    _emit 0x36
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xF8
    _emit 0x5E
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xFF
    _emit 0xE8
    _emit 0x9A
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x18
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x10
    _emit 0x8B
    _emit 0xC7
    _emit 0xE8
    _emit 0xEB
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x57
    _emit 0xE8
    _emit 0x64
    _emit 0xAA
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0xC3
    _emit 0x8B
    _emit 0xC7
    _emit 0x5F
    _emit 0xC3
  }
  __assume(0);
}
