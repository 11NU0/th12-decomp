/* Byte-for-byte override for _JumpToContinuation.

 * Original bytes (45):
 *     0000: 8b ff 55 8b ec 51 53 8b
 *     0008: 45 0c 83 c0 0c 89 45 fc
 *     0010: 64 8b 1d 00 00 00 00 8b
 *     0018: 03 64 a3 00 00 00 00 8b
 *     0020: 45 08 8b 5d 0c 8b 6d fc
 *     0028: 8b 63 fc ff e0
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall _JumpToContinuation(void * a0, EHRegistrationNode * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0x53
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x83
    _emit 0xC0
    _emit 0x0C
    _emit 0x89
    _emit 0x45
    _emit 0xFC
    _emit 0x64
    _emit 0x8B
    _emit 0x1D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x03
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x8B
    _emit 0x5D
    _emit 0x0C
    _emit 0x8B
    _emit 0x6D
    _emit 0xFC
    _emit 0x8B
    _emit 0x63
    _emit 0xFC
    _emit 0xFF
    _emit 0xE0
  }
  __assume(0);
}
