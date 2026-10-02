/* int __cdecl __cftoe2_l(uint param_1, int param_2, int param_3, int * param_4, char param_5, localeinfo_struct * param_6) @ 0048a2eb  364 bytes */
#include "th12.h"

/* Library Function - Single Match
    __cftoe2_l
   
   Library: Visual Studio 2008 Release */

int __cdecl
__cftoe2_l(uint param_1,int param_2,int param_3,int *param_4,char param_5,localeinfo_struct *param_6
          )

{
  undefined *in_EAX;
  int *piVar1;
  errno_t eVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *_Dst;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int local_14 [2];
  int local_c;
  char local_8;
  
  _LocaleUpdate::_LocaleUpdate((_LocaleUpdate *)local_14,param_6);
  if ((in_EAX == (undefined *)0x0) || (param_1 == 0)) {
    piVar1 = __errno();
    iVar5 = 0x16;
  }
  else {
    iVar5 = param_2;
    if (param_2 < 1) {
      iVar5 = 0;
    }
    if (iVar5 + 9U < param_1) {
      if (param_5 != '\0') {
        __shift();
      }
      puVar3 = in_EAX;
      if (*param_4 == 0x2d) {
        *in_EAX = 0x2d;
        puVar3 = in_EAX + 1;
      }
      puVar4 = puVar3;
      if (0 < param_2) {
        puVar4 = puVar3 + 1;
        *puVar3 = *puVar4;
        *puVar4 = *(undefined *)**(undefined4 **)(local_14[0] + 0xbc);
      }
      _Dst = puVar4 + (uint)(param_5 == '\0') + param_2;
      if (param_1 == 0xffffffff) {
        puVar3 = (undefined *)0xffffffff;
      }
      else {
        puVar3 = in_EAX + (param_1 - (int)_Dst);
      }
      pcVar7 = "e+000";
      eVar2 = _strcpy_s(_Dst,(rsize_t)puVar3,"e+000");
      if (eVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      if (param_3 != 0) {
        *_Dst = 'E';
      }
      if (*(char *)param_4[3] != '0') {
        iVar5 = param_4[1] + -1;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
          _Dst[1] = '-';
        }
        if (99 < iVar5) {
          pcVar7 = (char *)0x64;
          iVar6 = iVar5 / 100;
          iVar5 = iVar5 % 100;
          _Dst[2] = _Dst[2] + (char)iVar6;
        }
        if (9 < iVar5) {
          pcVar7 = (char *)0xa;
          iVar6 = iVar5 / 10;
          iVar5 = iVar5 % 10;
          _Dst[3] = _Dst[3] + (char)iVar6;
        }
        _Dst[4] = _Dst[4] + (char)iVar5;
      }
      if ((((byte)DAT_004b43ac & 1) != 0) && (_Dst[2] == '0')) {
        pcVar7 = (char *)0x3;
        _memmove(_Dst + 2,_Dst + 3,3);
      }
      if (local_8 == '\0') {
        return (int)pcVar7;
      }
      *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
      return (int)pcVar7;
    }
    piVar1 = __errno();
    iVar5 = 0x22;
  }
  iVar6 = 0;
  *piVar1 = iVar5;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  if (local_8 != '\0') {
    *(uint *)(local_c + 0x70) = *(uint *)(local_c + 0x70) & 0xfffffffd;
  }
  return iVar6;
}


