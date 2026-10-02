/* void * __cdecl __heap_alloc(size_t _Size) @ 0046cfd0  122 bytes */

#include "th12.h"

/* Library Function - Single Match
    __heap_alloc
   
   Library: Visual Studio 2008 Release */

void * __cdecl __heap_alloc(size_t _Size)

{
  LPVOID pvVar1;
  int *piVar2;
  
  if (DAT_004b3c04 == (HANDLE)0x0) {
    __FF_MSGBANNER();
    __NMSG_WRITE(0x1e);
    ___crtExitProcess(0xff);
  }
  if (DAT_004d6458 != 1) {
    if ((DAT_004d6458 == 3) && (piVar2 = _V6_HeapAlloc((uint *)_Size), piVar2 != (int *)0x0)) {
      return piVar2;
    }
    if (_Size == 0) {
      _Size = 1;
    }
    pvVar1 = HeapAlloc(DAT_004b3c04,0,_Size + 0xf & 0xfffffff0);
    return pvVar1;
  }
  if (_Size == 0) {
    _Size = 1;
  }
  pvVar1 = HeapAlloc(DAT_004b3c04,0,_Size);
  return pvVar1;
}


