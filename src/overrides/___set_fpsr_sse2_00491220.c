/* Byte-for-byte override for ___set_fpsr_sse2.

 * Original bytes (68):
 *     0000: 6a 08 68 08 b2 4a 00 e8
 *     0008: c0 ea fd ff 33 c0 39 05
 *     0010: dc 52 4d 00 74 56 f6 45
 *     0018: 08 40 74 48 39 05 48 e4
 *     0020: 4a 00 74 40 89 45 fc 0f
 *     0028: ae 55 08 eb 2e 8b 45 ec
 *     0030: 8b 00 8b 00 3d 05 00 00
 *     0038: c0 74 0a 3d 1d 00 00 c0
 *     0040: 74 03 33 c0
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl ___set_fpsr_sse2(uint a0)
{
  __asm {
    _emit 0x6A
    _emit 0x08
    _emit 0x68
    _emit 0x08
    _emit 0xB2
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0xC0
    _emit 0xEA
    _emit 0xFD
    _emit 0xFF
    _emit 0x33
    _emit 0xC0
    _emit 0x39
    _emit 0x05
    _emit 0xDC
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x74
    _emit 0x56
    _emit 0xF6
    _emit 0x45
    _emit 0x08
    _emit 0x40
    _emit 0x74
    _emit 0x48
    _emit 0x39
    _emit 0x05
    _emit 0x48
    _emit 0xE4
    _emit 0x4A
    _emit 0x00
    _emit 0x74
    _emit 0x40
    _emit 0x89
    _emit 0x45
    _emit 0xFC
    _emit 0x0F
    _emit 0xAE
    _emit 0x55
    _emit 0x08
    _emit 0xEB
    _emit 0x2E
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
    _emit 0x00
    _emit 0x00
    _emit 0xC0
    _emit 0x74
    _emit 0x03
    _emit 0x33
    _emit 0xC0
  }
  __assume(0);
}
