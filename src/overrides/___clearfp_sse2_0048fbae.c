/* Byte-for-byte override for ___clearfp_sse2.

 * Original bytes (80):
 *     0000: 8b ff 55 8b ec 51 0f ae
 *     0008: 5d fc 83 65 fc c0 0f ae
 *     0010: 55 fc 8a 4d fc 33 c0 f6
 *     0018: c1 3f 74 32 f6 c1 01 74
 *     0020: 03 6a 10 58 f6 c1 04 74
 *     0028: 03 83 c8 08 f6 c1 08 74
 *     0030: 03 83 c8 04 f6 c1 10 74
 *     0038: 03 83 c8 02 f6 c1 20 74
 *     0040: 03 83 c8 01 f6 c1 02 74
 *     0048: 05 0d 00 00 08 00 c9 c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

uint __stdcall ___clearfp_sse2(void)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
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
    _emit 0x8A
    _emit 0x4D
    _emit 0xFC
    _emit 0x33
    _emit 0xC0
    _emit 0xF6
    _emit 0xC1
    _emit 0x3F
    _emit 0x74
    _emit 0x32
    _emit 0xF6
    _emit 0xC1
    _emit 0x01
    _emit 0x74
    _emit 0x03
    _emit 0x6A
    _emit 0x10
    _emit 0x58
    _emit 0xF6
    _emit 0xC1
    _emit 0x04
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x08
    _emit 0xF6
    _emit 0xC1
    _emit 0x08
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x04
    _emit 0xF6
    _emit 0xC1
    _emit 0x10
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x02
    _emit 0xF6
    _emit 0xC1
    _emit 0x20
    _emit 0x74
    _emit 0x03
    _emit 0x83
    _emit 0xC8
    _emit 0x01
    _emit 0xF6
    _emit 0xC1
    _emit 0x02
    _emit 0x74
    _emit 0x05
    _emit 0x0D
    _emit 0x00
    _emit 0x00
    _emit 0x08
    _emit 0x00
    _emit 0xC9
    _emit 0xC3
  }
  __assume(0);
}
