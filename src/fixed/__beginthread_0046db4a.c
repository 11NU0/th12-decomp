/* uintptr_t __cdecl __beginthread(_StartAddress * _StartAddress, uint _StackSize, void * _ArgList) @ 0046db4a  185 bytes */
#include "th12.h"

/* Library Function - Single Match
    __beginthread
   
   Library: Visual Studio 2008 Release */

uintptr_t __cdecl __beginthread(_StartAddress *_StartAddress,uint _StackSize,void *_ArgList)

{
  int *piVar1;
  _ptiddata _Ptd;
  _ptiddata p_Var2;
  HANDLE hThread;
  DWORD DVar3;
  ulong local_8;
  
  local_8 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    ___set_flsgetvalue();
    _Ptd = (_ptiddata)__calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      p_Var2 = __getptd();
      __initptd(_Ptd,p_Var2->ptlocinfo);
      _Ptd->_initaddr = _StartAddress;
      _Ptd->_initarg = _ArgList;
      hThread = CreateThread((LPSECURITY_ATTRIBUTES)0x0,_StackSize,__threadstart_4,_Ptd,4,
                             (LPDWORD)_Ptd);
      _Ptd->_thandle = (uintptr_t)hThread;
      if ((hThread != (HANDLE)0x0) && (DVar3 = ResumeThread(hThread), DVar3 != 0xffffffff)) {
        return (uintptr_t)hThread;
      }
      local_8 = GetLastError();
    }
    _free(_Ptd);
    if (local_8 != 0) {
      __dosmaperr(local_8);
    }
  }
  return 0xffffffff;
}


