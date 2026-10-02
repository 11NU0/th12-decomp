/* DName * __cdecl getStringEncoding(DName * param_1, char * param_2) @ 0047f4da  164 bytes */
#include "th12.h"

/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getStringEncoding(char *,int)
   
   Library: Visual Studio 2008 Release */

DName * __cdecl UnDecorator::getStringEncoding(DName *param_1,char *param_2)

{
  char *pcVar1;
  char cVar2;
  DNameStatus DVar3;
  DName local_14 [8];
  undefined4 local_c;
  undefined4 local_8;
  
  DName::DName((DName *)&local_c,param_2);
  pcVar1 = DAT_004b4318;
  cVar2 = *DAT_004b4318;
  DAT_004b4318 = DAT_004b4318 + 1;
  if ((cVar2 == '@') && (cVar2 = *DAT_004b4318, DAT_004b4318 = pcVar1 + 2, cVar2 == '_')) {
    DAT_004b4318 = pcVar1 + 3;
    getDimension(local_14,'\0');
    getDimension(local_14,'\0');
    cVar2 = *DAT_004b4318;
    if (cVar2 != '\0') {
      do {
        if (cVar2 == '@') break;
        DAT_004b4318 = DAT_004b4318 + 1;
        cVar2 = *DAT_004b4318;
      } while (cVar2 != '\0');
      if (*DAT_004b4318 != '\0') {
        DAT_004b4318 = DAT_004b4318 + 1;
        *(undefined4 *)param_1 = local_c;
        *(undefined4 *)(param_1 + 4) = local_8;
        return param_1;
      }
    }
    DAT_004b4318 = DAT_004b4318 + -1;
    DVar3 = 1;
  }
  else {
    DVar3 = 2;
  }
  DName::DName(param_1,DVar3);
  return param_1;
}


