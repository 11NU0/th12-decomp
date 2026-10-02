/* int __cdecl ___CxxRegisterExceptionObject(void * exception, void * storage) @ 00492212  183 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___CxxRegisterExceptionObject
   
   Library: Visual Studio 2008 Release */

int __cdecl ___CxxRegisterExceptionObject(void *exception,void *storage)

{
  int iVar1;
  _ptiddata p_Var2;
  int *piVar3;
  
                    /* WARNING: Load size is inaccurate */
  if ((exception == (void *)0x0) || (piVar3 = *exception, piVar3 == (int *)0x0)) {
    *(undefined4 *)((int)storage + 8) = 0xffffffff;
    *(undefined4 *)((int)storage + 0xc) = 0xffffffff;
  }
  else {
    if ((((*piVar3 == -0x1f928c9d) && (piVar3[4] == 3)) &&
        ((iVar1 = piVar3[5], iVar1 == 0x19930520 || ((iVar1 == 0x19930521 || (iVar1 == 0x19930522)))
         ))) && (piVar3[7] == 0)) {
      p_Var2 = __getptd();
      piVar3 = (int *)p_Var2->_curexception;
    }
    __CreateFrameInfo((undefined4 *)storage,piVar3[6]);
    p_Var2 = __getptd();
    *(void **)((int)storage + 8) = p_Var2->_curexception;
    p_Var2 = __getptd();
    *(void **)((int)storage + 0xc) = p_Var2->_curcontext;
    p_Var2 = __getptd();
    p_Var2->_curexception = piVar3;
  }
  p_Var2 = __getptd();
  p_Var2->_ProcessingThrow = p_Var2->_ProcessingThrow + -1;
  p_Var2 = __getptd();
  if (p_Var2->_ProcessingThrow < 0) {
    p_Var2 = __getptd();
    p_Var2->_ProcessingThrow = 0;
  }
  return 1;
}


