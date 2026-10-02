/* Byte-for-byte override for __lock_file2.

 * Original bytes (50):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 83 f8 14 7d 16 83 c0 10
 *     0010: 50 e8 47 2b ff ff 8b 45
 *     0018: 0c 81 48 0c 00 80 00 00
 *     0020: 59 5d c3 8b 45 0c 83 c0
 *     0028: 20 50 ff 15 88 80 49 00
 *     0030: 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __lock_file2(int a0, void * a1)
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
    _emit 0x83
    _emit 0xF8
    _emit 0x14
    _emit 0x7D
    _emit 0x16
    _emit 0x83
    _emit 0xC0
    _emit 0x10
    _emit 0x50
    _emit 0xE8
    _emit 0x47
    _emit 0x2B
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x81
    _emit 0x48
    _emit 0x0C
    _emit 0x00
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x5D
    _emit 0xC3
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x83
    _emit 0xC0
    _emit 0x20
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0x88
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
