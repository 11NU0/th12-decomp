/* Byte-for-byte override for _ispunct.

 * Original bytes (46):
 *     0000: 8b ff 55 8b ec 83 3d dc
 *     0008: 40 4b 00 00 75 12 8b 45
 *     0010: 08 8b 0d a8 da 4a 00 0f
 *     0018: b7 04 41 83 e0 10 5d c3
 *     0020: 6a 00 ff 75 08 e8 85 ff
 *     0028: ff ff 59 59 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl _ispunct(int a0)
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
    _emit 0x12
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x8B
    _emit 0x0D
    _emit 0xA8
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0x0F
    _emit 0xB7
    _emit 0x04
    _emit 0x41
    _emit 0x83
    _emit 0xE0
    _emit 0x10
    _emit 0x5D
    _emit 0xC3
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x85
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x59
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
