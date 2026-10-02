/* undefined __cdecl __un_inc(int param_1, FILE * param_2) @ 00478dd9  19 bytes */
#include "th12.h"

/* Library Function - Single Match
    __un_inc
   
   Library: Visual Studio 2008 Release */

void __cdecl __un_inc(int param_1,FILE *param_2)

{
  if (param_1 != -1) {
    __ungetc_nolock(param_1,param_2);
    return;
  }
  return;
}


