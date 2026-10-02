/* int __cdecl __mtinit(void) @ 0047562a  397 bytes */
#include "th12.h"

/* Library Function - Single Match
    __mtinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __mtinit(void)

{
  HMODULE hModule;
  BOOL BVar1;
  int iVar2;
  code *pcVar3;
  _ptiddata _Ptd;
  DWORD DVar4;
  code *pcVar5;
  _ptiddata p_Var6;
  
  hModule = GetModuleHandleW((LPCWSTR)&PTR_LAB_0049d51c);
  if (hModule == (HMODULE)0x0) {
    hModule = (HMODULE)__crt_waiting_on_module_handle((LPCWSTR)&PTR_LAB_0049d51c);
  }
  if (hModule != (HMODULE)0x0) {
    DAT_004b4100 = GetProcAddress(hModule,"FlsAlloc");
    DAT_004b4104 = GetProcAddress(hModule,"FlsGetValue");
    DAT_004b4108 = GetProcAddress(hModule,"FlsSetValue");
    DAT_004b410c = GetProcAddress(hModule,"FlsFree");
    if ((((DAT_004b4100 == (FARPROC)0x0) || (DAT_004b4104 == (FARPROC)0x0)) ||
        (DAT_004b4108 == (FARPROC)0x0)) || (DAT_004b410c == (FARPROC)0x0)) {
      DAT_004b4104 = TlsGetValue_exref;
      DAT_004b4100 = (FARPROC)((void *)0x00475250);
      DAT_004b4108 = TlsSetValue_exref;
      DAT_004b410c = TlsFree_exref;
    }
    DAT_004adacc = TlsAlloc();
    if (DAT_004adacc == 0xffffffff) {
      return 0;
    }
    BVar1 = TlsSetValue(DAT_004adacc,DAT_004b4104);
    if (BVar1 == 0) {
      return 0;
    }
    __init_pointers();
    DAT_004b4100 = (FARPROC)__encode_pointer((int)DAT_004b4100);
    DAT_004b4104 = (FARPROC)__encode_pointer((int)DAT_004b4104);
    DAT_004b4108 = (FARPROC)__encode_pointer((int)DAT_004b4108);
    DAT_004b410c = (FARPROC)__encode_pointer((int)DAT_004b410c);
    iVar2 = __mtinitlocks();
    if (iVar2 != 0) {
      pcVar5 = __freefls_4;
      pcVar3 = (code *)__decode_pointer((int)DAT_004b4100);
      DAT_004adac8 = (*pcVar3)(pcVar5);
      if ((DAT_004adac8 != -1) && (_Ptd = (_ptiddata)__calloc_crt(1,0x214), _Ptd != (_ptiddata)0x0))
      {
        iVar2 = DAT_004adac8;
        p_Var6 = _Ptd;
        pcVar3 = (code *)__decode_pointer((int)DAT_004b4108);
        iVar2 = (*pcVar3)(iVar2,p_Var6);
        if (iVar2 != 0) {
          __initptd(_Ptd,(pthreadlocinfo)0x0);
          DVar4 = GetCurrentThreadId();
          _Ptd->_thandle = 0xffffffff;
          _Ptd->_tid = DVar4;
          return 1;
        }
      }
    }
  }
  __mtterm();
  return 0;
}


