/* uint __fastcall __inc(undefined4 param_1, FILE * param_2) @ 00478dc3  22 bytes */
#include "th12.h"

/* Library Function - Single Match
    __inc
   
   Library: Visual Studio 2008 Release */

uint __fastcall __inc(undefined4 param_1,FILE *param_2)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  
  piVar1 = &param_2->_cnt;
  *piVar1 = *piVar1 + -1;
  if (-1 < *piVar1) {
    bVar2 = *param_2->_ptr;
    param_2->_ptr = param_2->_ptr + 1;
    return (uint)bVar2;
  }
  uVar3 = __filbuf(param_2);
  return uVar3;
}


