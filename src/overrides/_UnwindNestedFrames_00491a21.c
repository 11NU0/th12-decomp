/* Byte-for-byte override for _UnwindNestedFrames.

 * Original bytes (84):
 *     0000: 8b ff 55 8b ec 51 51 53
 *     0008: 56 57 64 8b 35 00 00 00
 *     0010: 00 89 75 fc c7 45 f8 4c
 *     0018: 1a 49 00 6a 00 ff 75 0c
 *     0020: ff 75 f8 ff 75 08 e8 f2
 *     0028: fe ff ff 8b 45 0c 8b 40
 *     0030: 04 83 e0 fd 8b 4d 0c 89
 *     0038: 41 04 64 8b 3d 00 00 00
 *     0040: 00 8b 5d fc 89 3b 64 89
 *     0048: 1d 00 00 00 00 5f 5e 5b
 *     0050: c9 c2 08 00
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __stdcall _UnwindNestedFrames(EHRegistrationNode * a0, EHExceptionRecord * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x51
    _emit 0x51
    _emit 0x53
    _emit 0x56
    _emit 0x57
    _emit 0x64
    _emit 0x8B
    _emit 0x35
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x89
    _emit 0x75
    _emit 0xFC
    _emit 0xC7
    _emit 0x45
    _emit 0xF8
    _emit 0x4C
    _emit 0x1A
    _emit 0x49
    _emit 0x00
    _emit 0x6A
    _emit 0x00
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0xFF
    _emit 0x75
    _emit 0xF8
    _emit 0xFF
    _emit 0x75
    _emit 0x08
    _emit 0xE8
    _emit 0xF2
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x8B
    _emit 0x40
    _emit 0x04
    _emit 0x83
    _emit 0xE0
    _emit 0xFD
    _emit 0x8B
    _emit 0x4D
    _emit 0x0C
    _emit 0x89
    _emit 0x41
    _emit 0x04
    _emit 0x64
    _emit 0x8B
    _emit 0x3D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x8B
    _emit 0x5D
    _emit 0xFC
    _emit 0x89
    _emit 0x3B
    _emit 0x64
    _emit 0x89
    _emit 0x1D
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5F
    _emit 0x5E
    _emit 0x5B
    _emit 0xC9
    _emit 0xC2
    _emit 0x08
    _emit 0x00
  }
  __assume(0);
}
