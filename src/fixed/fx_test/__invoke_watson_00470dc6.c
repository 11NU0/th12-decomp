/* noreturn void __cdecl __invoke_watson(wchar_t * param_1, wchar_t * param_2, wchar_t * param_3, uint param_4, uintptr_t param_5) @ 00470dc6  296 bytes */

#include "th12.h"

/* Library Function - Single Match
    __invoke_watson
   
   Library: Visual Studio 2008 Release */

void __cdecl
typedef struct local_32c__u { undefined4 _; undefined4 ExceptionCode; undefined4 ExceptionFlags; } local_32c__u;
typedef struct local_2dc__u { undefined4 _; undefined4 ExceptionRecord; undefined4 ContextRecord; } local_2dc__u;
__cdecl __invoke_watson(wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,uint param_4,uintptr_t param_5)

{
  local_32c__u *local_32c__u_alias;
  local_2dc__u *local_2dc__u_alias;
  uint uVar1;
  BOOL BVar2;
  LONG LVar3;
  HANDLE hProcess;
  UINT uExitCode;
  EXCEPTION_RECORD local_32c;
  _EXCEPTION_POINTERS local_2dc;
  undefined4 local_2d4;
  
  uVar1 = DAT_004ad138 ^ (uint)&stack0xfffffffc;
  local_32c__u_alias = (local_32c__u *)&local_32c;
  local_32c__u_alias->ExceptionCode = 0;
  local_32c__u_alias = (local_32c__u *)&local_32c;
  _memset(&local_32c__u_alias->ExceptionFlags,0,0x4c);
  local_2dc__u_alias = (local_2dc__u *)&local_2dc;
  local_2dc__u_alias->ExceptionRecord = &local_32c;
  local_2dc__u_alias = (local_2dc__u *)&local_2dc;
  local_2dc__u_alias->ContextRecord = (PCONTEXT)&local_2d4;
  local_2d4 = 0x10001;
  local_32c__u_alias = (local_32c__u *)&local_32c;
  local_32c__u_alias->ExceptionCode = 0xc0000417;
  local_32c__u_alias = (local_32c__u *)&local_32c;
  local_32c__u_alias->ExceptionFlags = 1;
  BVar2 = IsDebuggerPresent();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  LVar3 = UnhandledExceptionFilter(&local_2dc);
  if ((LVar3 == 0) && (BVar2 == 0)) {
    FUN_0047b3ff();
  }
  uExitCode = 0xc0000417;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  ___security_check_cookie_4(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


