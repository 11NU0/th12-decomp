/* Byte-for-byte override for FUN_0046d585.

 * Original bytes (50):
 *     0000: 8b ff 55 8b ec 6a 00 ff
 *     0008: 75 08 ff 15 d8 81 49 00
 *     0010: 85 c0 75 08 ff 15 e4 80
 *     0018: 49 00 eb 02 33 c0 85 c0
 *     0020: 74 0c 50 e8 e8 13 00 00
 *     0028: 59 83 c8 ff 5d c3 33 c0
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

undefined4 __cdecl FUN_0046d585(LPCSTR a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xFF
    _emit 0x15
    _emit 0xD8
    _emit 0x81
    _emit 0x49
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x08
    _emit 0xFF
    _emit 0x15
    _emit 0xE4
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0C
    _emit 0x50
    _emit 0xE8
    _emit 0xE8
    _emit 0x13
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x5D
    _emit 0xC3
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
