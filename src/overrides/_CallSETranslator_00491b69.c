/* Byte-for-byte override for _CallSETranslator.

 * Original bytes (215):
 *     0000: 8b ff 55 8b ec 83 ec 38
 *     0008: 53 81 7d 08 23 01 00 00
 *     0010: 75 12 b8 14 1c 49 00 8b
 *     0018: 4d 0c 89 01 33 c0 40 e9
 *     0020: b0 00 00 00 83 65 d8 00
 *     0028: c7 45 dc 40 1c 49 00 a1
 *     0030: 38 d1 4a 00 8d 4d d8 33
 *     0038: c1 89 45 e0 8b 45 18 89
 *     0040: 45 e4 8b 45 0c 89 45 e8
 *     0048: 8b 45 1c 89 45 ec 8b 45
 *     0050: 20 89 45 f0 83 65 f4 00
 *     0058: 83 65 f8 00 83 65 fc 00
 *     0060: 89 65 f4 89 6d f8 64 a1
 *     0068: 00 00 00 00 89 45 d8 8d
 *     0070: 45 d8 64 a3 00 00 00 00
 *     0078: c7 45 c8 01 00 00 00 8b
 *     0080: 45 08 89 45 cc 8b 45 10
 *     0088: 89 45 d0 e8 6e 38 fe ff
 *     0090: 8b 80 80 00 00 00 89 45
 *     0098: d4 8d 45 cc 50 8b 45 08
 *     00a0: ff 30 ff 55 d4 59 59 83
 *     00a8: 65 c8 00 83 7d fc 00 74
 *     00b0: 17 64 8b 1d 00 00 00 00
 *     00b8: 8b 03 8b 5d d8 89 03 64
 *     00c0: 89 1d 00 00 00 00 eb 09
 *     00c8: 8b 45 d8 64 a3 00 00 00
 *     00d0: 00 8b 45 c8 5b c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl _CallSETranslator(EHExceptionRecord * a0, EHRegistrationNode * a1, void * a2, void * a3, _s_FuncInfo * a4, int a5, EHRegistrationNode * a6)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x83
    _emit 0xEC
    _emit 0x38
    _emit 0x53
    _emit 0x81
    _emit 0x7D
    _emit 0x08
    _emit 0x23
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x75
    _emit 0x12
    _emit 0xB8
    _emit 0x14
    _emit 0x1C
    _emit 0x49
    _emit 0x00
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0x89
    _emit 0x01
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0xE9
    _emit 0xB0
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x83
    _emit 0x65
    _emit 0xD8
    _emit 0x00
    _emit 0xC7
    _emit 0x45
    _emit 0xDC
    _emit 0x40
    _emit 0x1C
    _emit 0x49
    _emit 0x00
    _emit 0xA1
    _emit 0x38
    _emit 0xD1
    _emit 0x4A
    _emit 0x00
    _emit 0x8D
    _emit 0x4D
    _emit 0xD8
    _emit 0x33
    _emit 0xC1
    _emit 0x89
    _emit 0x45
    _emit 0xE0
    _emit 0x8B
    _emit 0x45
    _emit 0x18
    _emit 0x89
    _emit 0x45
    _emit 0xE4
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x89
    _emit 0x45
    _emit 0xE8
    _emit 0x8B
    _emit 0x45
    _emit 0x1C
    _emit 0x89
    _emit 0x45
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x20
    _emit 0x89
    _emit 0x45
    _emit 0xF0
    _emit 0x83
    _emit 0x65
    _emit 0xF4
    _emit 0x00
    _emit 0x83
    _emit 0x65
    _emit 0xF8
    _emit 0x00
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0x89
    _emit 0x65
    _emit 0xF4
    _emit 0x89
    _emit 0x6D
    _emit 0xF8
    _emit 0x64
    _emit 0xA1
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0xD8
    _emit 0x8D
    _emit 0x45
    _emit 0xD8
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xC7
    _emit 0x45
    _emit 0xC8
    _emit 0x01
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0x89
    _emit 0x45
    _emit 0xCC
    _emit 0x8B
    _emit 0x45
    _emit 0x10
    _emit 0x89
    _emit 0x45
    _emit 0xD0
    _emit 0xE8
    _emit 0x6E
    _emit 0x38
    _emit 0xFE
    _emit 0xFF
    _emit 0x8B
    _emit 0x80
    _emit 0x80
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x45
    _emit 0xD4
    _emit 0x8D
    _emit 0x45
    _emit 0xCC
    _emit 0x50
    _emit 0x8B
    _emit 0x45
    _emit 0x08
    _emit 0xFF
    _emit 0x30
    _emit 0xFF
    _emit 0x55
    _emit 0xD4
    _emit 0x59
    _emit 0x59
    _emit 0x83
    _emit 0x65
    _emit 0xC8
    _emit 0x00
    _emit 0x83
    _emit 0x7D
    _emit 0xFC
    _emit 0x00
    _emit 0x74
    _emit 0x17
    _emit 0x64
    _emit 0x8B
    _emit 0x1D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x03
    _emit 0x8B
    _emit 0x5D
    _emit 0xD8
    _emit 0x89
    _emit 0x03
    _emit 0x64
    _emit 0x89
    _emit 0x1D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0xEB
    _emit 0x09
    _emit 0x8B
    _emit 0x45
    _emit 0xD8
    _emit 0x64
    _emit 0xA3
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0xC8
    _emit 0x5B
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
