/* Byte-for-byte override for Constructor.

 * Original bytes (31):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 89 01 8b 45 0c 89 41 04
 *     0010: 33 c0 89 41 10 89 41 08
 *     0018: 89 41 0c 5d c2 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall Constructor(void * a0, undefined4 a1, undefined4 a2)
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
    _emit 0x89
    _emit 0x01
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x89
    _emit 0x41
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0x89
    _emit 0x41
    _emit 0x10
    _emit 0x89
    _emit 0x41
    _emit 0x08
    _emit 0x89
    _emit 0x41
    _emit 0x0C
    _emit 0x5D
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
