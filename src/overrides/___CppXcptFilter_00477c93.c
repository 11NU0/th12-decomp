/* Byte-for-byte override for ___CppXcptFilter.

 * Original bytes (32):
 *     0000: 8b ff 55 8b ec b8 63 73
 *     0008: 6d e0 39 45 08 75 0d ff
 *     0010: 75 0c 50 e8 88 fe ff ff
 *     0018: 59 59 5d c3 33 c0 5d c3
 *
 *  * The CRT C++ exception filter: compare the exception code against the 'msc'
 * magic and hand off to __XcptFilter, which is __stdcall with two arguments,
 * hence the pair of pops before the epilogue. The recovered C is right about
 * the call but VC9 chooses an esp-relative leaf and tail-calls the handler,
 * so the frame the original was built with (/Oy- with the /hotpatch slot)
 * does not come back on its own.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

int __cdecl ___CppXcptFilter(ulong a0, _EXCEPTION_POINTERS * a1)
{
  __asm {
    _emit 0x8B
    _emit 0xFF
    _emit 0x55
    _emit 0x8B
    _emit 0xEC
    _emit 0xB8
    _emit 0x63
    _emit 0x73
    _emit 0x6D
    _emit 0xE0
    _emit 0x39
    _emit 0x45
    _emit 0x08
    _emit 0x75
    _emit 0x0D
    _emit 0xFF
    _emit 0x75
    _emit 0x0C
    _emit 0x50
    _emit 0xE8
    _emit 0x88
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
    _emit 0x59
    _emit 0x59
    _emit 0x5D
    _emit 0xC3
    _emit 0x33
    _emit 0xC0
    _emit 0x5D
    _emit 0xC3
  }
  __assume(0);
}
