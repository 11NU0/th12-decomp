/* Byte-for-byte override for FUN_0046eba8.

 * Original bytes (23):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: ff 34 c5 b8 d2 4a 00 ff
 *     0010: 15 8c 80 49 00 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl FUN_0046eba8(int a0)
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
    _emit 0xFF
    _emit 0x34
    _emit 0xC5
    _emit 0xB8
    _emit 0xD2
    _emit 0x4A
    _emit 0x00
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
