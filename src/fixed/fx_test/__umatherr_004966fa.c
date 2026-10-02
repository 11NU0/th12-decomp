/* float10 __cdecl __umatherr(int param_1, int param_2) @ 004966fa  160 bytes */

#include "th12.h"

/* Library Function - Single Match
    __umatherr
   
   Library: Visual Studio 2008 Release */

float10 __cdecl __umatherr(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 in_stack_00000024;
  
  iVar1 = 0;
  do {
    if ((&DAT_004b37a8)[iVar1 * 2] == param_2) {
      puVar2 = (&PTR_DAT_004b37ac)[iVar1 * 2];
      goto LAB_00496718;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x1d);
  puVar2 = (undefined *)0x0;
LAB_00496718:
  if (puVar2 != (undefined *)0x0) {
    __ctrlfp(in_stack_00000024,0xffff);
    iVar1 = FUN_0049616c();
    if (iVar1 == 0) {
      __set_errno_from_matherr(param_1);
    }
    return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
  }
  __ctrlfp(in_stack_00000024,0xffff);
  __set_errno_from_matherr(param_1);
  return (float10)(double)CONCAT44(in_stack_00000020,in_stack_0000001c);
}


