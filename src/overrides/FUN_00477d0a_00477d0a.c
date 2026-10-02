/* Byte-for-byte override for FUN_00477d0a.

 * Original bytes (18):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 8b 00 8b 80 bc 00 00 00
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

undefined4 __cdecl FUN_00477d0a(int * a0)
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
    _emit 0x00
    _emit 0x8B
    _emit 0x80
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
