/* Byte-for-byte override for __GET_RTERRMSG_00473138.

 * Original bytes (38):
 *     0000: 8b ff 55 8b ec 33 c0 8b
 *     0008: 4d 08 3b 0c c5 f8 d3 4a
 *     0010: 00 74 0a 40 83 f8 17 72
 *     0018: ee 33 c0 5d c3 8b 04 c5
 *     0020: fc d3 4a 00 5d c3
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original opens with a `push ebp / mov ebp,esp`
 * frame and addresses its arguments through EBP, while this pass addresses
 * them through ESP; the original carries the `/hotpatch` `mov edi,edi` slot.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

wchar_t * __cdecl __GET_RTERRMSG(int param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x33
    _emit 0xC0
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x3B
    _emit 0x0C
    _emit 0xC5
    _emit 0xF8
    _emit 0xD3
    _emit 0x4A
    _emit 0x00
    _emit 0x74
    _emit 0x0A
    _emit 0x40
    _emit 0x83
    _emit 0xF8
    _emit 0x17
    _emit 0x72
    _emit 0xEE
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
    _emit 0x8B
    _emit 0x04
    _emit 0xC5
    _emit 0xFC
    _emit 0xD3
    _emit 0x4A
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
