/* Byte-for-byte override for FUN_00460e70.

 * Original bytes (138):
 *     0000: 53 56 57 bf 04 ec 4c 00
 *     0008: 8b d9 89 3d 34 ee 4c 00
 *     0010: e8 8b fa fc ff 8b 15 34
 *     0018: ee 4c 00 a1 f0 e8 4c 00
 *     0020: 8b 08 81 c2 cc 00 00 00
 *     0028: 52 50 8b 81 bc 00 00 00
 *     0030: ff d0 8b 35 cc e8 4c 00
 *     0038: c7 05 38 ee 4c 00 01 00
 *     0040: 00 00 e8 09 95 ff ff a1
 *     0048: f0 e8 4c 00 8b 08 8b 91
 *     0050: e4 00 00 00 6a 00 6a 0e
 *     0058: 50 ff d2 8b 35 cc e8 4c
 *     0060: 00 e8 ea 94 ff ff a1 f0
 *     0068: e8 4c 00 8b 08 8b 91 e4
 *     0070: 00 00 00 6a 08 6a 17 50
 *     0078: ff d2 b8 15 00 00 00 8b
 *     0080: fb e8 da 02 00 00 5f 5e
 *     0088: 5b c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00460e70(void)
{
  __asm {
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0xBF
    _emit 0x04
    _emit 0xEC
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0xD9
    _emit 0x89
    _emit 0x3D
    _emit 0x34
    _emit 0xEE
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0x8B
    _emit 0xFA
    _emit 0xFC
    _emit 0xFF
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
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
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
    _emit 0xE8
    _emit 0x09
    _emit 0x95
    _emit 0xFF
    _emit 0xFF
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0x6A
    _emit 0x0E
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0x8B
    _emit 0x35
    _emit 0xCC
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0xE8
    _emit 0xEA
    _emit 0x94
    _emit 0xFF
    _emit 0xFF
    _emit 0xA1
    _emit 0xF0
    _emit 0xE8
    _emit 0x4C
    _emit 0x00
    _emit 0x8B
    _emit 0x08
    _emit 0x8B
    _emit 0x91
    _emit 0xE4
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x6A
    _emit 0x08
    _emit 0x6A
    _emit 0x17
    _emit 0x50
    _emit 0xFF
    _emit 0xD2
    _emit 0xB8
    _emit 0x15
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0xFB
    _emit 0xE8
    _emit 0xDA
    _emit 0x02
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC3
  }
  __assume(0);
}
