/* int * __fastcall _xcptlookup(undefined4 param_1, int param_2, int * param_3) @ 00477afe  53 bytes */
#include "th12.h"

/* Library Function - Single Match
    _xcptlookup
   
   Library: Visual Studio 2008 Release */

int * __fastcall _xcptlookup(undefined4 param_1,int param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = param_3;
  do {
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 3;
  } while (piVar1 < param_3 + DAT_004adb9c * 3);
  if ((param_3 + DAT_004adb9c * 3 <= piVar1) || (*piVar1 != param_2)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}


