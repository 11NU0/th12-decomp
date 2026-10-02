/* undefined __fastcall FUN_00449d80(undefined4 param_1, int * param_2) @ 00449d80  59 bytes */

#include "th12.h"

void __fastcall FUN_00449d80(undefined4 param_1,int *param_2)

{
  char cVar1;
  char *in_EAX;
  
  cVar1 = *in_EAX;
  while ((cVar1 != '\n' && (cVar1 != '\r'))) {
    if (*param_2 == 0) {
      return;
    }
    in_EAX = in_EAX + 1;
    *param_2 = *param_2 + -1;
    cVar1 = *in_EAX;
  }
  if (*param_2 != 0) {
    while (((*in_EAX == '\n' || (*in_EAX == '\r')) && (*param_2 != 0))) {
      in_EAX = in_EAX + 1;
      *param_2 = *param_2 + -1;
    }
  }
  return;
}


