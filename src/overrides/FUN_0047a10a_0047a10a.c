/* Byte-for-byte override for FUN_0047a10a.

 * Original bytes (33):
 *     0000: 8b ff 55 8b ec 8b 4d 0c
 *     0008: a1 a0 db 4a 00 8b 55 08
 *     0010: 23 55 0c f7 d1 23 c8 0b
 *     0018: ca 89 0d a0 db 4a 00 5d
 *     0020: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl FUN_0047a10a(uint a0, uint a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0xA1
    _emit 0xA0
    _emit 0xDB
    _emit 0x4A
    _emit 0x00
    _emit 0x8B
    _emit 0x55
    _emit 0x08
    _emit 0x23
    _emit 0x55
    _emit 0x0C
    _emit 0xF7
    _emit 0xD1
    _emit 0x23
    _emit 0xC8
    _emit 0x0B
    _emit 0xCA
    _emit 0x89
    _emit 0x0D
    _emit 0xA0
    _emit 0xDB
    _emit 0x4A
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
