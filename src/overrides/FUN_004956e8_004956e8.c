/* Byte-for-byte override for FUN_004956e8.

 * Original bytes (22):
 *     0000: 8b 44 24 08 25 00 00 f0
 *     0008: 7f 3d 00 00 f0 7f 74 01
 *     0010: c3 8b 44 24 08 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __cdecl FUN_004956e8(undefined4 a0, uint a1)
{
  __asm {
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x25
    _emit 0x00
    _emit 0x00
    _emit 0xF0
    _emit 0x7F
    _emit 0x3D
    _emit 0x00
    _emit 0x00
    _emit 0xF0
    _emit 0x7F
    _emit 0x74
    _emit 0x01
    _emit 0xC3
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0xC3
  }
  __assume(0);
}
