/* int __stdcall FUN_00464970(int param_1) @ 00464970  121 bytes */
#include "th12.h"

int FUN_00464970(int param_1)

{
  int iVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  
  iVar1 = in_EAX[2];
  if (0 < iVar1) {
    do {
      *in_EAX = *in_EAX + param_1;
      if (iVar1 <= *in_EAX) {
        do {
          if (in_EAX[0x34] == 0) {
            *in_EAX = iVar1 + -1;
          }
          else {
            *in_EAX = *in_EAX - iVar1;
          }
        } while (iVar1 <= *in_EAX);
      }
      if (*in_EAX < 0) {
        do {
          if (in_EAX[0x34] == 0) {
            *in_EAX = 0;
          }
          else {
            *in_EAX = *in_EAX + iVar1;
          }
        } while (*in_EAX < 0);
      }
      iVar2 = 0;
      piVar3 = in_EAX + 0x24;
      while( true ) {
        if (in_EAX[0x35] <= iVar2) goto LAB_004649e3;
        if (*piVar3 == *in_EAX) break;
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      }
    } while( true );
  }
LAB_004649e3:
  return *in_EAX;
}


