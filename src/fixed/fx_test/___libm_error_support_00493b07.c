/* undefined __cdecl ___libm_error_support(double * param_1, undefined8 * param_2, double * param_3, int param_4) @ 00493b07  636 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___libm_error_support
   
   Library: Visual Studio 2008 Release */

void __cdecl ___libm_error_support(double *param_1,undefined8 *param_2,double *param_3,int param_4)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_2c;
  char *local_28;
  double local_24;
  undefined8 local_1c;
  double local_14;
  undefined local_c;
  undefined uStack_b;
  undefined uStack_a;
  undefined uStack_9;
  undefined uStack_8;
  undefined uStack_7;
  undefined uStack_6;
  undefined uStack_5;
  
  local_c = 0;
  uStack_b = 0;
  uStack_a = 0;
  uStack_9 = 0;
  uStack_8 = 0;
  uStack_7 = 0;
  uStack_6 = 0;
  uStack_5 = 0;
  if (DAT_004d52d0 == 0) {
    pcVar1 = FUN_0049616c;
  }
  else {
    pcVar1 = (code *)__decode_pointer(DAT_004d52d8);
  }
  if (param_4 < 0xa7) {
    if (param_4 == 0xa6) {
      local_2c = 3;
      local_28 = "exp10";
LAB_00493bb8:
      local_24 = *param_1;
      local_1c = *param_2;
      local_14 = *param_3;
      iVar2 = (*pcVar1)(&local_2c);
      if (iVar2 == 0) {
        piVar3 = __errno();
        *piVar3 = 0x22;
      }
    }
    else if (param_4 < 0x1a) {
      if (param_4 != 0x19) {
        local_2c = 2;
        if (param_4 == 2) {
          local_2c = 2;
          local_28 = "log";
        }
        else {
          if (param_4 == 3) {
            local_28 = "log";
            goto LAB_00493c26;
          }
          if (param_4 == 8) {
            local_28 = "log10";
          }
          else {
            if (param_4 == 9) {
              local_28 = "log10";
              goto LAB_00493c26;
            }
            if (param_4 != 0xe) {
              if (param_4 != 0xf) {
                if (param_4 != 0x18) {
                  return;
                }
                local_2c = 3;
                goto LAB_00493bb1;
              }
              local_28 = "exp";
              goto LAB_00493bed;
            }
            local_2c = 3;
            local_28 = "exp";
          }
        }
        goto LAB_00493bb8;
      }
      local_28 = "pow";
LAB_00493bed:
      local_24 = *param_1;
      local_1c = *param_2;
      local_2c = 4;
      local_14 = *param_3;
      (*pcVar1)(&local_2c);
    }
    else {
      if (param_4 != 0x1a) {
        if (param_4 != 0x1b) {
          if (param_4 == 0x1c) goto switchD_00493ce3_caseD_3ee;
          if (param_4 != 0x1d) {
            if (param_4 != 0x3a) {
              if (param_4 != 0x3d) {
                return;
              }
              goto switchD_00493ce3_caseD_3f1;
            }
            goto switchD_00493ce3_caseD_3f0;
          }
          local_28 = "pow";
          goto LAB_00493c9c;
        }
        local_2c = 2;
LAB_00493bb1:
        local_28 = "pow";
        goto LAB_00493bb8;
      }
      local_14 = 1.0;
    }
    goto LAB_00493d7c;
  }
  switch(param_4) {
  case 1000:
    local_28 = "log";
    break;
  case 0x3e9:
    local_28 = "log10";
    break;
  case 0x3ea:
    local_28 = "exp";
    break;
  case 0x3eb:
    local_28 = "atan";
    break;
  case 0x3ec:
    local_28 = "ceil";
    break;
  case 0x3ed:
    local_28 = "floor";
    break;
  case 0x3ee:
switchD_00493ce3_caseD_3ee:
    local_28 = "pow";
    goto LAB_00493c26;
  case 0x3ef:
    local_28 = "modf";
    break;
  case 0x3f0:
switchD_00493ce3_caseD_3f0:
    local_28 = "acos";
    goto LAB_00493c26;
  case 0x3f1:
switchD_00493ce3_caseD_3f1:
    local_28 = "asin";
    goto LAB_00493c26;
  case 0x3f2:
    local_28 = "sin";
    goto LAB_00493d48;
  case 0x3f3:
    local_28 = "cos";
    goto LAB_00493d48;
  case 0x3f4:
    local_28 = "tan";
LAB_00493d48:
    local_14 = *param_1 *
               (double)CONCAT17(uStack_5,CONCAT16(uStack_6,CONCAT15(uStack_7,CONCAT14(uStack_8,
                                                  CONCAT13(uStack_9,CONCAT12(uStack_a,CONCAT11(
                                                  uStack_b,local_c)))))));
    *param_3 = local_14;
    local_24 = *param_1;
    local_1c = *param_2;
    goto LAB_00493d59;
  default:
    goto switchD_00493ce3_caseD_d;
  }
LAB_00493c9c:
  *param_3 = *param_1;
LAB_00493c26:
  local_24 = *param_1;
  local_1c = *param_2;
  local_14 = *param_3;
LAB_00493d59:
  local_2c = 1;
  iVar2 = (*pcVar1)(&local_2c);
  if (iVar2 == 0) {
    piVar3 = __errno();
    *piVar3 = 0x21;
  }
LAB_00493d7c:
  *param_3 = local_14;
switchD_00493ce3_caseD_d:
  return;
}


