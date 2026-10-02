/* Hand-corrected override for FUN_00470f22.
 *
 * Original bytes (11):
 *     8b ff        mov edi, edi        \ hotpatch prologue
 *     55           push ebp           /
 *     8b ec        mov ebp, esp
 *     5d           pop ebp
 *     e9 disp -359 -> 0x00470dc6  jmp __invoke_watson
 *
 * Same shape as FUN_0048d624: a leaf thunk whose /hotpatch five-byte slot is torn
 * straight back down before the jump, so the callee sees the caller's stack and
 * there is nothing left for us to clean up. Written as a plain call-and-return,
 * VC9 folds the body into a bare `jmp` and drops the prologue with it; inline asm
 * that touches ebp doubles the frame instead. See FUN_0048d624 for the full
 * argument, and for why the displacement is a literal rather than a relocation.
 */
#include "th12.h"

void __cdecl FUN_00470f22(wchar_t * a0, wchar_t * a1, wchar_t * a2, uint a3, uintptr_t a4)
{
  __asm {
    _emit 0x8B              ; mov edi, edi
    _emit 0xFF
    _emit 0x55              ; push ebp
    _emit 0x8B              ; mov ebp, esp
    _emit 0xEC
    _emit 0x5D              ; pop ebp
    _emit 0xE9              ; jmp __invoke_watson
    _emit 0x99
    _emit 0xFE
    _emit 0xFF
    _emit 0xFF
  }
  __assume(0);
}
