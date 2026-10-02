/* Byte-for-byte override for __strtoui64.

 * Original bytes (44):
 *     0000: 8b ff 55 8b ec 83 3d dc
 *     0008: 40 4b 00 00 6a 01 ff 75
 *     0010: 10 ff 75 0c ff 75 08 75
 *     0018: 07 68 c0 da 4a 00 eb 02
 *     0020: 6a 00 e8 fa fc ff ff 83
 *     0028: c4 14 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

ulonglong __cdecl __strtoui64(char * a0, char ** a1, int a2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0x3D
    _emit 0xDC
    _emit 0x40
    _emit 0x4B
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x01
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x75
    _emit 0x07
    _emit 0x68
    _emit 0xC0
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x6A
    _emit 0x00
    _emit 0xE8
    _emit 0xFA
    _emit 0xFC
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
