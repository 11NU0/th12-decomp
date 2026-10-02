/* undefined __cdecl ___unDNameHelper(char * param_1, char * param_2, int param_3, ushort param_4) @ 00472927  51 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___unDNameHelper
   
   Library: Visual Studio 2008 Release */

void __cdecl ___unDNameHelper(char *param_1,char *param_2,int param_3,ushort param_4)

{
  if (param_4 == 0) {
    param_4 = 0x2800;
  }
  ___unDName(param_1,param_2,param_3,0x46d04a,_free,param_4);
  return;
}


