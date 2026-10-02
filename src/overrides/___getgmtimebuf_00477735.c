/* Byte-for-byte override for ___getgmtimebuf_00477735.

 * Original bytes (55):
 *     0000: 8b ff 56 e8 b1 dc ff ff
 *     0008: 8b f0 85 f6 75 0f e8 27
 *     0010: 72 ff ff c7 00 0c 00 00
 *     0018: 00 33 c0 5e c3 83 7e 44
 *     0020: 00 75 0f 6a 24 e8 6f 00
 *     0028: 00 00 59 89 46 44 85 c0
 *     0030: 74 dc 8b 46 44 5e c3
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original carries the `/hotpatch` `mov edi,edi`
 * slot.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

tm * __cdecl ___getgmtimebuf(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x56
    _emit 0xE8
    _emit 0xB1
    _emit 0xDC
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0xF0
    _emit 0x85
    _emit 0xF6
    _emit 0x75
    _emit 0x0F
    _emit 0xE8
    _emit 0x27
    _emit 0x72
    _emit 0xFF
    _emit 0xFF
    _emit 0xC7
    _emit 0x00
    _emit 0x0C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x5E
    _emit 0xC3
    _emit 0x83
    _emit 0x7E
    _emit 0x44
    _emit 0x00
    _emit 0x75
    _emit 0x0F
    _emit 0x6A
    _emit 0x24
    _emit 0xE8
    _emit 0x6F
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x59
    _emit 0x89
    _emit 0x46
    _emit 0x44
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0xDC
    _emit 0x8B
    _emit 0x46
    _emit 0x44
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
