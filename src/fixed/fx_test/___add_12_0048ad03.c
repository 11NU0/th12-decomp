/* undefined __cdecl ___add_12(uint * param_1, uint * param_2) @ 0048ad03  113 bytes */

#include "th12.h"

/* Library Function - Single Match
    ___add_12
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __cdecl ___add_12(uint *param_1,uint *param_2)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *param_1 + *param_2;
  bVar2 = false;
  if ((uVar1 < *param_1) || (uVar1 < *param_2)) {
    bVar2 = true;
  }
  *param_1 = uVar1;
  if (bVar2) {
    uVar1 = param_1[1] + 1;
    bVar2 = false;
    if ((uVar1 < param_1[1]) || (uVar1 == 0)) {
      bVar2 = true;
    }
    param_1[1] = uVar1;
    if (bVar2) {
      param_1[2] = param_1[2] + 1;
    }
  }
  uVar1 = param_1[1] + param_2[1];
  bVar2 = false;
  if ((uVar1 < param_1[1]) || (uVar1 < param_2[1])) {
    bVar2 = true;
  }
  param_1[1] = uVar1;
  if (bVar2) {
    param_1[2] = param_1[2] + 1;
  }
  param_1[2] = param_1[2] + param_2[2];
  return;
}


