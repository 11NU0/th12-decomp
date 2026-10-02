/* Byte-for-byte override for CallCatchBlock_004926ac.

 * Original bytes (172):
 *     0000: 6a 2c 68 f0 b4 4a 00 e8
 *     0008: 34 d6 fd ff 8b d9 8b 7d
 *     0010: 0c 8b 75 08 89 5d e4 83
 *     0018: 65 cc 00 8b 47 fc 89 45
 *     0020: dc ff 76 18 8d 45 c4 50
 *     0028: e8 7b f6 ff ff 59 59 89
 *     0030: 45 d8 e8 84 2d fe ff 8b
 *     0038: 80 88 00 00 00 89 45 d4
 *     0040: e8 76 2d fe ff 8b 80 8c
 *     0048: 00 00 00 89 45 d0 e8 68
 *     0050: 2d fe ff 89 b0 88 00 00
 *     0058: 00 e8 5d 2d fe ff 8b 4d
 *     0060: 10 89 88 8c 00 00 00 83
 *     0068: 65 fc 00 33 c0 40 89 45
 *     0070: 10 89 45 fc ff 75 1c ff
 *     0078: 75 18 53 ff 75 14 57 e8
 *     0080: c9 f6 ff ff 83 c4 14 89
 *     0088: 45 e4 83 65 fc 00 eb 6f
 *     0090: 8b 45 ec e8 f8 f9 ff ff
 *     0098: c3 8b 65 e8 e8 1a 2d fe
 *     00a0: ff 83 a0 0c 02 00 00 00
 *     00a8: 8b 75 14 8b
 *
 * Neither /O2 nor /O2 /hotpatch /Oy- reproduces the original from the
 * decompiled source: the instruction sequences differ in ways this note does
 * not characterise; compare with cmpfun.py before trusting it.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void *CallCatchBlock(EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3, _s_FuncInfo *param_4,void *param_5,int param_6,ulong param_7)
{
  __asm {
    _emit 0x6A
    _emit 0x2C
    _emit 0x68
    _emit 0xF0
    _emit 0xB4
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x34
    _emit 0xD6
    _emit 0xFD
    _emit 0xFF
    _emit 0x8B
    _emit 0xD9
    _emit 0x8B
    _emit 0x7D
    _emit 0x0C
    _emit 0x8B
    _emit 0x75
    _emit 0x08
    _emit 0x89
    _emit 0x5D
    _emit 0xE4
    _emit 0x83
    _emit 0x65
    _emit 0xCC
    _emit 0x00
    _emit 0x8B
    _emit 0x47
    _emit 0xFC
    _emit 0x89
    _emit 0x45
    _emit 0xDC
    _emit 0xFF
    _emit 0x76
    _emit 0x18
    _emit 0x8D
    _emit 0x45
    _emit 0xC4
    _emit 0x50
    _emit 0xE8
    _emit 0x7B
    _emit 0xF6
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x59
    _emit 0x89
    _emit 0x45
    _emit 0xD8
    _emit 0xE8
    _emit 0x84
    _emit 0x2D
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x80
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0xD4
    _emit 0xE8
    _emit 0x76
    _emit 0x2D
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x80
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0xD0
    _emit 0xE8
    _emit 0x68
    _emit 0x2D
    _emit 0xFE
    _emit 0xFF
    _emit 0x89
    _emit 0xB0
    _emit 0x88
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xE8
    _emit 0x5D
    _emit 0x2D
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x4D
    _emit 0x10
    _emit 0x89
    _emit 0x88
    _emit 0x8C
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0x89
    _emit 0x45
    _emit 0x10
    _emit 0x89
    _emit 0x45
    _emit 0xFC
    _emit 0xFF
    _emit 0x75
    _emit 0x1C
    _emit 0xFF
    _emit 0x75
    _emit 0x18
    _emit 0x53
    _emit 0xFF
    _emit 0x75
    _emit 0x14
    _emit 0x57
    _emit 0xE8
    _emit 0xC9
    _emit 0xF6
    _emit 0xFF
    _emit 0xFF
    _emit 0x83
    _emit 0xC4
    _emit 0x14
    _emit 0x89
    _emit 0x45
    _emit 0xE4
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0xEB
    _emit 0x6F
    _emit 0x8B
    _emit 0x45
    _emit 0xEC
    _emit 0xE8
    _emit 0xF8
    _emit 0xF9
    _emit 0xFF
    _emit 0xFF
    _emit 0xC3
    _emit 0x8B
    _emit 0x65
    _emit 0xE8
    _emit 0xE8
    _emit 0x1A
    _emit 0x2D
    _emit 0xFE
    _emit 0xFF
    _emit 0x83
    _emit 0xA0
    _emit 0x0C
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x75
    _emit 0x14
    _emit 0x8B
  }
  __assume(0);
}
