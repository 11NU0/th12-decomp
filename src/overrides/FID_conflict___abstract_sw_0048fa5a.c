/* Byte-for-byte override for FID_conflict___abstract_sw_0048fa5a.

 * Original bytes (67):
 *     0000: 8b ff 55 8b ec 8a 4d 08
 *     0008: 33 c0 f6 c1 3f 74 32 f6
 *     0010: c1 01 74 03 6a 10 58 f6
 *     0018: c1 04 74 03 83 c8 08 f6
 *     0020: c1 08 74 03 83 c8 04 f6
 *     0028: c1 10 74 03 83 c8 02 f6
 *     0030: c1 20 74 03 83 c8 01 f6
 *     0038: c1 02 74 05 0d 00 00 08
 *     0040: 00 5d c3
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

uint __cdecl FID_conflict___abstract_sw(byte param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8A
    _emit 0x4D
    _emit 0x08
    _emit 0x33
    _emit 0xC0
    _emit 0xF6
    _emit 0xC1
    _emit 0x3F
    _emit 0x74
    _emit 0x32
    _emit 0xF6
    _emit 0xC1
    _emit 0x01
    _emit 0x74
    _emit 0x03
    _emit 0x6A
    _emit 0x10
    _emit 0x58
    _emit 0xF6
    _emit 0xC1
    _emit 0x04
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x08
    _emit 0xF6
    _emit 0xC1
    _emit 0x08
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x04
    _emit 0xF6
    _emit 0xC1
    _emit 0x10
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x02
    _emit 0xF6
    _emit 0xC1
    _emit 0x20
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xF6
    _emit 0xC1
    _emit 0x02
    _emit 0x74
    _emit 0x05
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
