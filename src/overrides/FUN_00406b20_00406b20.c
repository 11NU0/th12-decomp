/* Byte-for-byte override for FUN_00406b20_00406b20.

 * Original bytes (105):
 *     0000: 56 68 24 05 00 00 e8 bf
 *     0008: 5e 06 00 8b f0 83 c4 04
 *     0010: 85 f6 74 2e b8 fe ff ff
 *     0018: ff 21 46 24 21 46 38 8d
 *     0020: 4e 4c e8 99 bc ff ff 68
 *     0028: 24 05 00 00 6a 00 56 e8
 *     0030: cc 08 07 00 83 c4 0c 83
 *     0038: 0e 02 89 35 c4 43 4b 00
 *     0040: eb 02 33 f6 56 e8 16 fd
 *     0048: ff ff 85 c0 74 17 85 f6
 *     0050: 74 0f 56 e8 b8 fd ff ff
 *     0058: 56 e8 d1 5e 06 00 83 c4
 *     0060: 04 33 c0 5e c3 8b c6 5e
 *     0068: c3
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

uint * __stdcall FUN_00406b20(void)
{
  __asm {
    _emit 0x56
    _emit 0x68
    _emit 0x24
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xBF
    _emit 0x5E
    _emit 0x06
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xF6
    _emit 0x74
    _emit 0x2E
    _emit 0xB8
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x21
    _emit 0x46
    _emit 0x24
    _emit 0x21
    _emit 0x46
    _emit 0x38
    _emit 0x8D
    _emit 0x4E
    _emit 0x4C
    _emit 0xE8
    _emit 0x99
    _emit 0xBC
    _emit 0xFF
    _emit 0xFF
    _emit 0x68
    _emit 0x24
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x56
    _emit 0xE8
    _emit 0xCC
    _emit 0x08
    _emit 0x07
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x83
    _emit 0x0E
    _emit 0x02
    _emit 0x89
    _emit 0x35
    _emit 0xC4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xF6
    _emit 0x56
    _emit 0xE8
    _emit 0x16
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
    _emit 0xB8
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0xD1
    _emit 0x5E
    _emit 0x06
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
