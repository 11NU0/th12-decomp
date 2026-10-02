/* size_t __cdecl __Strftime(char * param_1, size_t _Maxsize, char * param_3, tm * param_4, void * param_5) @ 0048597a  32 bytes */

#include "th12.h"

/* Library Function - Single Match
    __Strftime
   
   Library: Visual Studio 2008 Release */

size_t __cdecl __Strftime(char *param_1,size_t _Maxsize,char *param_3,tm *param_4,void *param_5)

{
  size_t sVar1;
  
  sVar1 = __Strftime_l(param_1,_Maxsize,param_3,(int)param_4,(tm *)param_5,(localeinfo_struct *)0x0)
  ;
  return sVar1;
}


