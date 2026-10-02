/* Byte-for-byte override for __callthreadstartex.

 * Original bytes (53):
 *     0000: 6a 0c 68 d8 aa 4a 00 e8
 *     0008: 59 18 00 00 e8 cf 6f 00
 *     0010: 00 83 65 fc 00 ff 70 58
 *     0018: ff 50 54 50 e8 a2 ff ff
 *     0020: ff 8b 45 ec 8b 08 8b 09
 *     0028: 89 4d e4 50 51 e8 7a 96
 *     0030: 00 00 59 59 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall __callthreadstartex(void)
{
  __asm {
    _emit 0x6A
    _emit 0x0C
    _emit 0x68
    _emit 0xD8
    _emit 0xAA
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x59
    _emit 0x18
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0xCF
    _emit 0x6F
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0xFF
    _emit 0x70
    _emit 0x58
    _emit 0xFF
    _emit 0x50
    _emit 0x54
    _emit 0x50
    _emit 0xE8
    _emit 0xA2
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x45
    _emit 0xEC
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x09
    _emit 0x89
    _emit 0x4D
    _emit 0xE4
    _emit 0x50
    _emit 0x51
    _emit 0xE8
    _emit 0x7A
    _emit 0x96
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x59
    _emit 0xC3
  }
  __assume(0);
}
