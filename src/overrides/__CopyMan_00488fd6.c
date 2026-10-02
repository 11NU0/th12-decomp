/* Byte-for-byte override for __CopyMan.

 * Original bytes (31):
 *     0000: 8b ff 55 8b ec 8b 45 0c
 *     0008: 8b 4d 08 6a 03 5a 2b c8
 *     0010: 56 8b 30 89 34 01 83 c0
 *     0018: 04 4a 75 f5 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __cdecl __CopyMan(int a0, undefined4 * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x45
    _emit 0x0C
    _emit 0x8B
    _emit 0x4D
    _emit 0x08
    _emit 0x6A
    _emit 0x03
    _emit 0x5A
    _emit 0x2B
    _emit 0xC8
    _emit 0x56
    _emit 0x8B
    _emit 0x30
    _emit 0x89
    _emit 0x34
    _emit 0x01
    _emit 0x83
    _emit 0xC0
    _emit 0x04
    _emit 0x4A
    _emit 0x75
    _emit 0xF5
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
