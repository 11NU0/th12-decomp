/* DName * __cdecl getExternalDataType(DName * param_1, DName * param_2) @ 0048289f  110 bytes */

#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getExternalDataType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getExternalDataType(DName *param_1,DName *param_2)

{
  DName *this;
  DName *this_00;
  DName *pDVar1;
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  this = (DName *)HeapManager_getMemory((HeapManager *)&DAT_004b42f8,8,0);
  if (this == (DName *)0x0) {
    this = (DName *)0x0;
  }
  else {
    *(undefined4 *)this = 0;
    this[4] = (DName)0x0;
    *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  }
  getDataType(param_1,this);
  getDataIndirectType(local_c);
  pDVar1 = local_14;
  this_00 = DName_operator_add(local_c,local_1c,' ');
  pDVar1 = DName_operator_add(this_00,pDVar1,param_2);
  FUN_0047dde0(this,(undefined4 *)pDVar1);
  return param_1;
}


