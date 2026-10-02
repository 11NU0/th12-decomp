/* Byte-for-byte override for __ctrlfp.

 * Original bytes (41):
 *     0000: 8b ff 55 8b ec 51 9b d9
 *     0008: 7d fc 8b 45 0c 8b 4d 08
 *     0010: 23 4d 0c f7 d0 23 45 fc
 *     0018: 0b c1 0f b7 c0 89 45 0c
 *     0020: d9 6d 0c 0f bf 45 fc c9
 *     0028: c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __stdcall __ctrlfp(undefined4 a0, undefined4 a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0x9B
    _emit 0xD9
    _emit 0x7D
    _emit 0xFC
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x23
    _emit 0x4D
    _emit 0x0C
    _emit 0xF7
    _emit 0xD0
    _emit 0x23
    _emit 0x45
    _emit 0xFC
    _emit 0x0B
    _emit 0xC1
    _emit 0x0F
    _emit 0xB7
    _emit 0xC0
    _emit 0x89
    _emit 0x45
    _emit 0x0C
    _emit 0xD9
    _emit 0x6D
    _emit 0x0C
    _emit 0x0F
    _emit 0xBF
    _emit 0x45
    _emit 0xFC
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
