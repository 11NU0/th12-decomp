/* uintptr_t __cdecl __beginthreadex(void * _Security, uint _StackSize, _StartAddress * _StartAddress, void * _ArgList, uint _InitFlag, uint * _ThrdAddr) @ 0046e54b  176 bytes */

#include "th12.h"

/* Library Function - Single Match
    __beginthreadex
   
   Library: Visual Studio 2008 Release */

uintptr_t __cdecl
__beginthreadex(void *_Security,uint _StackSize,_StartAddress *_StartAddress,void *_ArgList,
               uint _InitFlag,uint *_ThrdAddr)

{
  _StartAddress *p_Var1;
  int *piVar2;
  _ptiddata _Ptd;
  _ptiddata p_Var3;
  _StartAddress **lpThreadId;
  HANDLE pvVar4;
  ulong local_8;
  
  p_Var1 = _StartAddress;
  local_8 = 0;
  if (_StartAddress == (_StartAddress *)0x0) {
    piVar2 = __errno();
    *piVar2 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  else {
    ___set_flsgetvalue();
    _Ptd = (_ptiddata)__calloc_crt(1,0x214);
    if (_Ptd != (_ptiddata)0x0) {
      p_Var3 = __getptd();
      __initptd(_Ptd,p_Var3->ptlocinfo);
      _Ptd->_thandle = 0xffffffff;
      _Ptd->_initarg = _ArgList;
      _Ptd->_initaddr = p_Var1;
      lpThreadId = (_StartAddress **)_ThrdAddr;
      if (_ThrdAddr == (uint *)0x0) {
        lpThreadId = &_StartAddress;
      }
      pvVar4 = CreateThread((LPSECURITY_ATTRIBUTES)_Security,_StackSize,__threadstartex_4,_Ptd,
                            _InitFlag,(LPDWORD)lpThreadId);
      if (pvVar4 != (HANDLE)0x0) {
        return (uintptr_t)pvVar4;
      }
      local_8 = GetLastError();
    }
    _free(_Ptd);
    if (local_8 != 0) {
      __dosmaperr(local_8);
    }
  }
  return 0;
}


