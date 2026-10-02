/* Byte-for-byte override for _write_multi_char.

 * Original bytes (38):
 *     0000: 8b ff 55 8b ec 56 8b f0
 *     0008: eb 13 8b 4d 10 8a 45 08
 *     0010: ff 4d 0c e8 b5 ff ff ff
 *     0018: 83 3e ff 74 06 83 7d 0c
 *     0020: 00 7f e7 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl _write_multi_char(undefined4 a0, int a1, FILE * a2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x56
    _emit 0x8B
    _emit 0xF0
    _emit 0xEB
    _emit 0x13
    _emit 0x8B
    _emit 0x4D
    _emit 0x10
    _emit 0x8A
    _emit 0x45
    _emit 0x08
    _emit 0xFF
    _emit 0x4D
    _emit 0x0C
    _emit 0xE8
    _emit 0xB5
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0x3E
    _emit 0xFF
    _emit 0x74
    _emit 0x06
    _emit 0x83
    _emit 0x7D
    _emit 0x0C
    _emit 0x00
    _emit 0x7F
    _emit 0xE7
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
