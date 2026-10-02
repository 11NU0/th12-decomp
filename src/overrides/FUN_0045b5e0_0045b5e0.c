/* Byte-for-byte override for FUN_0045b5e0.

 * Original bytes (33):
 *     0000: 8b c6 e8 29 fc ff ff 85
 *     0008: c0 74 06 83 c8 ff c2 04
 *     0010: 00 8b 4c 24 04 6a 00 8b
 *     0018: c6 e8 52 e8 ff ff c2 04
 *     0020: 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_0045b5e0(void * a0)
{
  __asm {
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x29
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x06
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0xC2
    _emit 0x04
    _emit 0x00
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x04
    _emit 0x6A
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x52
    _emit 0xE8
    _emit 0xFF
    _emit 0xFF
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
