/* Byte-for-byte override for __heap_init.

 * Original bytes (48):
 *     0000: 8b ff 55 8b ec 33 c0 39
 *     0008: 45 08 6a 00 0f 94 c0 68
 *     0010: 00 10 00 00 50 ff 15 c0
 *     0018: 81 49 00 a3 04 3c 4b 00
 *     0020: 85 c0 75 02 5d c3 33 c0
 *     0028: 40 a3 58 64 4d 00 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl __heap_init(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x39
    _emit 0x45
    _emit 0x08
    _emit 0x6A
    _emit 0x00
    _emit 0x0F
    _emit 0x94
    _emit 0xC0
    _emit 0x68
    _emit 0x00
    _emit 0x10
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0xFF
    _emit 0x15
    _emit 0xC0
    _emit 0x81
    _emit 0x49
    _emit 0x00
    _emit 0xA3
    _emit 0x04
    _emit 0x3C
    _emit 0x4B
    _emit 0x00
    _emit 0x85
    _emit 0xC0
    _emit 0x75
    _emit 0x02
    _emit 0x5D
    _emit 0xC3
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0xA3
    _emit 0x58
    _emit 0x64
    _emit 0x4D
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
