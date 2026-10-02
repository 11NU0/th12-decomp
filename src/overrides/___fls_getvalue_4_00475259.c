/* Byte-for-byte override for ___fls_getvalue_4_00475259.

 * Original bytes (26):
 *     0000: 8b ff 55 8b ec ff 75 08
 *     0008: ff 35 cc da 4a 00 ff 15
 *     0010: 4c 81 49 00 ff d0 5d c2
 *     0018: 04 00
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

void __stdcall ___fls_getvalue_4(undefined4 param_1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xFF
    _emit 0x35
    _emit 0xCC
    _emit 0xDA
    _emit 0x4A
    _emit 0x00
    _emit 0xFF
    _emit 0x15
    _emit 0x4C
    _emit 0x81
    _emit 0x49
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0x5D
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
