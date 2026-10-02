/* undefined __stdcall FUN_0044f0a0(char * param_1) @ 0044f0a0  86 bytes */

#include "th12.h"

void __stdcall FUN_0044f0a0(char *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined **local_c [3];
  
  if (param_1 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = param_1;
    if ((int)(0xffffffff / ZEXT48(param_1)) == 0) {
      param_1 = (char *)0x0;
      std_exception::exception((exception *)local_c,&param_1);
      local_c[0] = &PTR_FUN_0049cd00;
      __CxxThrowException_8(local_c,&DAT_004ab5d0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  operator_new((uint)pcVar2);
  return;
}


