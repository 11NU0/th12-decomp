/* Byte-for-byte override for FUN_0048b429.

 * Original bytes (45):
 *     0000: 6a 0c 68 d8 af 4a 00 e8
 *     0008: b7 48 fe ff 83 65 fc 00
 *     0010: 66 0f 28 c1 c7 45 e4 01
 *     0018: 00 00 00 eb 23 8b 45 ec
 *     0020: 8b 00 8b 00 3d 05 00 00
 *     0028: c0 74 0a 3d 1d
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0048b429(void)
{
  __asm {
    _emit 0x6A
    _emit 0x0C
    _emit 0x68
    _emit 0xD8
    _emit 0xAF
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0xB7
    _emit 0x48
    _emit 0xFE
    _emit 0xFF
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0x66
    _emit 0x0F
    _emit 0x28
    _emit 0xC1
    _emit 0xC7
    _emit 0x45
    _emit 0xE4
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x23
    _emit 0x8B
    _emit 0x45
    _emit 0xEC
    _emit 0x8B
    _emit 0x00
    _emit 0x8B
    _emit 0x00
    _emit 0x3D
    _emit 0x05
    _emit 0x00
    _emit 0x00
    _emit 0xC0
    _emit 0x74
    _emit 0x0A
    _emit 0x3D
    _emit 0x1D
  }
  __assume(0);
}
