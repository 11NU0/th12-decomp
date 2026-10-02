/* void __cdecl ___CxxUnregisterExceptionObject(void * storage, int rethrow) @ 0049231b  319 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___CxxUnregisterExceptionObject
   
   Library: Visual Studio 2008 Release */

void __cdecl ___CxxUnregisterExceptionObject(void *storage,int rethrow)

{
  _ptiddata p_Var1;
  int iVar2;
  
  if (*(int *)((int)storage + 8) != -1) {
    __FindAndUnlinkFrame(storage);
                    /* WARNING: Load size is inaccurate */
    if ((((rethrow == 0) && (p_Var1 = __getptd(), *p_Var1->_curexception == -0x1f928c9d)) &&
        (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x10) == 3)) &&
       (((p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930520 ||
         (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930521)) ||
        (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930522)))) {
      p_Var1 = __getptd();
      iVar2 = __IsExceptionObjectToBeDestroyed(*(int *)((int)p_Var1->_curexception + 0x18));
      if (iVar2 != 0) {
        p_Var1 = __getptd();
        ___DestructExceptionObject((int *)p_Var1->_curexception);
      }
    }
    p_Var1 = __getptd();
                    /* WARNING: Load size is inaccurate */
    if (((*p_Var1->_curexception == -0x1f928c9d) &&
        (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x10) == 3)) &&
       (((p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930520 ||
         ((p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930521 ||
          (p_Var1 = __getptd(), *(int *)((int)p_Var1->_curexception + 0x14) == 0x19930522)))) &&
        (rethrow != 0)))) {
      p_Var1 = __getptd();
      p_Var1->_ProcessingThrow = p_Var1->_ProcessingThrow + -1;
    }
    p_Var1 = __getptd();
    p_Var1->_curexception = *(void **)((int)storage + 8);
    p_Var1 = __getptd();
    p_Var1->_curcontext = *(void **)((int)storage + 0xc);
    return;
  }
  return;
}


