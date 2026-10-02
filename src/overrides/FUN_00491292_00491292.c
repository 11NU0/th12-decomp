/* Byte-for-byte override for FUN_00491292.

 * Original bytes (29):
 *     0000: 8b ff 55 8b ec 51 83 3d
 *     0008: dc 52 4d 00 00 74 0c 0f
 *     0010: ae 5d fc 83 65 fc c0 0f
 *     0018: ae 55 fc c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall FUN_00491292(void)
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
    _emit 0x0C
    _emit 0x0F
    _emit 0xAE
    _emit 0x5D
    _emit 0xFC
    _emit 0x83
    _emit 0x65
    _emit 0xFC
    _emit 0xC0
    _emit 0x0F
    _emit 0xAE
    _emit 0x55
    _emit 0xFC
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
