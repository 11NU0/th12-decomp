/* char * __thiscall getString(pcharNode * this, char * param_1, char * param_2) @ 0047e425  29 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: virtual char * __thiscall pcharNode::getString(char *,char *)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall pcharNode::getString(pcharNode *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = getStringHelper(param_1,param_2,*(char **)(this + 4),*(int *)(this + 8));
  return pcVar1;
}


