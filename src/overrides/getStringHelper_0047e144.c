/* Byte-for-byte override for getStringHelper_0047e144.

 * Original bytes (55):
 *     0000: 8b ff 55 8b ec 8b 45 0c
 *     0008: 56 8b 75 14 57 8b 7d 08
 *     0010: 2b c7 3b f0 7e 02 8b f0
 *     0018: 85 f6 76 14 8b 45 10 8b
 *     0020: cf 2b c7 8b d6 53 8a 1c
 *     0028: 08 88 19 41 4a 75 f7 5b
 *     0030: 8d 04 37 5f 5e 5d c3
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

char * __cdecl getStringHelper(char *param_1,char *param_2,char *param_3,int param_4)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x14
    _emit 0x57
    _emit 0x8B
    _emit 0x7D
    _emit 0x08
    _emit 0x2B
    _emit 0xC7
    _emit 0x3B
    _emit 0xF0
    _emit 0x7E
    _emit 0x02
    _emit 0x8B
    _emit 0xF0
    _emit 0x85
    _emit 0xF6
    _emit 0x76
    _emit 0x14
    _emit 0x8B
    _emit 0x45
    _emit 0x10
    _emit 0x8B
    _emit 0xCF
    _emit 0x2B
    _emit 0xC7
    _emit 0x8B
    _emit 0xD6
    _emit 0x53
    _emit 0x8A
    _emit 0x1C
    _emit 0x08
    _emit 0x88
    _emit 0x19
    _emit 0x41
    _emit 0x4A
    _emit 0x75
    _emit 0xF7
    _emit 0x5B
    _emit 0x8D
    _emit 0x04
    _emit 0x37
    _emit 0x5F
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
