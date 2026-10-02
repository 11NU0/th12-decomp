/* void __cdecl __init_pointers(void) @ 00472f3f  78 bytes */
#include "th12.h"

/* Library Function - Single Match
    __init_pointers
   
   Library: Visual Studio 2008 Release */

void __cdecl __init_pointers(void)

{
  undefined4 uVar1;
  
  uVar1 = __encoded_null();
  FUN_0046ff0c(uVar1);
  FUN_0047b407(uVar1);
  FUN_00470db7(uVar1);
  FUN_0047a2aa(uVar1);
  FUN_00482e09(uVar1);
  __initp_misc_winsig(uVar1);
  FUN_00477afd();
  __initp_eh_hooks();
  PTR___exit_004ad3f0 = (undefined *)__encode_pointer(0x472f0b);
  return;
}


