/* Byte-for-byte override for FUN_004130e0_004130e0.

 * Original bytes (97):
 *     0000: 56 6a 7c e8 02 99 05 00
 *     0008: 8b f0 83 c4 04 85 f6 74
 *     0010: 1c 83 66 60 fe 6a 7c 6a
 *     0018: 00 56 e8 21 43 06 00 83
 *     0020: c4 0c 83 0e 02 89 35 dc
 *     0028: 43 4b 00 eb 02 33 f6 8b
 *     0030: 44 24 08 57 50 8b fe e8
 *     0038: 44 fb ff ff 5f 85 c0 74
 *     0040: 1a 85 f6 74 10 8b c6 e8
 *     0048: e4 fd ff ff 56 e8 1d 99
 *     0050: 05 00 83 c4 04 33 c0 5e
 *     0058: c2 04 00 8b c6 5e c2 04
 *     0060: 00
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

uint * __stdcall FUN_004130e0(undefined4 param_1)
{
  __asm {
    _emit 0x56
    _emit 0x6A
    _emit 0x7C
    _emit 0xE8
    _emit 0x02
    _emit 0x99
    _emit 0x05
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
    _emit 0x60
    _emit 0xFE
    _emit 0x6A
    _emit 0x7C
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x21
    _emit 0x43
    _emit 0x06
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x89
    _emit 0x35
    _emit 0xDC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x57
    _emit 0x50
    _emit 0x8B
    _emit 0xFE
    _emit 0xE8
    _emit 0x44
    _emit 0xFB
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
    _emit 0x10
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0xE4
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x1D
    _emit 0x99
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
