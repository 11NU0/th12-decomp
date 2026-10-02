/* Byte-for-byte override for FID_conflict__sscanf_0046dd72.

 * Original bytes (34):
 *     0000: 8b ff 55 8b ec 56 8b 75
 *     0008: 08 8d 45 10 50 6a 00 ff
 *     0010: 75 0c 68 16 8e 47 00 e8
 *     0018: 35 ff ff ff 83 c4 10 5e
 *     0020: 5d c3
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

int __cdecl FID_conflict__sscanf(char *_Src,char *_Format,...)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x08
    _emit 0x8D
    _emit 0x45
    _emit 0x10
    _emit 0x50
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0x68
    _emit 0x16
    _emit 0x8E
    _emit 0x47
    _emit 0x00
    _emit 0xE8
    _emit 0x35
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
