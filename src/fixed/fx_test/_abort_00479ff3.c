/* noreturn void __cdecl _abort(void) @ 00479ff3  279 bytes */

#include "th12.h"

/* Library Function - Single Match
    _abort
   
   Library: Visual Studio 2008 Release */

typedef struct local_32c__u { undefined4 _; undefined4 ExceptionCode; } local_32c__u;
typedef struct local_2dc__u { undefined4 _; undefined4 ExceptionRecord; undefined4 ContextRecord; } local_2dc__u;
void __cdecl _abort(void)

{
  local_32c__u *local_32c__u_alias;
  local_2dc__u *local_2dc__u_alias;
  code *pcVar1;
  _PHNDLR p_Var2;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  if (((byte)DAT_004adba0 & 1) != 0) {
    __NMSG_WRITE(10);
  }
  p_Var2 = ___get_sigabrt();
  if (p_Var2 != (_PHNDLR)0x0) {
    _raise(0x16);
  }
  if (((byte)DAT_004adba0 & 2) != 0) {
    local_2d4 = 0x10001;
    _memset(&local_32c,0,0x50);
  local_2dc__u_alias = (local_2dc__u *)&local_2dc;
    local_2dc__u_alias->ExceptionRecord = &local_32c;
  local_2dc__u_alias = (local_2dc__u *)&local_2dc;
    local_2dc__u_alias->ContextRecord = (PCONTEXT)&local_2d4;
  local_32c__u_alias = (local_32c__u *)&local_32c;
    local_32c__u_alias->ExceptionCode = 0x40000015;
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
    UnhandledExceptionFilter(&local_2dc);
  }
  __exit(3);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


