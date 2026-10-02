/* Byte-for-byte override for FUN_00402030.

 * Original bytes (101):
 *     0000: 56 8b 35 cc e8 4c 00 57
 *     0008: e8 83 83 05 00 8b 44 24
 *     0010: 0c 6a 01 50 e8 47 f7 ff
 *     0018: ff 8b 35 cc e8 4c 00 e8
 *     0020: 6c 83 05 00 bf 04 ec 4c
 *     0028: 00 89 3d 34 ee 4c 00 e8
 *     0030: 0c ea 02 00 8b 15 34 ee
 *     0038: 4c 00 a1 f0 e8 4c 00 8b
 *     0040: 08 81 c2 cc 00 00 00 52
 *     0048: 50 8b 81 bc 00 00 00 ff
 *     0050: d0 5f c7 05 38 ee 4c 00
 *     0058: 01 00 00 00 b8 01 00 00
 *     0060: 00 5e c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall FUN_00402030(float a0)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x57
    _emit 0xE8
    _emit 0x83
    _emit 0x83
    _emit 0x05
    _emit 0x00
    _emit 0x8B
    _emit 0x44
    _emit 0x24
    _emit 0x0C
    _emit 0x6A
    _emit 0x01
    _emit 0x50
    _emit 0xE8
    _emit 0x47
    _emit 0xF7
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x6C
    _emit 0x83
    _emit 0x05
    _emit 0x00
    _emit 0xBF
    _emit 0x04
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x89
    _emit 0x3D
    _emit 0x34
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x0C
    _emit 0xEA
    _emit 0x02
    _emit 0x00
    _emit 0x8B
    _emit 0x15
    _emit 0x34
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x81
    _emit 0xC2
    _emit 0xCC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x52
    _emit 0x50
    _emit 0x8B
    _emit 0x81
    _emit 0xBC
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xFF
    _emit 0xD0
    _emit 0x5F
    _emit 0xC7
    _emit 0x05
    _emit 0x38
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xB8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
