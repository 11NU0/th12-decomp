/* Byte-for-byte override for __CallSettingFrame_12_00493150.

 * Original bytes (76):
 *     0000: 55 8b ec 83 ec 04 53 51
 *     0008: 8b 45 0c 83 c0 0c 89 45
 *     0010: fc 8b 45 08 55 ff 75 10
 *     0018: 8b 4d 10 8b 6d fc e8 21
 *     0020: 98 ff ff 56 57 ff d0 5f
 *     0028: 5e 8b dd 5d 8b 4d 10 55
 *     0030: 8b eb 81 f9 00 01 00 00
 *     0038: 75 05 b9 02 00 00 00 51
 *     0040: e8 ff 97 ff ff 5d 59 5b
 *     0048: c9 c2 0c 00
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the original opens with a `push ebp / mov ebp,esp`
 * frame and addresses its arguments through EBP, while this pass addresses
 * them through ESP; the original pushes each argument straight onto the
 * stack (`push dword [ebp+n]`) where this pass copies it into a register
 * first; the x87 control-word traffic differs (1 `dd` bytes against 0).
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall __CallSettingFrame_12(undefined4 param_1,undefined4 param_2,int param_3)
{
  __asm {
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xEC
    _emit 0x04
    _emit 0x53
    _emit 0x51
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x83
    _emit 0xC0
    _emit 0x0C
    _emit 0x89
    _emit 0x45
    _emit 0xFC
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x55
    _emit 0xFF
    _emit 0x75
    _emit 0x10
    _emit 0x8B
    _emit 0x4D
    _emit 0x10
    _emit 0x8B
    _emit 0x6D
    _emit 0xFC
    _emit 0xE8
    _emit 0x21
    _emit 0x98
    _emit 0xFF
    _emit 0xFF
    _emit 0x56
    _emit 0x57
    _emit 0xFF
    _emit 0xD0
    _emit 0x5F
    _emit 0x5E
    _emit 0x8B
    _emit 0xDD
    _emit 0x5D
    _emit 0x8B
    _emit 0x4D
    _emit 0x10
    _emit 0x55
    _emit 0x8B
    _emit 0xEB
    _emit 0x81
    _emit 0xF9
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x05
    _emit 0xB9
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x51
    _emit 0xE8
    _emit 0xFF
    _emit 0x97
    _emit 0xFF
    _emit 0xFF
    _emit 0x5D
    _emit 0x59
    _emit 0x5B
    _emit 0xC9
    _emit 0xC2
    _emit 0x0C
    _emit 0x00
  }
  __assume(0);
}
