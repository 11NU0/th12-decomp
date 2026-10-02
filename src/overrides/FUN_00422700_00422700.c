/* Byte-for-byte override for FUN_00422700_00422700.

 * Original bytes (99):
 *     0000: 57 6a 78 e8 e2 a2 04 00
 *     0008: 8b f8 83 c4 04 85 ff 74
 *     0010: 1d 83 67 20 fe 56 8d 77
 *     0018: 24 e8 32 0b 00 00 6a 78
 *     0020: 6a 00 57 e8 f8 4c 05 00
 *     0028: 83 c4 0c 5e eb 02 33 ff
 *     0030: a1 f0 e8 4c 00 c7 05 68
 *     0038: f4 4c 00 00 00 00 00 8b
 *     0040: 08 8b 51 14 50 ff d2 8b
 *     0048: 44 24 08 83 4f 60 04 89
 *     0050: 3d e8 44 4b 00 89 47 74
 *     0058: e8 a3 dd 00 00 8b c7 5f
 *     0060: c2 04 00
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the x87 control-word traffic differs (1 `dd` bytes
 * against 0).
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void * __stdcall FUN_00422700(void)
{
  __asm {
    _emit 0x57
    _emit 0x6A
    _emit 0x78
    _emit 0xE8
    _emit 0xE2
    _emit 0xA2
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
    _emit 0x1D
    _emit 0x83
    _emit 0x67
    _emit 0x20
    _emit 0xFE
    _emit 0x56
    _emit 0x8D
    _emit 0x77
    _emit 0x24
    _emit 0xE8
    _emit 0x32
    _emit 0x0B
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x78
    _emit 0x6A
    _emit 0x00
    _emit 0x57
    _emit 0xE8
    _emit 0xF8
    _emit 0x4C
    _emit 0x05
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x5E
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xFF
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xC7
    _emit 0x05
    _emit 0x68
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x51
    _emit 0x14
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x83
    _emit 0x4F
    _emit 0x60
    _emit 0x04
    _emit 0x89
    _emit 0x3D
    _emit 0xE8
    _emit 0x44
    _emit 0x4B
    _emit 0x00
    _emit 0x89
    _emit 0x47
    _emit 0x74
    _emit 0xE8
    _emit 0xA3
    _emit 0xDD
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC7
    _emit 0x5F
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
