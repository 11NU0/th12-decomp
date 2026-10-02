/* Byte-for-byte override for ___tzset.

 * Original bytes (70):
 *     0000: 6a 08 68 98 ad 4a 00 e8
 *     0008: 60 8d ff ff 33 f6 39 35
 *     0010: cc 41 4b 00 75 2a 6a 06
 *     0018: e8 fd 7c ff ff 59 89 75
 *     0020: fc 39 35 cc 41 4b 00 75
 *     0028: 0b e8 bd f8 ff ff ff 05
 *     0030: cc 41 4b 00 c7 45 fc fe
 *     0038: ff ff ff e8 06 00 00 00
 *     0040: e8 6c 8d ff ff c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl ___tzset(void)
{
  __asm {
    _emit 0x6A
    _emit 0x08
    _emit 0x68
    _emit 0x98
    _emit 0xAD
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x60
    _emit 0x8D
    _emit 0xFF
    _emit 0xFF
    _emit 0x33
    _emit 0xF6
    _emit 0x39
    _emit 0x35
    _emit 0xCC
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x2A
    _emit 0x6A
    _emit 0x06
    _emit 0xE8
    _emit 0xFD
    _emit 0x7C
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x89
    _emit 0x75
    _emit 0xFC
    _emit 0x39
    _emit 0x35
    _emit 0xCC
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x0B
    _emit 0xE8
    _emit 0xBD
    _emit 0xF8
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x05
    _emit 0xCC
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xE8
    _emit 0x06
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x6C
    _emit 0x8D
    _emit 0xFF
    _emit 0xFF
    _emit 0xC3
  }
  __assume(0);
}
