/* int __cdecl ___CxxDetectRethrow(void * exception) @ 004922c9  82 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___CxxDetectRethrow
   
   Library: Visual Studio 2008 Release */

int __cdecl ___CxxDetectRethrow(void *exception)

{
  int *piVar1;
  int iVar2;
  _ptiddata p_Var3;
  
                    /* WARNING: Load size is inaccurate */
  if (((((exception != (void *)0x0) && (piVar1 = *exception, *piVar1 == -0x1f928c9d)) &&
       (piVar1[4] == 3)) &&
      (((iVar2 = piVar1[5], iVar2 == 0x19930520 || (iVar2 == 0x19930521)) || (iVar2 == 0x19930522)))
      ) && (piVar1[7] == 0)) {
    p_Var3 = __getptd();
    p_Var3->_ProcessingThrow = p_Var3->_ProcessingThrow + 1;
    return 1;
  }
  return 0;
}


