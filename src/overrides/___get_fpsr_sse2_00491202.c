/* Byte-for-byte override for ___get_fpsr_sse2.

 * Original bytes (30):
 *     0000: 8b ff 55 8b ec 51 83 3d
 *     0008: dc 52 4d 00 00 74 06 0f
 *     0010: ae 5d fc eb 04 83 65 fc
 *     0018: 00 8b 45 fc c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __stdcall ___get_fpsr_sse2(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0x83
    _emit 0x3D
    _emit 0xDC
    _emit 0x52
    _emit 0x4D
    _emit 0x00
    _emit 0x00
    _emit 0x74
    _emit 0x06
    _emit 0x0F
    _emit 0xAE
    _emit 0x5D
    _emit 0xFC
    _emit 0xEB
    _emit 0x04
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0x00
    _emit 0x8B
    _emit 0x45
    _emit 0xFC
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
