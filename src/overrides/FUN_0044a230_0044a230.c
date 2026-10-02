/* Byte-for-byte override for FUN_0044a230_0044a230.

 * Original bytes (90):
 *     0000: 56 6a 6c e8 b2 27 02 00
 *     0008: 8b f0 83 c4 04 85 f6 74
 *     0010: 1c 83 66 20 fe 6a 6c 6a
 *     0018: 00 56 e8 d1 d1 02 00 83
 *     0020: c4 0c 83 0e 02 89 35 34
 *     0028: 45 4b 00 eb 02 33 f6 57
 *     0030: 8b fe e8 39 fd ff ff 5f
 *     0038: 85 c0 74 1a 85 f6 74 12
 *     0040: 53 8b de e8 a8 fe ff ff
 *     0048: 56 e8 d1 27 02 00 83 c4
 *     0050: 04 5b 33 c0 5e c3 8b c6
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

uint * __stdcall FUN_0044a230(void)
{
  __asm {
    _emit 0x56
    _emit 0x6A
    _emit 0x6C
    _emit 0xE8
    _emit 0xB2
    _emit 0x27
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x1C
    _emit 0x83
    _emit 0x66
    _emit 0x20
    _emit 0xFE
    _emit 0x6A
    _emit 0x6C
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0xD1
    _emit 0xD1
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x89
    _emit 0x35
    _emit 0x34
    _emit 0x45
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
    _emit 0x39
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x1A
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x12
    _emit 0x53
    _emit 0x8B
    _emit 0xDE
    _emit 0xE8
    _emit 0xA8
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0xD1
    _emit 0x27
    _emit 0x02
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5B
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
