/* char * __thiscall getString(pDNameNode * this, char * param_1, char * param_2) @ 0047de9d  25 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: virtual char * __thiscall pDNameNode::getString(char *,char *)const 
   
   Library: Visual Studio 2008 Release */

char * __thiscall pDNameNode::getString(pDNameNode *this,char *param_1,char *param_2)

{
  char *pcVar1;
  
  if (*(DName **)(this + 4) != (DName *)0x0) {
    pcVar1 = DName::getString(*(DName **)(this + 4),param_1,param_2);
    return pcVar1;
  }
  return param_1;
}


