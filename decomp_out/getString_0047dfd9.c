/* char * __thiscall getString(pairNode * this, char * param_1, char * param_2) @ 0047dfd9  44 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: virtual char * __thiscall pairNode::getString(char *,char *)const 
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

char * __thiscall pairNode::getString(pairNode *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(**(code **)(**(int **)(this + 4) + 8))(param_1,param_2);
  if (pcVar1 < param_2) {
    pcVar1 = (char *)(**(code **)(**(int **)(this + 8) + 8))(pcVar1,param_2);
  }
  return pcVar1;
}


