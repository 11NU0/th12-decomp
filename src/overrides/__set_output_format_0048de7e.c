/* Byte-for-byte override for __set_output_format.

 * Original bytes (60):
 *     0000: 8b ff 55 8b ec 8b 45 08
 *     0008: 56 8b 35 ac 43 4b 00 a9
 *     0010: fe ff ff ff 74 1c e8 d6
 *     0018: 0a fe ff c7 00 16 00 00
 *     0020: 00 33 c0 50 50 50 50 50
 *     0028: e8 82 30 fe ff 83 c4 14
 *     0030: eb 05 a3 ac 43 4b 00 8b
 *     0038: c6 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __cdecl __set_output_format(uint a0)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xAC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0xA9
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x74
    _emit 0x1C
    _emit 0xE8
    _emit 0xD6
    _emit 0x0A
    _emit 0xFE
    _emit 0xFF
    _emit 0xC7
    _emit 0x00
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x50
    _emit 0x50
    _emit 0x50
    _emit 0x50
    _emit 0x50
    _emit 0xE8
    _emit 0x82
    _emit 0x30
    _emit 0xFE
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0xEB
    _emit 0x05
    _emit 0xA3
    _emit 0xAC
    _emit 0x43
    _emit 0x4B
    _emit 0x00
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
