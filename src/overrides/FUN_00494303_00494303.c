/* Hand-corrected override for FUN_00494303.
 *
 * The whole function is 7 bytes and the Ghidra decompilation is empty - `return;`
 * rebuilds as a bare `c3`. The original is:
 *
 *     0a c9    or cl, cl
 *     74 02    je  +2
 *     d9 e0    fnstsw ax
 *     c3       ret
 *
 * `fnstsw` stores the x87 status word to AX and has no C equivalent - it is not an
 * intrinsic in VC9 and no expression reads the FPU status word from a C program -
 * so the store is written as inline asm. The function is the x87 tail of the
 * float-to-int helpers: CL carries the "integer indefinite" condition the x87
 * conversion left behind, and the status word is published to the caller only when
 * that condition is clear.
 *
 * There is no hotpatch prologue on this 7-byte body (it is not in
 * artifacts\hotpatch_units.txt), so the plain compile_game flags reproduce it.
 */
#include "th12.h"

void __stdcall FUN_00494303(void)
{
  __asm {
    or   cl, cl
    je   no_status
    _emit 0xD9              ; fnstsw ax
    _emit 0xE0              ;   no-wait store; MASM's `fnstsw` emits the
  no_status:                ;   wait variant DF E0, so the opcode is literal
  }
}