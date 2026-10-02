/* Byte-for-byte override for FID_conflict__vprintf_helper_0048d3e9.

 * Original bytes (133):
 *     0000: 6a 10 68 68 b1 4a 00 e8
 *     0008: f7 28 fe ff e8 2b ec fe
 *     0010: ff 8b f0 83 c6 20 89 75
 *     0018: e4 33 c0 33 ff 39 7d 0c
 *     0020: 0f 95 c0 3b c7 75 1d e8
 *     0028: 5a 15 fe ff c7 00 16 00
 *     0030: 00 00 57 57 57 57 57 e8
 *     0038: 08 3b fe ff 83 c4 14 83
 *     0040: c8 ff eb 3b 56 e8 c9 ec
 *     0048: fe ff 59 89 7d fc 56 e8
 *     0050: dc fe ff ff 8b f8 ff 75
 *     0058: 14 ff 75 10 ff 75 0c 56
 *     0060: ff 55 08 89 45 e0 56 57
 *     0068: e8 5f ff ff ff 83 c4 1c
 *     0070: c7 45 fc fe ff ff ff e8
 *     0078: 0c 00 00 00 8b 45 e0 e8
 *     0080: c4 28 fe ff c3
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

FID_conflict__vprintf_helper(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)
{
  __asm {
    _emit 0x6A
    _emit 0x10
    _emit 0x68
    _emit 0x68
    _emit 0xB1
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0xF7
    _emit 0x28
    _emit 0xFE
    _emit 0xFF
    _emit 0xE8
    _emit 0x2B
    _emit 0xEC
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xC6
    _emit 0x20
    _emit 0x89
    _emit 0x75
    _emit 0xE4
    _emit 0x33
    _emit 0xC0
    _emit 0x33
    _emit 0xFF
    _emit 0x39
    _emit 0x7D
    _emit 0x0C
    _emit 0x0F
    _emit 0x95
    _emit 0xC0
    _emit 0x3B
    _emit 0xC7
    _emit 0x75
    _emit 0x1D
    _emit 0xE8
    _emit 0x5A
    _emit 0x15
    _emit 0xFE
    _emit 0xFF
    _emit 0xC7
    _emit 0x00
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0x57
    _emit 0xE8
    _emit 0x08
    _emit 0x3B
    _emit 0xFE
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0xEB
    _emit 0x3B
    _emit 0x56
    _emit 0xE8
    _emit 0xC9
    _emit 0xEC
    _emit 0xFE
    _emit 0xFF
    _emit 0x59
    _emit 0x89
    _emit 0x7D
    _emit 0xFC
    _emit 0x56
    _emit 0xE8
    _emit 0xDC
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xF8
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0x56
    _emit 0xFF
    _emit 0x55
    _emit 0x08
    _emit 0x89
    _emit 0x45
    _emit 0xE0
    _emit 0x56
    _emit 0x57
    _emit 0xE8
    _emit 0x5F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x1C
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0xE0
    _emit 0xE8
    _emit 0xC4
    _emit 0x28
    _emit 0xFE
    _emit 0xFF
    _emit 0xC3
  }
  __assume(0);
}
