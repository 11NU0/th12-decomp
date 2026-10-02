/* Byte-for-byte override for FUN_0043dd50_0043dd50.

 * Original bytes (117):
 *     0000: 56 68 0c 08 00 00 e8 8f
 *     0008: ec 02 00 8b f0 83 c4 04
 *     0010: 85 f6 74 39 8d 4e 18 e8
 *     0018: 74 4a fc ff b9 0c 00 00
 *     0020: 00 8d 86 f8 04 00 00 83
 *     0028: 20 fe 83 c0 40 83 e9 01
 *     0030: 79 f5 68 0c 08 00 00 6a
 *     0038: 00 56 e8 91 96 03 00 83
 *     0040: c4 0c 83 0e 02 89 35 24
 *     0048: 45 4b 00 eb 02 33 f6 8b
 *     0050: c6 e8 9a fd ff ff 85 c0
 *     0058: 74 17 85 f6 74 0f 56 e8
 *     0060: 7c fe ff ff 56 e8 95 ec
 *     0068: 02 00 83 c4 04 33 c0 5e
 *     0070: c3 8b c6 5e c3
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

uint * __stdcall FUN_0043dd50(void)
{
  __asm {
    _emit 0x56
    _emit 0x68
    _emit 0x0C
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x8F
    _emit 0xEC
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
    _emit 0x39
    _emit 0x8D
    _emit 0x4E
    _emit 0x18
    _emit 0xE8
    _emit 0x74
    _emit 0x4A
    _emit 0xFC
    _emit 0xFF
    _emit 0xB9
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x86
    _emit 0xF8
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x20
    _emit 0xFE
    _emit 0x83
    _emit 0xC0
    _emit 0x40
    _emit 0x83
    _emit 0xE9
    _emit 0x01
    _emit 0x79
    _emit 0xF5
    _emit 0x68
    _emit 0x0C
    _emit 0x08
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0x91
    _emit 0x96
    _emit 0x03
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x89
    _emit 0x35
    _emit 0x24
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x9A
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x17
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x0F
    _emit 0x56
    _emit 0xE8
    _emit 0x7C
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0x95
    _emit 0xEC
    _emit 0x02
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
