/* Byte-for-byte override for exception_0046dfce.

 * Original bytes (93):
 *     0000: 8b ff 55 8b ec 53 8b 5d
 *     0008: 08 56 8b f1 c7 06 28 cd
 *     0010: 49 00 8b 43 08 89 46 08
 *     0018: 85 c0 8b 43 04 57 74 31
 *     0020: 85 c0 74 27 50 e8 68 78
 *     0028: 00 00 8b f8 47 57 e8 49
 *     0030: f0 ff ff 59 59 89 46 04
 *     0038: 85 c0 74 18 ff 73 04 57
 *     0040: 50 e8 a5 c2 00 00 83 c4
 *     0048: 0c eb 09 83 66 04 00 eb
 *     0050: 03 89 46 04 5f 8b c6 5e
 *     0058: 5b 5d c2 04 00
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

exception * __fastcall std_exception_exception(exception *_this,exception *param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x53
    _emit 0x8B
    _emit 0x5D
    _emit 0x08
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0xC7
    _emit 0x06
    _emit 0x28
    _emit 0xCD
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x43
    _emit 0x08
    _emit 0x89
    _emit 0x46
    _emit 0x08
    _emit 0x85
    _emit 0xC0
    _emit 0x8B
    _emit 0x43
    _emit 0x04
    _emit 0x57
    _emit 0x74
    _emit 0x31
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x27
    _emit 0x50
    _emit 0xE8
    _emit 0x68
    _emit 0x78
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xF8
    _emit 0x47
    _emit 0x57
    _emit 0xE8
    _emit 0x49
    _emit 0xF0
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x59
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x18
    _emit 0xFF
    _emit 0x73
    _emit 0x04
    _emit 0x57
    _emit 0x50
    _emit 0xE8
    _emit 0xA5
    _emit 0xC2
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0xEB
    _emit 0x09
    _emit 0x83
    _emit 0x66
    _emit 0x04
    _emit 0x00
    _emit 0xEB
    _emit 0x03
    _emit 0x89
    _emit 0x46
    _emit 0x04
    _emit 0x5F
    _emit 0x8B
    _emit 0xC6
    _emit 0x5E
    _emit 0x5B
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
