/* char * __cdecl _Allocate<char>(uint param_1, char * param_2) @ 00491454  63 bytes */
#include "th12.h"

/* Library Function - Single Match
    char * __cdecl std::_Allocate<char>(unsigned int,char *)
   
   Library: Visual Studio 2008 Release */

char * __cdecl std::_Allocate<char>(uint param_1,char *param_2)

{
  code *pcVar1;
  char *pcVar2;
  exception local_10 [12];
  
  if (param_1 == 0) {
    param_1 = 0;
  }
  else if ((int)(0xffffffff / (ulonglong)param_1) == 0) {
    FUN_0044d280(local_10,(char)(0xffffffff % (ulonglong)param_1),0);
    __CxxThrowException_8(local_10,&DAT_004ab5d0);
    pcVar1 = (code *)swi(3);
    pcVar2 = (char *)(*pcVar1)();
    return pcVar2;
  }
  pcVar2 = (char *)operator_new(param_1);
  return pcVar2;
}


