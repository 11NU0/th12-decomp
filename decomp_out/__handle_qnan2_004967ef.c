/* float10 __cdecl __handle_qnan2(int param_1, double param_2, double param_3) @ 004967ef  97 bytes */
#include "th12.h"

/* Library Function - Single Match
    __handle_qnan2
   
   Library: Visual Studio 2008 Release */

float10 __cdecl __handle_qnan2(int param_1,double param_2,double param_3)

{
  int *piVar1;
  float10 fVar2;
  undefined4 in_stack_00000018;
  
  if (DAT_004b37a0 == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x21;
  __ctrlfp(in_stack_00000018,0xffff);
  return (float10)(param_2 + param_3);
}


