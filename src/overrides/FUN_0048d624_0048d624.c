/* Hand-corrected override for FUN_0048d624.
 *
 * Original bytes (11):
 *     8b ff        mov edi, edi        \ hotpatch prologue
 *     55           push ebp           /
 *     8b ec        mov ebp, esp
 *     5d           pop ebp
 *     e9 .. .. ..  jmp _iswctype       (to 0x0048d5ae, rel32 = -129)
 *
 * A leaf thunk to the wide-character classification helper: the /hotpatch
 * five-byte slot keeps the entry point patchable, the frame is torn straight back
 * down so the callee sees the caller's stack, and then it jumps rather than calls
 * - there is nothing to clean up and both incoming arguments are already in the
 * registers the callee wants.
 *
 * Written in C this is `return _iswctype(a0, a1);`, and VC9 at /O2 turns exactly
 * that into a bare `jmp` - which drops the five-byte prologue as well, leaving the
 * five bytes `e9 00 00 00 00` where the original has eleven. Inline asm does not
 * help either: touching `ebp` makes the compiler build its own frame first
 * (`55 8b ec 57`), so the prologue ends up doubled.
 *
 * The whole body is therefore emitted literally. That does lose the relocation on
 * the jump, which is safe here precisely because the bytes are position-dependent
 * anyway: the original displacement of -129 already assumes this function sits at
 * 0x0048d624, and scripts\splice.py writes every function back at its own address,
 * so a literal is what the original is. `_emit` is used for the same reason as in
 * FUN_00494303 - MASM's mnemonics for these opcodes do not all round-trip.
 */
#include "th12.h"

void __cdecl FUN_0048d624(wint_t a0, wctype_t a1)
{
  __asm {
    _emit 0x8B              ; mov edi, edi
    _emit 0xFF
    _emit 0x55              ; push ebp
    _emit 0x8B              ; mov ebp, esp
    _emit 0xEC
    _emit 0x5D              ; pop ebp
    _emit 0xE9              ; jmp 0x0048d5ae   (-129 from the next instruction)
    _emit 0x7F
    _emit 0xFF
    _emit 0xFF
    _emit 0xFF
  }
  __assume(0);              /* the jump never returns; without this the compiler
                               appends its own `pop ebp ; ret` epilogue, because the
                               /hotpatch prologue pushed ebp */
}