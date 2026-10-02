/* bool __cdecl _TranslateName(int param_1, int param_2, undefined4 * param_3) @ 00485a06  98 bytes */

#include "th12.h"

/* Library Function - Single Match
    _TranslateName
   
   Library: Visual Studio 2008 Release */

bool __cdecl _TranslateName(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar2 = 1;
  if (-1 < param_2) {
    do {
      if (iVar2 == 0) break;
      iVar4 = (param_2 + iVar3) / 2;
      puVar1 = (undefined4 *)(param_1 + iVar4 * 8);
      iVar2 = __stricmp((char *)*param_3,(char *)*puVar1);
      if (iVar2 == 0) {
        *param_3 = puVar1 + 1;
      }
      else if (iVar2 < 0) {
        param_2 = iVar4 + -1;
      }
      else {
        iVar3 = iVar4 + 1;
      }
    } while (iVar3 <= param_2);
  }
  return iVar2 == 0;
}


