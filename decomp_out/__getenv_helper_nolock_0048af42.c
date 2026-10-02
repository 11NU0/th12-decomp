/* char * __cdecl __getenv_helper_nolock(char * param_1) @ 0048af42  135 bytes */
#include "th12.h"

/* Library Function - Single Match
    __getenv_helper_nolock
   
   Library: Visual Studio 2008 Release */

char * __cdecl __getenv_helper_nolock(char *param_1)

{
  int iVar1;
  size_t _MaxCount;
  size_t sVar2;
  int *piVar3;
  
  if (((DAT_004d6428 != 0) &&
      ((DAT_004b3d80 != (int *)0x0 ||
       (((DAT_004b3d88 != 0 && (iVar1 = ___wtomb_environ(), iVar1 == 0)) &&
        (DAT_004b3d80 != (int *)0x0)))))) && (piVar3 = DAT_004b3d80, param_1 != (char *)0x0)) {
    _MaxCount = _strlen(param_1);
    for (; (char *)*piVar3 != (char *)0x0; piVar3 = piVar3 + 1) {
      sVar2 = _strlen((char *)*piVar3);
      if (((_MaxCount < sVar2) && (((uchar *)*piVar3)[_MaxCount] == '=')) &&
         (iVar1 = __mbsnbicoll((uchar *)*piVar3,(uchar *)param_1,_MaxCount), iVar1 == 0)) {
        return (char *)(*piVar3 + 1 + _MaxCount);
      }
    }
  }
  return (char *)0x0;
}


