/* Byte-for-byte override for ___set_flsgetvalue.

 * Original bytes (52):
 *     0000: 8b ff 56 ff 35 cc da 4a
 *     0008: 00 ff 15 4c 81 49 00 8b
 *     0010: f0 85 f6 75 1b ff 35 04
 *     0018: 41 4b 00 e8 45 ff ff ff
 *     0020: 59 8b f0 56 ff 35 cc da
 *     0028: 4a 00 ff 15 44 81 49 00
 *     0030: 8b c6 5e c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

LPVOID __stdcall ___set_flsgetvalue(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x56
    _emit 0xFF
    _emit 0x35
    _emit 0xCC
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x4C
    _emit 0x81
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x1B
    _emit 0xFF
    _emit 0x35
    _emit 0x04
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0xE8
    _emit 0x45
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x8B
    _emit 0xF0
    _emit 0x56
    _emit 0xFF
    _emit 0x35
    _emit 0xCC
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x44
    _emit 0x81
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
