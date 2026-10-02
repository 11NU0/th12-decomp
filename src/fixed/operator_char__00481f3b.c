/* char * __thiscall operator_char*(UnDecorator * this) @ 00481f3b  305 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall UnDecorator_operator char *(void)
   
   Library: Visual Studio 2008 Release */

char * __fastcall UnDecorator_operator_char_(UnDecorator *(float *)this)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  DName *pDVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  DName local_1c [8];
  DName local_14 [8];
  undefined4 *local_c;
  uint local_8;
  
  uVar1 = local_8 & 0xffff0000;
  puVar7 = (undefined4 *)0x0;
  local_c = (undefined4 *)0x0;
  uVar3 = local_8 & 0xffff0000;
  local_8 = uVar1;
  if (DAT_004b431c == (char *)0x0) goto LAB_00481fc2;
  if (*DAT_004b431c == '?') {
    if (DAT_004b431c[1] != '@') {
      if (DAT_004b431c[1] == '$') {
        pDVar4 = getTemplateName(local_1c,'\0');
        puVar7 = *(undefined4 **)pDVar4;
        uVar3 = *(uint *)((int)pDVar4 + 4);
        if ((char)uVar3 != '\x02') goto LAB_00481fc2;
        DAT_004b4318 = DAT_004b431c;
      }
      goto LAB_00481fb3;
    }
    DAT_004b4318 = DAT_004b4318 + 2;
    pDVar4 = local_14;
    getDecoratedName(pDVar4);
    pDVar4 = operator_add(local_1c,"CV: ",pDVar4);
  }
  else {
LAB_00481fb3:
    pDVar4 = local_1c;
    getDecoratedName(pDVar4);
  }
  puVar7 = *(undefined4 **)pDVar4;
  uVar3 = *(uint *)((int)pDVar4 + 4);
LAB_00481fc2:
  if ((char)uVar3 == '\x03') {
    return (char *)0x0;
  }
  if (((char)uVar3 == '\x02') || (((DAT_004b4328 & 0x1000) == 0 && (*DAT_004b4318 != '\0')))) {
    DName_operator_assign((DName *)&local_c,DAT_004b431c);
    puVar7 = local_c;
    uVar3 = local_8;
  }
  local_8 = uVar3;
  local_c = puVar7;
  if (DAT_004b4320 == (char *)0x0) {
    iVar5 = 0;
    if (local_c != (undefined4 *)0x0) {
      iVar5 = (**(code **)*local_c)();
    }
    DAT_004b4324 = iVar5 + 1;
    DAT_004b4320 = (char *)(*DAT_004b42f8)(iVar5 + 8U & 0xfffffff8);
    if (DAT_004b4320 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  DName_getString((DName *)&local_c,DAT_004b4320,DAT_004b4324);
  pcVar6 = DAT_004b4320;
  pcVar8 = DAT_004b4320;
  while (cVar2 = *pcVar6, cVar2 != '\0') {
    if (cVar2 == ' ') {
      *pcVar8 = ' ';
      pcVar8 = pcVar8 + 1;
      do {
        pcVar6 = pcVar6 + 1;
      } while (*pcVar6 == ' ');
    }
    else {
      *pcVar8 = cVar2;
      pcVar8 = pcVar8 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  *pcVar8 = '\0';
  return DAT_004b4320;
}


