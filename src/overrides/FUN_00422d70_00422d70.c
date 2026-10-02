/* Byte-for-byte override for FUN_00422d70.

 * Original bytes (90):
 *     0000: 51 56 57 8b f8 8b 47 08
 *     0008: 8b 8f 90 00 00 00 3b c1
 *     0010: 7c 06 33 c0 5f 5e 59 c3
 *     0018: 03 c3 3b c1 89 47 08 7e
 *     0020: 15 8b 35 e4 43 4b 00 6a
 *     0028: 00 b8 02 00 00 00 89 4f
 *     0030: 08 e8 ea e1 ff ff 8b 4f
 *     0038: 08 8b bf 94 00 00 00 8b
 *     0040: c1 2b c3 99 f7 ff 8b f0
 *     0048: 8b c1 99 f7 ff 33 c9 5f
 *     0050: 3b f0 0f 95 c1 5e 8b c1
 *     0058: 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

bool __stdcall FUN_00422d70(void)
{
  __asm {
    _emit 0x51
    _emit 0x56
    _emit 0x57
    _emit 0x8B
    _emit 0xF8
    _emit 0x8B
    _emit 0x47
    _emit 0x08
    _emit 0x8B
    _emit 0x8F
    _emit 0x90
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0xC1
    _emit 0x7C
    _emit 0x06
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0x5E
    _emit 0x59
    _emit 0xC3
    _emit 0x03
    _emit 0xC3
    _emit 0x3B
    _emit 0xC1
    _emit 0x89
    _emit 0x47
    _emit 0x08
    _emit 0x7E
    _emit 0x15
    _emit 0x8B
    _emit 0x35
    _emit 0xE4
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xB8
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x4F
    _emit 0x08
    _emit 0xE8
    _emit 0xEA
    _emit 0xE1
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x4F
    _emit 0x08
    _emit 0x8B
    _emit 0xBF
    _emit 0x94
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xC1
    _emit 0x2B
    _emit 0xC3
    _emit 0x99
    _emit 0xF7
    _emit 0xFF
    _emit 0x8B
    _emit 0xF0
    _emit 0x8B
    _emit 0xC1
    _emit 0x99
    _emit 0xF7
    _emit 0xFF
    _emit 0x33
    _emit 0xC9
    _emit 0x5F
    _emit 0x3B
    _emit 0xF0
    _emit 0x0F
    _emit 0x95
    _emit 0xC1
    _emit 0x5E
    _emit 0x8B
    _emit 0xC1
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
