/* Byte-for-byte override for FUN_004281c0_004281c0.

 * Original bytes (106):
 *     0000: 57 68 90 04 00 00 e8 1f
 *     0008: 48 04 00 8b f8 83 c4 04
 *     0010: 85 ff 74 2c 56 8d 77 10
 *     0018: e8 e3 fc ff ff 68 90 04
 *     0020: 00 00 6a 00 57 e8 36 f2
 *     0028: 04 00 83 c4 0c c7 87 6c
 *     0030: 04 00 00 00 00 01 00 89
 *     0038: 3d f4 44 4b 00 5e eb 02
 *     0040: 33 ff 57 e8 c8 fd ff ff
 *     0048: 85 c0 74 1a 85 ff 74 12
 *     0050: 53 8b df e8 b8 fe ff ff
 *     0058: 57 e8 31 48 04 00 83 c4
 *     0060: 04 5b 33 c0 5f c3 8b c7
 *     0068: 5f c3
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

void * __stdcall FUN_004281c0(void)
{
  __asm {
    _emit 0x57
    _emit 0x68
    _emit 0x90
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x1F
    _emit 0x48
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0xF8
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x2C
    _emit 0x56
    _emit 0x8D
    _emit 0x77
    _emit 0x10
    _emit 0xE8
    _emit 0xE3
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x68
    _emit 0x90
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x57
    _emit 0xE8
    _emit 0x36
    _emit 0xF2
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xC7
    _emit 0x87
    _emit 0x6C
    _emit 0x04
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0xF4
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x5E
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xFF
    _emit 0x57
    _emit 0xE8
    _emit 0xC8
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x1A
    _emit 0x85
    _emit 0xFF
    _emit 0x74
    _emit 0x12
    _emit 0x53
    _emit 0x8B
    _emit 0xDF
    _emit 0xE8
    _emit 0xB8
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x57
    _emit 0xE8
    _emit 0x31
    _emit 0x48
    _emit 0x04
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x04
    _emit 0x5B
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
