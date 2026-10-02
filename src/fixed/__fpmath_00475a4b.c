/* void __cdecl __fpmath(int param_1) @ 00475a4b  35 bytes */
#include "th12.h"

/* Library Function - Single Match
    __fpmath
   
   Library: Visual Studio 2008 Release */

void __cdecl __fpmath(int param_1)

{
  __cfltcvt_init();
  DAT_004b4114 = __ms_p5_mp_test_fdiv();
  if (param_1 != 0) {
    __setdefaultprecision();
  }
  return;
}


