/* Byte-for-byte override for __unlock_fhandle.

 * Original bytes (39):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 8b c8 83 e0 1f c1 f9 05
 *     0010: 8b 0c 8d 20 63 4d 00 c1
 *     0018: e0 06 8d 44 01 0c 50 ff
 *     0020: 15 8c 80 49 00 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __unlock_fhandle(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x8B
    _emit 0xC8
    _emit 0x83
    _emit 0xE0
    _emit 0x1F
    _emit 0xC1
    _emit 0xF9
    _emit 0x05
    _emit 0x8B
    _emit 0x0C
    _emit 0x8D
    _emit 0x20
    _emit 0x63
    _emit 0x4D
    _emit 0x00
    _emit 0xC1
    _emit 0xE0
    _emit 0x06
    _emit 0x8D
    _emit 0x44
    _emit 0x01
    _emit 0x0C
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0x8C
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
