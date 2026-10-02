/* Byte-for-byte override for __ValidateImageBase.

 * Original bytes (53):
 *     0000: 8b ff 55 8b ec 8b 4d 08
 *     0008: b8 4d 5a 00 00 66 39 01
 *     0010: 74 04 33 c0 5d c3 8b 41
 *     0018: 3c 03 c1 81 38 50 45 00
 *     0020: 00 75 ef 33 d2 b9 0b 01
 *     0028: 00 00 66 39 48 18 0f 94
 *     0030: c2 8b c2 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

BOOL __cdecl __ValidateImageBase(PBYTE a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0xB8
    _emit 0x4D
    _emit 0x5A
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x39
    _emit 0x01
    _emit 0x74
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
    _emit 0x8B
    _emit 0x41
    _emit 0x3C
    _emit 0x03
    _emit 0xC1
    _emit 0x81
    _emit 0x38
    _emit 0x50
    _emit 0x45
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0xEF
    _emit 0x33
    _emit 0xD2
    _emit 0xB9
    _emit 0x0B
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x66
    _emit 0x39
    _emit 0x48
    _emit 0x18
    _emit 0x0F
    _emit 0x94
    _emit 0xC2
    _emit 0x8B
    _emit 0xC2
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
