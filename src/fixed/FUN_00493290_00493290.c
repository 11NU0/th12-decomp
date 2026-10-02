/* float10 __cdecl FUN_00493290(double param_1, undefined2 param_2) @ 00493290  502 bytes */
#include "th12.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

typedef struct param_1__u { undefined4 _; undefined1 _6_2_; undefined1 _0_6_; } param_1__u;
float10 __cdecl FUN_00493290(double param_1,undefined2 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  ushort in_FPUControlWord;
  float10 fVar5;
  double dVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  
  if (DAT_004d52d4 != 0) {
    bVar4 = (MXCSR & 0x1f80) == 0x1f80;
    if (bVar4) {
      bVar4 = (in_FPUControlWord & 0x7f) == 0x7f;
    }
    if (bVar4) {
      uVar2 = (uint)((ulonglong)param_1 >> 0x20);
      uVar1 = uVar2 >> 0x14;
      uVar7 = (ulonglong)(0x433 - (uVar2 >> 0x14 & 0x7ff));
      if ((uVar1 & 0x800) == 0) {
        if (uVar1 < 0x3ff) {
          return (float10)0;
        }
        if (uVar1 < 0x433) {
          return (float10)(double)(((ulonglong)param_1 >> uVar7) << uVar7);
        }
      }
      else {
        dVar6 = (double)(((ulonglong)param_1 >> uVar7) << uVar7);
        if (uVar1 < 0xbff) {
          return (float10)(double)((-(ulonglong)(param_1 < -0.0) | SUB168(_DAT_004a44a0,0)) &
                                  0xbff0000000000000);
        }
        if (uVar1 < 0xc33) {
          return (float10)(dVar6 - (double)(-(ulonglong)(param_1 < dVar6) & 0x3ff0000000000000));
        }
      }
      if (NANP(param_1)) {
        ___libm_error_support(&param_1,&param_1,&param_1,0x3ed);
      }
      return (float10)(double)CONCAT26(((param_1__u *)&param_1)->_6_2_,((param_1__u *)&param_1)->_0_6_);
    }
  }
  uVar2 = __ctrlfp(DAT_004b35b8,0xffff);
  uVar1 = (uint)(CONCAT26(((param_1__u *)&param_1)->_6_2_,((param_1__u *)&param_1)->_0_6_) >> 0x20);
  if ((((param_1__u *)&param_1)->_6_2_ & 0x7ff0) == 0x7ff0) {
    iVar3 = __sptype((int)((param_1__u *)&param_1)->_0_6_,uVar1);
    if (0 < iVar3) {
      if (iVar3 < 3) {
        __ctrlfp(uVar2,0xffff);
        return (float10)(double)CONCAT26(((param_1__u *)&param_1)->_6_2_,((param_1__u *)&param_1)->_0_6_);
      }
      if (iVar3 == 3) {
        fVar5 = __handle_qnan1(0xb,(double)CONCAT44((int)(CONCAT26(((param_1__u *)&param_1)->_6_2_,((param_1__u *)&param_1)->_0_6_) >>
                                                         0x20),(int)((param_1__u *)&param_1)->_0_6_));
        return fVar5;
      }
    }
    dVar6 = (double)CONCAT26(((param_1__u *)&param_1)->_6_2_,((param_1__u *)&param_1)->_0_6_) + 1.0;
    uVar8 = CONCAT26(((param_1__u *)&param_1)->_6_2_,((param_1__u *)&param_1)->_0_6_);
    uVar1 = 8;
  }
  else {
    fVar5 = __frnd((double)CONCAT44(uVar1,(int)((param_1__u *)&param_1)->_0_6_));
    dVar6 = (double)fVar5;
    if (((NANP((double)CONCAT26(((param_1__u *)&param_1)->_6_2_,((param_1__u *)&param_1)->_0_6_)) || NANP(dVar6)) !=
         ((double)CONCAT26(((param_1__u *)&param_1)->_6_2_,((param_1__u *)&param_1)->_0_6_) == dVar6)) || ((uVar2 & 0x20) != 0)) {
      __ctrlfp(uVar2,0xffff);
      return (float10)dVar6;
    }
    uVar8 = CONCAT26(((param_1__u *)&param_1)->_6_2_,((param_1__u *)&param_1)->_0_6_);
    uVar1 = 0x10;
  }
  fVar5 = (float10)__except1(uVar1,0xb,uVar8,dVar6,uVar2);
                    /* WARNING: Read-only address (ram,0x004a44a0) is written */
  return fVar5;
}


