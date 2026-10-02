/* char * __thiscall getString(pcharNode * this, char * param_1, char * param_2) @ 0047e425  29 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: virtual char * __thiscall pcharNode_getString(char *,char *)const 
   
   Library: Visual Studio 2008 Release */

char * __fastcall pcharNode_getString(pcharNode *(float *)this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = getStringHelper(param_1,param_2,*(char **)((int)this + 4),*(int *)((int)this + 8));
  return pcVar1;
}


