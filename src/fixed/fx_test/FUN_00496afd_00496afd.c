/* undefined __cdecl FUN_00496afd(uint param_1, uint param_2, int * param_3) @ 00496afd  185 bytes */

#include "th12.h"

void __cdecl FUN_00496afd(uint param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  int extraout_EDX;
  uint extraout_EDX_00;
  
  dVar2 = (double)CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)));
  if (NAN(dVar2) == (dVar2 == 0.0)) {
    if (((param_2 & 0x7ff00000) == 0) && (((param_2 & 0xfffff) != 0 || (param_1 != 0)))) {
      if (0.0 <= (double)CONCAT17(param_2._3_1_,
                                  CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1)))) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      while ((param_2._2_1_ & 0x10) == 0) {
        iVar4 = CONCAT13(param_2._3_1_,CONCAT12(param_2._2_1_,(ushort)param_2)) << 1;
        param_2._0_2_ = (ushort)iVar4;
        param_2._2_1_ = (byte)((uint)iVar4 >> 0x10);
        param_2._3_1_ = (byte)((uint)iVar4 >> 0x18);
        if ((param_1 & 0x80000000) != 0) {
          param_2._0_2_ = (ushort)param_2 | 1;
        }
        param_1 = param_1 << 1;
      }
      uVar1 = CONCAT11(param_2._3_1_,param_2._2_1_) & 0xffef;
      param_2._2_1_ = (byte)uVar1;
      param_2._3_1_ = (byte)(uVar1 >> 8);
      if (bVar3) {
        param_2._3_1_ = param_2._3_1_ | 0x80;
      }
      __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0)
      ;
      iVar4 = extraout_EDX;
    }
    else {
      __set_exp(CONCAT17(param_2._3_1_,CONCAT16(param_2._2_1_,CONCAT24((ushort)param_2,param_1))),0)
      ;
      iVar4 = (extraout_EDX_00 >> 4 & 0x7ff) - 0x3fe;
    }
  }
  else {
    iVar4 = 0;
  }
  *param_3 = iVar4;
  return;
}


