/* void __cdecl __endthread(void) @ 0046da49  72 bytes */

#include "th12.h"

/* Library Function - Single Match
    __endthread
   
   Library: Visual Studio 2008 Release */

void __cdecl __endthread(void)

{
  BOOL BVar1;
  _ptiddata _Ptd;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_0049d57c);
  if (BVar1 != 0) {
    FUN_004759d5();
  }
  _Ptd = __getptd_noexit();
  if (_Ptd != (_ptiddata)0x0) {
    if ((HANDLE)_Ptd->_thandle != (HANDLE)0xffffffff) {
      CloseHandle((HANDLE)_Ptd->_thandle);
    }
    __freeptd(_Ptd);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(0);
}


