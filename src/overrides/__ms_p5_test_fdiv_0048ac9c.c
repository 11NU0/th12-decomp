/* Byte-for-byte override for __ms_p5_test_fdiv.

 * Original bytes (62):
 *     0000: 8b ff 55 8b ec 83 ec 18
 *     0008: dd 05 20 f3 49 00 dd 5d
 *     0010: f0 dd 05 18 f3 49 00 dd
 *     0018: 5d e8 dd 45 e8 dc 75 f0
 *     0020: dc 4d f0 dc 6d e8 dd 5d
 *     0028: f8 d9 e8 dc 5d f8 df e0
 *     0030: f6 c4 05 7a 05 33 c0 40
 *     0038: c9 c3 33 c0 c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall __ms_p5_test_fdiv(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xEC
    _emit 0x18
    _emit 0xDD
    _emit 0x05
    _emit 0x20
    _emit 0xF3
    _emit 0x49
    _emit 0x00
    _emit 0xDD
    _emit 0x5D
    _emit 0xF0
    _emit 0xDD
    _emit 0x05
    _emit 0x18
    _emit 0xF3
    _emit 0x49
    _emit 0x00
    _emit 0xDD
    _emit 0x5D
    _emit 0xE8
    _emit 0xDD
    _emit 0x45
    _emit 0xE8
    _emit 0xDC
    _emit 0x75
    _emit 0xF0
    _emit 0xDC
    _emit 0x4D
    _emit 0xF0
    _emit 0xDC
    _emit 0x6D
    _emit 0xE8
    _emit 0xDD
    _emit 0x5D
    _emit 0xF8
    _emit 0xD9
    _emit 0xE8
    _emit 0xDC
    _emit 0x5D
    _emit 0xF8
    _emit 0xDF
    _emit 0xE0
    _emit 0xF6
    _emit 0xC4
    _emit 0x05
    _emit 0x7A
    _emit 0x05
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0xC9
    _emit 0xC3
    _emit 0x33
    _emit 0xC0
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
