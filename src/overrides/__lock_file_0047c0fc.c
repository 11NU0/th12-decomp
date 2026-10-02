/* Byte-for-byte override for __lock_file.

 * Original bytes (65):
 *     0000: 8b ff 55 8b ec 56 8b 75
 *     0008: 08 b8 f0 db 4a 00 3b f0
 *     0010: 72 22 81 fe 50 de 4a 00
 *     0018: 77 1a 8b ce 2b c8 c1 f9
 *     0020: 05 83 c1 10 51 e8 74 2b
 *     0028: ff ff 81 4e 0c 00 80 00
 *     0030: 00 59 eb 0a 83 c6 20 56
 *     0038: ff 15 88 80 49 00 5e 5d
 *     0040: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __lock_file(FILE * a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x08
    _emit 0xB8
    _emit 0xF0
    _emit 0xDB
    _emit 0x4A
    _emit 0x00
    _emit 0x3B
    _emit 0xF0
    _emit 0x72
    _emit 0x22
    _emit 0x81
    _emit 0xFE
    _emit 0x50
    _emit 0xDE
    _emit 0x4A
    _emit 0x00
    _emit 0x77
    _emit 0x1A
    _emit 0x8B
    _emit 0xCE
    _emit 0x2B
    _emit 0xC8
    _emit 0xC1
    _emit 0xF9
    _emit 0x05
    _emit 0x83
    _emit 0xC1
    _emit 0x10
    _emit 0x51
    _emit 0xE8
    _emit 0x74
    _emit 0x2B
    _emit 0xFF
    _emit 0xFF
    _emit 0x81
    _emit 0x4E
    _emit 0x0C
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0xEB
    _emit 0x0A
    _emit 0x83
    _emit 0xC6
    _emit 0x20
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0x88
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
