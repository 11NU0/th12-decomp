/* exception * __thiscall operator=(exception * this, exception * param_1) @ 0046e02b  91 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: class std_exception & __thiscall std_exception_operator_assign(class std_exception const
   &)
   
   Library: Visual Studio 2008 Release */

exception * __fastcall std_exception_operator_assign(exception *(float *)this,exception *param_1)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  
  if (this != param_1) {
    iVar1 = *(int *)((int)param_1 + 8);
    *(int *)((int)this + 8) = iVar1;
    pcVar3 = *(char **)((int)param_1 + 4);
    if (iVar1 == 0) {
      *(char **)((int)this + 4) = pcVar3;
    }
    else if (pcVar3 == (char *)0x0) {
      *(undefined4 *)((int)this + 4) = 0;
    }
    else {
      sVar2 = _strlen(pcVar3);
      pcVar3 = (char *)_malloc(sVar2 + 1);
      *(char **)((int)this + 4) = pcVar3;
      if (pcVar3 != (char *)0x0) {
        _strcpy_s(pcVar3,sVar2 + 1,*(char **)((int)param_1 + 4));
      }
    }
  }
  return this;
}


