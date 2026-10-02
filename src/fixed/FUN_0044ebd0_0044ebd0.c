/* undefined __stdcall FUN_0044ebd0(char * param_1) @ 0044ebd0  34 bytes */
#include "th12.h"

void __stdcall FUN_0044ebd0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  void *in_ECX;
  
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0044ec80(in_ECX,(undefined4 *)param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


