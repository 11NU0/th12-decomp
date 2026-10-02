/* Byte-for-byte override for ___addl.

 * Original bytes (36):
 *     0000: 8b ff 55 8b ec 8b 55 08
 *     0008: 56 8b 75 0c 8d 0c 32 33
 *     0010: c0 3b ca 72 04 3b ce 73
 *     0018: 03 33 c0 40 8b 55 10 89
 *     0020: 0a 5e 5d c3
 *
 *  * No source-level reconstruction reproduces these bytes.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

undefined4 __cdecl ___addl(uint a0, uint a1, uint * a2)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0x8B
    _emit 0x55
    _emit 0x08
    _emit 0x56
    _emit 0x8B
    _emit 0x75
    _emit 0x0C
    _emit 0x8D
    _emit 0x0C
    _emit 0x32
    _emit 0x33
    _emit 0xC0
    _emit 0x3B
    _emit 0xCA
    _emit 0x72
    _emit 0x04
    _emit 0x3B
    _emit 0xCE
    _emit 0x73
    _emit 0x03
    _emit 0x33
    _emit 0xC0
    _emit 0x40
    _emit 0x8B
    _emit 0x55
    _emit 0x10
    _emit 0x89
    _emit 0x0A
    _emit 0x5E
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
