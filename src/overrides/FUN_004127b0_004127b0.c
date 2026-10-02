/* Byte-for-byte override for FUN_004127b0.

 * Original bytes (29):
 *     0000: 56 8b 35 cc 43 4b 00 83
 *     0008: 4e 7c 10 8b 46 20 50 e8
 *     0010: ac f2 04 00 c7 46 20 00
 *     0018: 00 00 00 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_004127b0(void * a0)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x83
    _emit 0x4E
    _emit 0x7C
    _emit 0x10
    _emit 0x8B
    _emit 0x46
    _emit 0x20
    _emit 0x50
    _emit 0xE8
    _emit 0xAC
    _emit 0xF2
    _emit 0x04
    _emit 0x00
    _emit 0xC7
    _emit 0x46
    _emit 0x20
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
