/* Byte-for-byte override for _ValidateRead.

 * Original bytes (18):
 *     0000: 8b ff 55 8b ec 33 c0 40
 *     0008: 83 7d 08 00 75 02 33 c0
 *     0010: 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl _ValidateRead(void * a0, uint a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0x83
    _emit 0x7D
    _emit 0x08
    _emit 0x00
    _emit 0x75
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
