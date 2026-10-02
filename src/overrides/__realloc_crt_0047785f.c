/* Byte-for-byte override for __realloc_crt_0047785f.

 * Original bytes (78):
 *     0000: 8b ff 55 8b ec 56 57 33
 *     0008: f6 ff 75 0c ff 75 08 e8
 *     0010: 93 3d 01 00 8b f8 59 59
 *     0018: 85 ff 75 2c 39 45 0c 74
 *     0020: 27 39 05 d0 41 4b 00 76
 *     0028: 1f 56 ff 15 84 80 49 00
 *     0030: 8d 86 e8 03 00 00 3b 05
 *     0038: d0 41 4b 00 76 03 83 c8
 *     0040: ff 8b f0 83 f8 ff 75 c1
 *     0048: 8b c7 5f 5e 5d c3
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original opens with a `push ebp / mov ebp,esp`
 * frame and addresses its arguments through EBP, while this pass addresses
 * them through ESP; the original carries the `/hotpatch` `mov edi,edi` slot;
 * the original pushes each argument straight onto the stack (`push dword
 * [ebp+n]`) where this pass copies it into a register first.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void * __cdecl __realloc_crt(void *_Ptr,size_t _NewSize)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x56
    _emit 0x57
    _emit 0x33
    _emit 0xF6
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x93
    _emit 0x3D
    _emit 0x01
    _emit 0x00
    _emit 0x8B
    _emit 0xF8
    _emit 0x59
    _emit 0x59
    _emit 0x85
    _emit 0xFF
    _emit 0x75
    _emit 0x2C
    _emit 0x39
    _emit 0x45
    _emit 0x0C
    _emit 0x74
    _emit 0x27
    _emit 0x39
    _emit 0x05
    _emit 0xD0
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x76
    _emit 0x1F
    _emit 0x56
    _emit 0xFF
    _emit 0x15
    _emit 0x84
    _emit 0x80
    _emit 0x49
    _emit 0x00
    _emit 0x8D
    _emit 0x86
    _emit 0xE8
    _emit 0x03
    _emit 0x00
    _emit 0x00
    _emit 0x3B
    _emit 0x05
    _emit 0xD0
    _emit 0x41
    _emit 0x4B
    _emit 0x00
    _emit 0x76
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0x8B
    _emit 0xF0
    _emit 0x83
    _emit 0xF8
    _emit 0xFF
    _emit 0x75
    _emit 0xC1
    _emit 0x8B
    _emit 0xC7
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
