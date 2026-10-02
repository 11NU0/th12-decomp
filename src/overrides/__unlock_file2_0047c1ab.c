/* Byte-for-byte override for __unlock_file2.

 * Original bytes (47):
 *     0000: 8b ff 55 8b ec 8b 4d 08
 *     0008: 83 f9 14 8b 45 0c 7d 13
 *     0010: 81 60 0c ff 7f ff ff 83
 *     0018: c1 10 51 e8 dd 29 ff ff
 *     0020: 59 5d c3 83 c0 20 50 ff
 *     0028: 15 8c 80 49 00 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __unlock_file2(int a0, void * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x83
    _emit 0xF9
    _emit 0x14
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x7D
    _emit 0x13
    _emit 0x81
    _emit 0x60
    _emit 0x0C
    _emit 0xFF
    _emit 0x7F
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC1
    _emit 0x10
    _emit 0x51
    _emit 0xE8
    _emit 0xDD
    _emit 0x29
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x5D
    _emit 0xC3
    _emit 0x83
    _emit 0xC0
    _emit 0x20
    _emit 0x50
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
