/* undefined __cdecl _write_multi_char(undefined4 param_1, int param_2, FILE * param_3) @ 00470172  38 bytes */
#include "th12.h"

/* Library Function - Single Match
    _write_multi_char
   
   Library: Visual Studio 2008 Release */

void __cdecl _write_multi_char(undefined4 param_1,int param_2,FILE *param_3)

{
  int *in_EAX;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    _write_char(param_3);
  } while (*in_EAX != -1);
  return;
}


