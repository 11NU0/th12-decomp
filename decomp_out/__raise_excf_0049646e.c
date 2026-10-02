/* undefined __cdecl __raise_excf(uint * param_1, uint * param_2, uint param_3, int param_4, uint * param_5, uint * param_6) @ 0049646e  35 bytes */
#include "th12.h"

/* Library Function - Single Match
    __raise_excf
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl
__raise_excf(uint *param_1,uint *param_2,uint param_3,int param_4,uint *param_5,uint *param_6)

{
  __raise_exc_ex(param_1,param_2,param_3,param_4,param_5,param_6,1);
  return;
}


