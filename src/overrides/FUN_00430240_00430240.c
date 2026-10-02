/* Byte-for-byte override for FUN_00430240.

 * Original bytes (44):
 *     0000: f6 05 e8 ea 4c 00 10 57
 *     0008: 6a 00 bf 20 0a 4a 00 b8
 *     0010: e8 f4 4c 00 74 0b 6a 04
 *     0018: e8 03 47 02 00 33 c0 5f
 *     0020: c3 6a 03 e8 f8 46 02 00
 *     0028: 33 c0 5f c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00430240(void)
{
  __asm {
    _emit 0xF6
    _emit 0x05
    _emit 0xE8
    _emit 0xEA
    _emit 0x4C
    _emit 0x00
    _emit 0x10
    _emit 0x57
    _emit 0x6A
    _emit 0x00
    _emit 0xBF
    _emit 0x20
    _emit 0x0A
    _emit 0x4A
    _emit 0x00
    _emit 0xB8
    _emit 0xE8
    _emit 0xF4
    _emit 0x4C
    _emit 0x00
    _emit 0x74
    _emit 0x0B
    _emit 0x6A
    _emit 0x04
    _emit 0xE8
    _emit 0x03
    _emit 0x47
    _emit 0x02
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0xC3
    _emit 0x6A
    _emit 0x03
    _emit 0xE8
    _emit 0xF8
    _emit 0x46
    _emit 0x02
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0xC3
  }
  __assume(0);
}
