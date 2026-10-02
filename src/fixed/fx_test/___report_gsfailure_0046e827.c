/* noreturn void __cdecl ___report_gsfailure(void) @ 0046e827  262 bytes */

#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    ___report_gsfailure
   
   Libraries: Visual Studio 2005 Release, Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___report_gsfailure(void)

{
  undefined4 in_EAX;
  HANDLE hProcess;
  undefined4 in_ECX;
  undefined4 in_EDX;
  undefined4 unaff_EBX;
  undefined4 unaff_EBP;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  undefined2 in_ES;
  undefined2 in_CS;
  undefined2 in_SS;
  undefined2 in_DS;
  undefined2 in_FS;
  undefined2 in_GS;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  undefined4 unaff_retaddr;
  UINT uExitCode;
  undefined4 local_32c;
  undefined4 local_328;
  
  _DAT_004b39f8 =
       (uint)(in_NT & 1) * 0x4000 | (uint)SBORROW4((int)&stack0xfffffffc,0x328) * 0x800 |
       (uint)(in_IF & 1) * 0x200 | (uint)(in_TF & 1) * 0x100 | (uint)((int)&local_32c < 0) * 0x80 |
       (uint)(&stack0x00000000 == (undefined *)0x32c) * 0x40 | (uint)(in_AF & 1) * 0x10 |
       (uint)((POPCOUNT((uint)&local_32c & 0xff) & 1U) == 0) * 4 |
       (uint)(&stack0xfffffffc < (undefined *)0x328) | (uint)(in_ID & 1) * 0x200000 |
       (uint)(in_VIP & 1) * 0x100000 | (uint)(in_VIF & 1) * 0x80000 | (uint)(in_AC & 1) * 0x40000;
  _DAT_004b39fc = &stack0x00000004;
  _DAT_004b3938 = 0x10001;
  _DAT_004b38e0 = 0xc0000409;
  _DAT_004b38e4 = 1;
  local_32c = DAT_004ad138;
  local_328 = DAT_004ad13c;
  _DAT_004b38ec = unaff_retaddr;
  _DAT_004b39c4 = in_GS;
  _DAT_004b39c8 = in_FS;
  _DAT_004b39cc = in_ES;
  _DAT_004b39d0 = in_DS;
  _DAT_004b39d4 = unaff_EDI;
  _DAT_004b39d8 = unaff_ESI;
  _DAT_004b39dc = unaff_EBX;
  _DAT_004b39e0 = in_EDX;
  _DAT_004b39e4 = in_ECX;
  _DAT_004b39e8 = in_EAX;
  _DAT_004b39ec = unaff_EBP;
  DAT_004b39f0 = unaff_retaddr;
  _DAT_004b39f4 = in_CS;
  _DAT_004b3a00 = in_SS;
  DAT_004b3930 = IsDebuggerPresent();
  FUN_0047b3ff();
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter((_EXCEPTION_POINTERS *)&PTR_DAT_0049cd68);
  if (DAT_004b3930 == 0) {
    FUN_0047b3ff();
  }
  uExitCode = 0xc0000409;
  hProcess = GetCurrentProcess();
  TerminateProcess(hProcess,uExitCode);
  return;
}


