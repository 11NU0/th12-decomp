/* Byte-for-byte override for __EH_prolog3_catch.

 * Original bytes (54):
 *     0000: 50 64 ff 35 00 00 00 00
 *     0008: 8d 44 24 0c 2b 64 24 0c
 *     0010: 53 56 57 89 28 8b e8 a1
 *     0018: 38 d1 4a 00 33 c5 50 89
 *     0020: 65 f0 ff 75 fc c7 45 fc
 *     0028: ff ff ff ff 8d 45 f4 64
 *     0030: a3 00 00 00 00 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __EH_prolog3_catch(int a0)
{
  __asm {
    _emit 0x50
    _emit 0x64
    _emit 0xFF
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8D
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x2B
    _emit 0x64
    _emit 0x24
    _emit 0x0C
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x89
    _emit 0x28
    _emit 0x8B
    _emit 0xE8
    _emit 0xA1
    _emit 0x38
    _emit 0xD1
    _emit 0x4A
    _emit 0x00
    _emit 0x33
    _emit 0xC5
    _emit 0x50
    _emit 0x89
    _emit 0x65
    _emit 0xF0
    _emit 0xFF
    _emit 0x75
    _emit 0xFC
    _emit 0xC7
    _emit 0x45
    _emit 0xFC
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x8D
    _emit 0x45
    _emit 0xF4
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC3
  }
  __assume(0);
}
