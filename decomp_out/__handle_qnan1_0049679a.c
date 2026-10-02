/* float10 __cdecl __handle_qnan1(int param_1, double param_2) @ 0049679a  85 bytes */
#include "th12.h"

/* Library Function - Single Match
    __handle_qnan1
   
   Library: Visual Studio 2008 Release */

float10 __cdecl __handle_qnan1(int param_1,double param_2)

{
  int *piVar1;
  float10 fVar2;
  undefined4 in_stack_00000010;
  
  if (DAT_004b37a0 == 0) {
    fVar2 = __umatherr(1,param_1);
    return fVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x21;
  __ctrlfp(in_stack_00000010,0xffff);
  return (float10)param_2;
}


