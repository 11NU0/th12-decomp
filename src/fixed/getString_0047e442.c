/* char * __thiscall getString(DNameStatusNode * this, char * param_1, char * param_2) @ 0047e442  41 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: virtual char * __thiscall DNameStatusNode_getString(char *,char *)const 
   
   Library: Visual Studio 2008 Release */

char * __fastcall DNameStatusNode_getString(DNameStatusNode *(float *)this,char *param_1,char *param_2)

{
  if (*(int *)((int)this + 4) == 1) {
    param_1 = getStringHelper(param_1,param_2," ?? ",4);
  }
  return param_1;
}


