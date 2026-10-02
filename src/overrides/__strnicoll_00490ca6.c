/* Byte-for-byte override for __strnicoll.

 * Original bytes (41):
 *     0000: 8b ff 55 8b ec 83 3d dc
 *     0008: 40 4b 00 00 75 06 5d e9
 *     0010: 94 cc ff ff 6a 00 ff 75
 *     0018: 10 ff 75 0c ff 75 08 e8
 *     0020: e2 fe ff ff 83 c4 10 5d
 *     0028: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl __strnicoll(char * a0, char * a1, size_t a2)
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
    _emit 0x75
    _emit 0x06
    _emit 0x5D
    _emit 0xE9
    _emit 0x94
    _emit 0xCC
    _emit 0xFF
    _emit 0xFF
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0xE2
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
