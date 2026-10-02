/* bool __cdecl __validate_param_reuseA(int * param_1, int param_2, char param_3, uint param_4) @ 00470f6e  299 bytes */

#include "th12.h"

/* Library Function - Single Match
    __validate_param_reuseA
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

bool __cdecl __validate_param_reuseA(int *param_1,int param_2,char param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 2);
  if ((cVar1 == 'p') || (param_3 == 'p')) {
    return cVar1 == param_3;
  }
  if ((cVar1 == 's') || (cVar1 == 'S')) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  if ((param_3 == 's') || (param_3 == 'S')) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (iVar3 != 0) {
    if (iVar3 != iVar2) {
      return false;
    }
    if (((param_1[3] & 0x810U) != 0) != ((param_4 & 0x810) != 0)) {
      return false;
    }
    return true;
  }
  if (iVar2 != 0) {
    return false;
  }
  if (cVar1 == 'd') {
LAB_00471012:
    iVar3 = 1;
  }
  else {
    if ((((((cVar1 != 'i') && (cVar1 != 'o')) && (cVar1 != 'u')) &&
         (((cVar1 != 'x' && (cVar1 != 'X')) &&
          ((param_3 != 'd' && ((param_3 != 'i' && (param_3 != 'o')))))))) && (param_3 != 'u')) &&
       ((param_3 != 'x' && (param_3 != 'X')))) goto LAB_00471054;
    if ((cVar1 == 'd') ||
       ((((cVar1 == 'i' || (cVar1 == 'o')) || (cVar1 == 'u')) || ((cVar1 == 'x' || (cVar1 == 'X'))))
       )) goto LAB_00471012;
    iVar3 = 0;
  }
  if (((param_3 == 'd') || (param_3 == 'i')) ||
     ((param_3 == 'o' || (((param_3 == 'u' || (param_3 == 'x')) || (param_3 == 'X')))))) {
    iVar2 = 1;
  }
  else {
    iVar2 = 0;
  }
  if (((iVar3 != iVar2) || (((param_1[3] ^ param_4) & 0x10000) != 0)) ||
     (((param_1[3] ^ param_4) & 0x20) != 0)) {
    return false;
  }
LAB_00471054:
  return *param_1 == param_2;
}


