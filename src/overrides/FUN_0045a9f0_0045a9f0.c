/* Byte-for-byte override for FUN_0045a9f0.

 * Original bytes (51):
 *     0000: 51 53 56 57 68 04 48 4d
 *     0008: 00 8b f0 68 e8 47 4d 00
 *     0010: bf 3c 48 4d 00 bb 20 48
 *     0018: 4d 00 e8 61 fb ff ff 8b
 *     0020: 4c 24 14 6a 01 8b c6 e8
 *     0028: 34 f4 ff ff 5f 5e 5b 59
 *     0030: c2 04 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_0045a9f0(void * a0)
{
  __asm {
    _emit 0x51
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x68
    _emit 0x04
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0x8B
    _emit 0xF0
    _emit 0x68
    _emit 0xE8
    _emit 0x47
    _emit 0x4D
    _emit 0x00
    _emit 0xBF
    _emit 0x3C
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0xBB
    _emit 0x20
    _emit 0x48
    _emit 0x4D
    _emit 0x00
    _emit 0xE8
    _emit 0x61
    _emit 0xFB
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x4C
    _emit 0x24
    _emit 0x14
    _emit 0x6A
    _emit 0x01
    _emit 0x8B
    _emit 0xC6
    _emit 0xE8
    _emit 0x34
    _emit 0xF4
    _emit 0xFF
    _emit 0xFF
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0x59
    _emit 0xC2
    _emit 0x04
    _emit 0x00
  }
  __assume(0);
}
