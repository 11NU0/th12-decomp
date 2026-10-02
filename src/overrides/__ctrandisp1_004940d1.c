/* Byte-for-byte override for __ctrandisp1.

 * Original bytes (51):
 *     0000: 55 8b ec 81 c4 30 fd ff
 *     0008: ff 53 ff 75 0c ff 75 08
 *     0010: e8 1e 00 00 00 83 c4 08
 *     0018: 9b d9 bd 5c ff ff ff 80
 *     0020: a5 38 fd ff ff fd e8 44
 *     0028: 00 00 00 e8 82 fe ff ff
 *     0030: 5b c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __ctrandisp1(uint a0, int a1)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x81
    _emit 0xC4
    _emit 0x30
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0x53
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x1E
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x08
    _emit 0x9B
    _emit 0xD9
    _emit 0xBD
    _emit 0x5C
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x80
    _emit 0xA5
    _emit 0x38
    _emit 0xFD
    _emit 0xFF
    _emit 0xFF
    _emit 0xFD
    _emit 0xE8
    _emit 0x44
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x82
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x5B
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
