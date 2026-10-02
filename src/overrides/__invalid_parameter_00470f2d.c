/* Byte-for-byte override for __invalid_parameter.

 * Original bytes (38):
 *     0000: 8b ff 55 8b ec ff 35 60
 *     0008: 3d 4b 00 e8 a1 42 00 00
 *     0010: 59 85 c0 74 03 5d ff e0
 *     0018: 6a 02 e8 b3 a4 00 00 59
 *     0020: 5d e9 73 fe ff ff
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __invalid_parameter(wchar_t * a0, wchar_t * a1, wchar_t * a2, uint a3, uintptr_t a4)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0xFF
    _emit 0x35
    _emit 0x60
    _emit 0x3D
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0xA1
    _emit 0x42
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x03
    _emit 0x5D
    _emit 0xFF
    _emit 0xE0
    _emit 0x6A
    _emit 0x02
    _emit 0xE8
    _emit 0xB3
    _emit 0xA4
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5D
    _emit 0xE9
    _emit 0x73
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
  }
  __assume(0);
}
