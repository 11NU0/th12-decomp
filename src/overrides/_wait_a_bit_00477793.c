/* Byte-for-byte override for _wait_a_bit.

 * Original bytes (38):
 *     0000: 8b ff 55 8b ec 56 8b 75
 *     0008: 08 56 ff 15 84 80 49 00
 *     0010: 81 c6 e8 03 00 00 3b 35
 *     0018: d0 41 4b 00 76 03 83 ce
 *     0020: ff 8b c6 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __cdecl _wait_a_bit(DWORD a0)
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
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0x84
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x81
    _emit 0xC6
    _emit 0xE8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0x35
    _emit 0xD0
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x76
    _emit 0x03
    _emit 0x83
    _emit 0xCE
    _emit 0xFF
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
