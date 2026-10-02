/* Byte-for-byte override for __strtoi64.

 * Original bytes (43):
 *     0000: 8b ff 55 8b ec 33 c0 50
 *     0008: ff 75 10 ff 75 0c ff 75
 *     0010: 08 39 05 dc 40 4b 00 75
 *     0018: 07 68 c0 da 4a 00 eb 01
 *     0020: 50 e8 43 fd ff ff 83 c4
 *     0028: 14 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

longlong __cdecl __strtoi64(char * a0, char ** a1, int a2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x50
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x39
    _emit 0x05
    _emit 0xDC
    _emit 0x40
    _emit 0x4B
    _emit 0x00
    _emit 0x75
    _emit 0x07
    _emit 0x68
    _emit 0xC0
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0xEB
    _emit 0x01
    _emit 0x50
    _emit 0xE8
    _emit 0x43
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
