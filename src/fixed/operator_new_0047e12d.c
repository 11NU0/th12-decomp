/* void * __cdecl operator_new(uint param_1, HeapManager * param_2, int param_3) @ 0047e12d  23 bytes */
#include "th12.h"

/* Library Function - Single Match
    void * __cdecl operator new(unsigned int,class HeapManager &,int)
   
   Library: Visual Studio 2008 Release */

void * __cdecl operator_new(uint param_1,HeapManager *param_2,int param_3)

{
  void *pvVar1;
  
  pvVar1 = HeapManager_getMemory((HeapManager *)&DAT_004b42f8,param_1,param_3);
  return pvVar1;
}


