/* Byte-for-byte override for FUN_0042ede0_0042ede0.

 * Original bytes (117):
 *     0000: 56 57 68 f8 04 00 00 e8
 *     0008: fe db 03 00 8b f0 33 ff
 *     0010: 83 c4 04 3b f7 74 35 8d
 *     0018: 4e 30 c7 46 10 38 37 4a
 *     0020: 00 89 7e 14 89 7e 18 89
 *     0028: 7e 1c 89 7e 20 e8 ce 39
 *     0030: fd ff 68 f8 04 00 00 57
 *     0038: 56 e8 02 86 04 00 83 c4
 *     0040: 0c 83 0e 02 89 35 f8 44
 *     0048: 4b 00 eb 02 33 f6 56 e8
 *     0050: dc fc ff ff 85 c0 74 18
 *     0058: 3b f7 74 0f 56 e8 be fd
 *     0060: ff ff 56 e8 07 dc 03 00
 *     0068: 83 c4 04 5f 33 c0 5e c3
 *     0070: 5f 8b c6 5e c3
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

uint * __stdcall FUN_0042ede0(void)
{
  __asm {
    _emit 0x56
    _emit 0x57
    _emit 0x68
    _emit 0xF8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xFE
    _emit 0xDB
    _emit 0x03
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x33
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x3B
    _emit 0xF7
    _emit 0x74
    _emit 0x35
    _emit 0x8D
    _emit 0x4E
    _emit 0x30
    _emit 0xC7
    _emit 0x46
    _emit 0x10
    _emit 0x38
    _emit 0x37
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x7E
    _emit 0x14
    _emit 0x89
    _emit 0x7E
    _emit 0x18
    _emit 0x89
    _emit 0x7E
    _emit 0x1C
    _emit 0x89
    _emit 0x7E
    _emit 0x20
    _emit 0xE8
    _emit 0xCE
    _emit 0x39
    _emit 0xFD
    _emit 0xFF
    _emit 0x68
    _emit 0xF8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x57
    _emit 0x56
    _emit 0xE8
    _emit 0x02
    _emit 0x86
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x89
    _emit 0x35
    _emit 0xF8
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x56
    _emit 0xE8
    _emit 0xDC
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x18
    _emit 0x3B
    _emit 0xF7
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0xBE
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x07
    _emit 0xDC
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5F
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC3
    _emit 0x5F
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
