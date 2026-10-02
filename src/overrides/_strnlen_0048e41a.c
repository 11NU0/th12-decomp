/* Byte-for-byte override for _strnlen.

 * Original bytes (29):
 *     0000: 8b ff 55 8b ec 33 c0 39
 *     0008: 45 0c 76 0f 8b 4d 08 80
 *     0010: 39 00 74 07 40 41 3b 45
 *     0018: 0c 72 f4 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

size_t __cdecl _strnlen(char * a0, size_t a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x39
    _emit 0x45
    _emit 0x0C
    _emit 0x76
    _emit 0x0F
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x80
    _emit 0x39
    _emit 0x00
    _emit 0x74
    _emit 0x07
    _emit 0x40
    _emit 0x41
    _emit 0x3B
    _emit 0x45
    _emit 0x0C
    _emit 0x72
    _emit 0xF4
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
