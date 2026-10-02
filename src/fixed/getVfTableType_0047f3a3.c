/* DName * __cdecl getVfTableType(DName * param_1, undefined4 * param_2) @ 0047f3a3  311 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator_getVfTableType(class DName const &)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator_getVfTableType(DName *param_1,undefined4 *param_2)

{
  char cVar1;
  DName *(float *)this;
  DName *pDVar2;
  DName *pDVar3;
  char *pcVar4;
  DName local_1c [8];
  DName local_14 [8];
  DName local_c [8];
  
  *(undefined4 *)param_1 = *param_2;
  cVar1 = (char)param_2[1];
  *(undefined4 *)((int)param_1 + 4) = param_2[1];
  if (cVar1 < '\x02') {
    if (*DAT_004b4318 == '\0') {
      if (cVar1 < '\x02') {
        pDVar2 = DName_operator_add(local_1c,1,param_1);
        FUN_0047dde0(param_1,(undefined4 *)pDVar2);
      }
    }
    else {
      getDataIndirectType(local_c);
      pDVar2 = local_14;
      pDVar3 = param_1;
      this = DName_operator_add(local_c,local_1c,' ');
      pDVar2 = DName_operator_add(this,pDVar2,pDVar3);
      FUN_0047dde0(param_1,(undefined4 *)pDVar2);
      if ((char)param_1[4] < '\x02') {
        if (*DAT_004b4318 != '@') {
          pcVar4 = "{for ";
          do {
            DName_operator_add_assign(param_1,pcVar4);
            do {
              if ((('\x01' < (char)param_1[4]) || (*DAT_004b4318 == '\0')) || (*DAT_004b4318 == '@')
                 ) {
                if ((char)param_1[4] < '\x02') {
                  if (*DAT_004b4318 == '\0') {
                    DName_operator_add_assign(param_1,1);
                  }
                  DName_operator_add_assign(param_1,'}');
                }
LAB_0047f4a8:
                if (*DAT_004b4318 != '@') {
                  return param_1;
                }
                goto LAB_0047f4b2;
              }
              cVar1 = '\'';
              pDVar2 = local_1c;
              pDVar3 = getScope(local_14);
              pDVar3 = DName_operator_add(local_c,'`',pDVar3);
              pDVar2 = DName_operator_add(pDVar3,pDVar2,cVar1);
              DName_operator_add_assign(param_1,pDVar2);
              if (*DAT_004b4318 == '@') {
                DAT_004b4318 = DAT_004b4318 + 1;
              }
              if ('\x01' < (char)param_1[4]) goto LAB_0047f4a8;
            } while (*DAT_004b4318 == '@');
            pcVar4 = "s ";
          } while( true );
        }
LAB_0047f4b2:
        DAT_004b4318 = DAT_004b4318 + 1;
      }
    }
  }
  return param_1;
}


