/* Byte-for-byte override for _TestDefaultCountry.

 * Original bytes (36):
 *     0000: 8b ff 55 8b ec 33 c0 66
 *     0008: 8b 4d 08 66 3b 88 d8 f2
 *     0010: 49 00 74 0c 40 40 83 f8
 *     0018: 14 72 ec 33 c0 40 5d c3
 *     0020: 33 c0 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl _TestDefaultCountry(short a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x66
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x66
    _emit 0x3B
    _emit 0x88
    _emit 0xD8
    _emit 0xF2
    _emit 0x49
    _emit 0x00
    _emit 0x74
    _emit 0x0C
    _emit 0x40
    _emit 0x40
    _emit 0x83
    _emit 0xF8
    _emit 0x14
    _emit 0x72
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0x5D
    _emit 0xC3
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
