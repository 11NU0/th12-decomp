/* int __cdecl _expandtime(localeinfo_struct * param_1, char param_2, tm * param_3, char * * param_4, uint * param_5, __lc_time_data * param_6, uint param_7) @ 00484f4e  1000 bytes */

#include "th12.h"

/* WARNING: Type propagation algorithm not settling */
/* Library Function - Single Match
    int __cdecl _expandtime(struct localeinfo_struct *,char,struct tm const *,char * *,unsigned int
   *,struct __lc_time_data *,unsigned int)
   
   Library: Visual Studio 2008 Release */

int __cdecl
_expandtime(localeinfo_struct *param_1,char param_2,tm *param_3,char **param_4,uint *param_5,
           __lc_time_data *param_6,uint param_7)

{
  int iVar1;
  char in_AL;
  int *piVar2;
  char **in_ECX;
  tm *in_EDX;
  uint *unaff_EBX;
  char **unaff_ESI;
  char *unaff_EDI;
  bool bVar3;
  bool bVar4;
  undefined3 in_stack_00000009;
  int iVar5;
  
  if (in_AL < 'Z') {
    if (in_AL == 'Y') {
      if ((-0x76d < in_EDX->tm_year) && (in_EDX->tm_year < 0x1fa4)) goto LAB_0048519b;
LAB_00485103:
      piVar2 = __errno();
      goto LAB_0048522b;
    }
    if (in_AL < 'J') {
      if (in_AL == 'I') {
        if ((-1 < in_EDX->tm_hour) && (in_EDX->tm_hour < 0x18)) goto LAB_0048519b;
      }
      else {
        if (in_AL == '\x04') {
          return 1;
        }
        if (in_AL == '\r') {
          return 1;
        }
        if (in_AL == '%') {
          **in_ECX = '%';
          *in_ECX = *in_ECX + 1;
          *_param_2 = *_param_2 - 1;
          return 1;
        }
        if (in_AL == 'A') {
          iVar5 = in_EDX->tm_wday;
joined_r0x0048521f:
          if ((-1 < iVar5) && (iVar5 < 7)) goto LAB_00485326;
        }
        else if (in_AL == 'B') {
          iVar5 = in_EDX->tm_mon;
joined_r0x00485205:
          if ((-1 < iVar5) && (iVar5 < 0xc)) goto LAB_00485326;
        }
        else {
          if (in_AL != 'H') {
            return 0;
          }
          iVar1 = in_EDX->tm_hour;
          if (-1 < iVar1) {
            bVar4 = SBORROW4(iVar1,0x17);
            iVar5 = iVar1 + -0x17;
            bVar3 = iVar1 == 0x17;
            goto LAB_00484fb4;
          }
        }
      }
    }
    else {
      if (in_AL == 'M') {
        iVar5 = in_EDX->tm_min;
      }
      else {
        if (in_AL != 'S') {
          if (in_AL == 'U') {
            iVar5 = in_EDX->tm_wday;
          }
          else {
            if (in_AL != 'W') {
              if (in_AL != 'X') {
                return 0;
              }
LAB_004851e2:
              iVar5 = 2;
LAB_004851e6:
              iVar5 = _store_winword(param_1,iVar5,in_EDX,in_ECX,_param_2,(__lc_time_data *)param_3)
              ;
              if (iVar5 == 0) {
                return 0;
              }
              return 1;
            }
            iVar5 = in_EDX->tm_wday;
          }
          if ((-1 < iVar5) && (iVar5 < 7)) {
            iVar5 = in_EDX->tm_yday;
joined_r0x00485162:
            if ((-1 < iVar5) && (iVar5 < 0x16e)) goto LAB_0048519b;
          }
          goto LAB_00485226;
        }
        iVar5 = in_EDX->tm_sec;
      }
      if (-1 < iVar5) {
        bVar4 = SBORROW4(iVar5,0x3b);
        iVar5 = iVar5 + -0x3b;
        bVar3 = iVar5 == 0;
LAB_00484fb4:
        if (bVar3 || bVar4 != iVar5 < 0) {
LAB_0048519b:
          _store_num((int)param_4,(int)unaff_EDI,unaff_ESI,unaff_EBX,(uint)in_ECX);
          return 1;
        }
      }
    }
  }
  else if (in_AL < 'n') {
    if (in_AL != 'm') {
      if (in_AL == 'Z') {
LAB_0048527d:
        ___tzset();
        FUN_00477413();
LAB_00485326:
        _store_str(unaff_EDI,unaff_ESI,unaff_EBX);
        return 1;
      }
      if (in_AL == 'a') {
        iVar5 = in_EDX->tm_wday;
        goto joined_r0x0048521f;
      }
      if (in_AL == 'b') {
        iVar5 = in_EDX->tm_mon;
        goto joined_r0x00485205;
      }
      if (in_AL == 'c') {
        iVar5 = _store_winword(param_1,(uint)(param_4 != (char **)0x0),in_EDX,in_ECX,_param_2,
                               (__lc_time_data *)param_3);
        if (iVar5 == 0) {
          return 0;
        }
        if (*_param_2 == 0) {
          return 0;
        }
        **in_ECX = ' ';
        *in_ECX = *in_ECX + 1;
        *_param_2 = *_param_2 - 1;
        goto LAB_004851e2;
      }
      if (in_AL != 'd') {
        if (in_AL != 'j') {
          return 0;
        }
        iVar5 = in_EDX->tm_yday;
        goto joined_r0x00485162;
      }
      if ((0 < in_EDX->tm_mday) && (in_EDX->tm_mday < 0x20)) goto LAB_0048519b;
      goto LAB_00485103;
    }
    if ((-1 < in_EDX->tm_mon) && (in_EDX->tm_mon < 0xc)) goto LAB_0048519b;
  }
  else if (in_AL == 'p') {
    if ((-1 < in_EDX->tm_hour) && (in_EDX->tm_hour < 0x18)) goto LAB_00485326;
  }
  else if (in_AL == 'w') {
    if ((-1 < in_EDX->tm_wday) && (in_EDX->tm_wday < 7)) goto LAB_0048519b;
  }
  else {
    if (in_AL == 'x') {
      if (param_4 == (char **)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = 1;
      }
      goto LAB_004851e6;
    }
    if (in_AL != 'y') {
      if (in_AL != 'z') {
        return 0;
      }
      goto LAB_0048527d;
    }
    if (-1 < in_EDX->tm_year) goto LAB_0048519b;
  }
LAB_00485226:
  piVar2 = __errno();
LAB_0048522b:
  *piVar2 = 0x16;
  __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  return 0;
}


