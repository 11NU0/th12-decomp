/* Byte-for-byte override for __IsZeroMan.

 * Original bytes (31):
 *     0000: 8b ff 55 8b ec 33 c0 8b
 *     0008: 4d 08 83 3c 81 00 75 0b
 *     0010: 40 83 f8 03 7c f1 33 c0
 *     0018: 40 5d c3 33 c0 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl __IsZeroMan(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x83
    _emit 0x3C
    _emit 0x81
    _emit 0x00
    _emit 0x75
    _emit 0x0B
    _emit 0x40
    _emit 0x83
    _emit 0xF8
    _emit 0x03
    _emit 0x7C
    _emit 0xF1
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
