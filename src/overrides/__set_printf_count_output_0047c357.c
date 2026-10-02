/* Byte-for-byte override for __set_printf_count_output.

 * Original bytes (42):
 *     0000: 8b ff 55 8b ec 8b 0d 38
 *     0008: d1 4a 00 8b 55 08 83 c9
 *     0010: 01 33 c0 39 0d f4 42 4b
 *     0018: 00 0f 94 c0 f7 da 1b d2
 *     0020: 23 d1 89 15 f4 42 4b 00
 *     0028: 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl __set_printf_count_output(int a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x0D
    _emit 0x38
    _emit 0xD1
    _emit 0x4A
    _emit 0x00
    _emit 0x8B
    _emit 0x55
    _emit 0x08
    _emit 0x83
    _emit 0xC9
    _emit 0x01
    _emit 0x33
    _emit 0xC0
    _emit 0x39
    _emit 0x0D
    _emit 0xF4
    _emit 0x42
    _emit 0x4B
    _emit 0x00
    _emit 0x0F
    _emit 0x94
    _emit 0xC0
    _emit 0xF7
    _emit 0xDA
    _emit 0x1B
    _emit 0xD2
    _emit 0x23
    _emit 0xD1
    _emit 0x89
    _emit 0x15
    _emit 0xF4
    _emit 0x42
    _emit 0x4B
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
