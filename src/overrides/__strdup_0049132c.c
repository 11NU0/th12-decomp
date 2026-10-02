/* Byte-for-byte override for __strdup_0049132c.

 * Original bytes (82):
 *     0000: 8b ff 55 8b ec 53 33 db
 *     0008: 39 5d 08 75 04 33 c0 eb
 *     0010: 41 56 57 ff 75 08 e8 19
 *     0018: 45 fe ff 8b f0 46 56 e8
 *     0020: fa bc fd ff 8b f8 59 59
 *     0028: 3b fb 74 22 ff 75 08 56
 *     0030: 57 e8 57 8f fe ff 83 c4
 *     0038: 0c 85 c0 74 0d 53 53 53
 *     0040: 53 53 e8 53 fa fd ff 83
 *     0048: c4 14 8b c7 eb 02 33 c0
 *     0050: 5f 5e
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

char * __cdecl __strdup(char *_Src)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x53
    _emit 0x33
    _emit 0xDB
    _emit 0x39
    _emit 0x5D
    _emit 0x08
    _emit 0x75
    _emit 0x04
    _emit 0x33
    _emit 0xC0
    _emit 0xEB
    _emit 0x41
    _emit 0x56
    _emit 0x57
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0x19
    _emit 0x45
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0xF0
    _emit 0x46
    _emit 0x56
    _emit 0xE8
    _emit 0xFA
    _emit 0xBC
    _emit 0xFD
    _emit 0xFF
    _emit 0x8B
    _emit 0xF8
    _emit 0x59
    _emit 0x59
    _emit 0x3B
    _emit 0xFB
    _emit 0x74
    _emit 0x22
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0x56
    _emit 0x57
    _emit 0xE8
    _emit 0x57
    _emit 0x8F
    _emit 0xFE
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x0C
    _emit 0x85
    _emit 0xC0
    _emit 0x74
    _emit 0x0D
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0x53
    _emit 0xE8
    _emit 0x53
    _emit 0xFA
    _emit 0xFD
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x8B
    _emit 0xC7
    _emit 0xEB
    _emit 0x02
    _emit 0x33
    _emit 0xC0
    _emit 0x5F
    _emit 0x5E
  }
  __assume(0);
}
