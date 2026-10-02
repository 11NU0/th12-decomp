/* char * __thiscall getString(DName * this, char * param_1, char * param_2) @ 0047dda9  24 bytes */

#include "th12.h"

/* Library Function - Single Match
    public: char * __thiscall DName_getString(char *,char *)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall DName_getString(DName *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  if (*(int **)this == (int *)0x0) {
    return param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x0047ddbe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pcVar1 = (char *)(**(code **)(**(int **)this + 8))();
  return pcVar1;
}


