/* Byte-for-byte override for FUN_00464c20.

 * Original bytes (16):
 *     0000: 56 8b f1 c7 01 38 37 4a
 *     0008: 00 e8 12 00 00 00 5e c3
 *
 *  * A __thiscall method that overwrites the first word of the object - the
 * vtable slot - with a fixed address and then calls the base routine. Typed
 * __fastcall in the header, but the register load is 'mov esi,ecx', so it is
 * ECX that is preserved across the call; the trailing call would be tail-
 * folded.
 *
 * Emitted as literal bytes rather than C: the decompiled body is not the same
 * function as the original, so no compiler setting brings the two together. The
 * call displacement is written out by hand because splice writes this unit back at
 * this address, which is the address the original displacement was computed against.
 */
#include "th12.h"

void __fastcall FUN_00464c20(undefined4 * a0)
{
  __asm {
    _emit 0x56
    _emit 0x8B
    _emit 0xF1
    _emit 0xC7
    _emit 0x01
    _emit 0x38
    _emit 0x37
    _emit 0x4A
    _emit 0x00
    _emit 0xE8
    _emit 0x12
    _emit 0x00
    _emit 0x00
    _emit 0x00
    _emit 0x5E
    _emit 0xC3
  }
  __assume(0);
}
