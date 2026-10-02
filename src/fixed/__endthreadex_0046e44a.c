/* void __cdecl __endthreadex(uint _Retval) @ 0046e44a  60 bytes */
#include "th12.h"

/* Library Function - Single Match
    __endthreadex
   
   Library: Visual Studio 2008 Release */

void __cdecl __endthreadex(uint _Retval)

{
  BOOL BVar1;
  _ptiddata _Ptd;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR_FUN_0049d57c);
  if (BVar1 != 0) {
    FUN_004759d5();
  }
  _Ptd = __getptd_noexit();
  if (_Ptd != (_ptiddata)0x0) {
    __freeptd(_Ptd);
  }
                    /* WARNING: Subroutine does not return */
  ExitThread(_Retval);
}


