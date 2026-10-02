/* undefined __cdecl __crt_wait_module_handle(LPCWSTR param_1) @ 00475149  26 bytes */

#include "th12.h"

/* Library Function - Single Match
    __crt_wait_module_handle
   
   Library: Visual Studio 2008 Release */

void __cdecl __crt_wait_module_handle(LPCWSTR param_1)

{
  HMODULE pHVar1;
  
  pHVar1 = GetModuleHandleW(param_1);
  if (pHVar1 == (HMODULE)0x0) {
    __crt_waiting_on_module_handle(param_1);
    return;
  }
  return;
}


