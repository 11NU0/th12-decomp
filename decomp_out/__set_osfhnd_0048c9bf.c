/* int __cdecl __set_osfhnd(int param_1, intptr_t param_2) @ 0048c9bf  129 bytes */
#include "th12.h"

/* Library Function - Single Match
    __set_osfhnd
   
   Library: Visual Studio 2008 Release */

int __cdecl __set_osfhnd(int param_1,intptr_t param_2)

{
  int *piVar1;
  ulong *puVar2;
  int iVar3;
  DWORD nStdHandle;
  
  if ((-1 < param_1) && ((uint)param_1 < DAT_004d6308)) {
    iVar3 = (param_1 & 0x1fU) * 0x40;
    if (*(int *)(iVar3 + (&DAT_004d6320)[param_1 >> 5]) == -1) {
      if (DAT_004ad134 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_0048ca1c;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)param_2);
      }
LAB_0048ca1c:
      *(intptr_t *)(iVar3 + (&DAT_004d6320)[param_1 >> 5]) = param_2;
      return 0;
    }
  }
  piVar1 = __errno();
  *piVar1 = 9;
  puVar2 = ___doserrno();
  *puVar2 = 0;
  return -1;
}


