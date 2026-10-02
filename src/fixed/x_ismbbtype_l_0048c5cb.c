/* int __cdecl x_ismbbtype_l(localeinfo_struct * param_1, uint param_2, int param_3, int param_4) @ 0048c5cb  83 bytes */
#include "th12.h"

/* Library Function - Single Match
    int __cdecl x_ismbbtype_l(struct localeinfo_struct *,unsigned int,int,int)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

int __cdecl x_ismbbtype_l(localeinfo_struct *param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  int local_14;
  int local_10;
  int local_c;
  char local_8;
  
  _LocaleUpdate__LocaleUpdate((_LocaleUpdate *)&local_14,param_1);
  if ((*(byte *)(local_10 + 0x1d + (param_2 & 0xff)) & (byte)param_4) == 0) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(*(int *)((int)local_14 + 200) + (param_2 & 0xff) * 2) & param_3;
    }
    if (uVar1 == 0) goto LAB_0048c60f;
  }
  uVar1 = 1;
LAB_0048c60f:
  if (local_8 != '\0') {
    *(uint *)((int)local_c + 0x70) = *(uint *)((int)local_c + 0x70) & 0xfffffffd;
  }
  return uVar1;
}


