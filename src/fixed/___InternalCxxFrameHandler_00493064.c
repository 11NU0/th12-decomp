/* undefined4 __cdecl ___InternalCxxFrameHandler(EHExceptionRecord * param_1, EHRegistrationNode * param_2, _CONTEXT * param_3, void * param_4, _s_FuncInfo * param_5, int param_6, EHRegistrationNode * param_7, uchar param_8) @ 00493064  230 bytes */
#include "th12.h"

/* Library Function - Single Match
    ___InternalCxxFrameHandler
   
   Library: Visual Studio 2008 Release */

undefined4 __cdecl
___InternalCxxFrameHandler
          (EHExceptionRecord *param_1,EHRegistrationNode *param_2,_CONTEXT *param_3,void *param_4,
          _s_FuncInfo *param_5,int param_6,EHRegistrationNode *param_7,uchar param_8)

{
  _ptiddata p_Var1;
  undefined4 uVar2;
  
  p_Var1 = __getptd();
  if ((((*(int *)((p_Var1->_setloc_data)._cacheout + 0x27) != 0) || (*(int *)param_1 == -0x1f928c9d)
       ) || (*(int *)param_1 == -0x7fffffda)) ||
     (((*(uint *)param_5 & 0x1fffffff) < 0x19930522 || (((byte)param_5[0x20] & 1) == 0)))) {
    if (((byte)param_1[4] & 0x66) == 0) {
      if ((*(int *)((int)param_5 + 0xc) != 0) ||
         ((0x19930520 < (*(uint *)param_5 & 0x1fffffff) && (*(int *)((int)param_5 + 0x1c) != 0)))) {
        if ((*(int *)param_1 == -0x1f928c9d) &&
           (((2 < *(uint *)((int)param_1 + 0x10) && (0x19930522 < *(uint *)((int)param_1 + 0x14))) &&
            (*(code **)(*(int *)((int)param_1 + 0x1c) + 8) != (code *)0x0)))) {
          uVar2 = (**(code **)(*(int *)((int)param_1 + 0x1c) + 8))
                            (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
          return uVar2;
        }
        FindHandler(param_1,param_2,param_3,param_4,param_5,param_8,param_6,param_7);
      }
    }
    else if ((*(int *)((int)param_5 + 4) != 0) && (param_6 == 0)) {
      ___FrameUnwindToState((int)param_2,param_4,(int)param_5,-1);
    }
  }
  return 1;
}


