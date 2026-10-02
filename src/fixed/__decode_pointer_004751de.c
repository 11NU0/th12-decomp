/* int __cdecl __decode_pointer(int param_1) @ 004751de  114 bytes */
#include "th12.h"

/* Library Function - Single Match
    __decode_pointer
   
   Library: Visual Studio 2008 Release */

int __cdecl __decode_pointer(int param_1)

{
  LPVOID pvVar1;
  code *pcVar2;
  int iVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  
  pvVar1 = TlsGetValue(DAT_004adacc);
  if ((pvVar1 != (LPVOID)0x0) && (DAT_004adac8 != -1)) {
    iVar3 = DAT_004adac8;
    pcVar2 = (code *)TlsGetValue(DAT_004adacc);
    iVar3 = (*pcVar2)(iVar3);
    if (iVar3 != 0) {
      pFVar4 = *(FARPROC *)((int)iVar3 + 0x1fc);
      goto LAB_0047523e;
    }
  }
  hModule = GetModuleHandleW((LPCWSTR)&PTR_LAB_0049d51c);
  if ((hModule == (HMODULE)0x0) &&
     (hModule = (HMODULE)__crt_waiting_on_module_handle((LPCWSTR)&PTR_LAB_0049d51c),
     hModule == (HMODULE)0x0)) {
    return param_1;
  }
  pFVar4 = GetProcAddress(hModule,"DecodePointer");
LAB_0047523e:
  if (pFVar4 != (FARPROC)0x0) {
    param_1 = (*pFVar4)(param_1);
  }
  return param_1;
}


