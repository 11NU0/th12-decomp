/* char * __thiscall getString(DName * this, char * param_1, int param_2) @ 0047e213  88 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: char * __thiscall DName_getString(char *,int)const 
   
   Library: Visual Studio 2008 Release */

char * __fastcall DName_getString(DName *(float *)this,char *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (*(undefined4 **)this == (undefined4 *)0x0) {
    if (param_1 != (char *)0x0) {
      *param_1 = '\0';
    }
  }
  else {
    if (param_1 == (char *)0x0) {
      iVar1 = (**(code **)**(undefined4 **)this)();
      param_2 = iVar1 + 1;
      param_1 = (char *)HeapManager_getMemory((HeapManager *)&DAT_004b42f8,param_2,0);
      if (param_1 == (char *)0x0) {
        return (char *)0x0;
      }
    }
    pcVar2 = getString(this,param_1,param_1 + (param_2 - 1));
    *pcVar2 = '\0';
  }
  return param_1;
}


