/* Byte-for-byte override for __get_dstbias.

 * Original bytes (57):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 56 33 f6 3b c6 75 1d e8
 *     0010: 70 76 ff ff 56 56 56 56
 *     0018: 56 c7 00 16 00 00 00 e8
 *     0020: 1e 9c ff ff 83 c4 14 6a
 *     0028: 16 58 eb 0a 8b 0d 00 db
 *     0030: 4a 00 89 08 33 c0 5e 5d
 *     0038: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

errno_t __cdecl __get_dstbias(long * a0)
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
    _emit 0x56
    _emit 0x33
    _emit 0xF6
    _emit 0x3B
    _emit 0xC6
    _emit 0x75
    _emit 0x1D
    _emit 0xE8
    _emit 0x70
    _emit 0x76
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0xC7
    _emit 0x00
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x1E
    _emit 0x9C
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x6A
    _emit 0x16
    _emit 0x58
    _emit 0xEB
    _emit 0x0A
    _emit 0x8B
    _emit 0x0D
    _emit 0x00
    _emit 0xDB
    _emit 0x4A
    _emit 0x00
    _emit 0x89
    _emit 0x08
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
