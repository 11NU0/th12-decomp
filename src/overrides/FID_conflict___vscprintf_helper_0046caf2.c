/* Byte-for-byte override for FID_conflict___vscprintf_helper_0046caf2.

 * Original bytes (87):
 *     0000: 8b ff 55 8b ec 83 ec 20
 *     0008: 56 33 f6 39 75 0c 75 1d
 *     0010: e8 68 1e 00 00 56 56 56
 *     0018: 56 56 c7 00 16 00 00 00
 *     0020: e8 16 44 00 00 83 c4 14
 *     0028: 83 c8 ff eb 27 ff 75 14
 *     0030: 8d 45 e0 ff 75 10 c7 45
 *     0038: e4 ff ff ff 7f ff 75 0c
 *     0040: c7 45 ec 42 00 00 00 50
 *     0048: 89 75 e8 89 75 e0 ff 55
 *     0050: 08 83 c4 10 5e c9 c3
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

FID_conflict___vscprintf_helper (undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xEC
    _emit 0x20
    _emit 0x56
    _emit 0x33
    _emit 0xF6
    _emit 0x39
    _emit 0x75
    _emit 0x0C
    _emit 0x75
    _emit 0x1D
    _emit 0xE8
    _emit 0x68
    _emit 0x1E
    _emit 0x00
    _emit 0x00
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0x56
    _emit 0xC7
    _emit 0x00
    _emit 0x16
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x16
    _emit 0x44
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x83
    _emit 0xC8
    _emit 0xFF
    _emit 0xEB
    _emit 0x27
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0x8D
    _emit 0x45
    _emit 0xE0
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0xC7
    _emit 0x45
    _emit 0xE4
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
    _emit 0x7F
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xC7
    _emit 0x45
    _emit 0xEC
    _emit 0x42
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x50
    _emit 0x89
    _emit 0x75
    _emit 0xE8
    _emit 0x89
    _emit 0x75
    _emit 0xE0
    _emit 0xFF
    _emit 0x55
    _emit 0x08
    _emit 0x83
    _emit 0xC4
    _emit 0x10
    _emit 0x5E
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
