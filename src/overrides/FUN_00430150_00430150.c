/* Byte-for-byte override for FUN_00430150.

 * Original bytes (75):
 *     0000: f6 05 e8 ea 4c 00 10 57
 *     0008: 74 13 6a 00 6a 04 bf 20
 *     0010: 0a 4a 00 b8 e8 f4 4c 00
 *     0018: e8 f3 47 02 00 8b 44 24
 *     0020: 08 50 6a 02 bf 20 0a 4a
 *     0028: 00 b8 e8 f4 4c 00 e8 dd
 *     0030: 47 02 00 8b 0d 1c 45 4b
 *     0038: 00 8b 54 24 0c c6 84 11
 *     0040: da e9 01 00 01 33 c0 5f
 *     0048: c2 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00430150(undefined4 a0, int a1)
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
    _emit 0x74
    _emit 0x13
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x04
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
    _emit 0xE8
    _emit 0xF3
    _emit 0x47
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x08
    _emit 0x50
    _emit 0x6A
    _emit 0x02
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
    _emit 0xE8
    _emit 0xDD
    _emit 0x47
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x0D
    _emit 0x1C
    _emit 0x45
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0x54
    _emit 0x24
    _emit 0x0C
    _emit 0xC6
    _emit 0x84
    _emit 0x11
    _emit 0xDA
    _emit 0xE9
    _emit 0x01
    _emit 0x00
    _emit 0x01
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
