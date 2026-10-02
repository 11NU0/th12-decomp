/* int __cdecl __vsnprintf_helper(undefined * param_1, char * param_2, uint param_3, int param_4, undefined4 param_5, undefined4 param_6) @ 00472414  204 bytes */

#include "th12.h"

/* Library Function - Single Match
    __vsnprintf_helper
   
   Library: Visual Studio 2008 Release */

int __cdecl
__vsnprintf_helper(undefined *param_1,char *param_2,uint param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FILE local_24;
  
  if (param_4 == 0) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else if ((param_3 == 0) || (param_2 != (char *)0x0)) {
  local_24__u_alias = (local_24__u *)&local_24;
    local_24__u_alias->_cnt = 0x7fffffff;
    if (param_3 < 0x80000000) {
  local_24__u_alias = (local_24__u *)&local_24;
      local_24__u_alias->_cnt = param_3;
    }
  local_24__u_alias = (local_24__u *)&local_24;
    local_24__u_alias->_flag = 0x42;
  local_24__u_alias = (local_24__u *)&local_24;
    local_24__u_alias->_base = param_2;
  local_24__u_alias = (local_24__u *)&local_24;
    local_24__u_alias->_ptr = param_2;
    iVar2 = (*(code *)param_1)(&local_24,param_4,param_5,param_6);
    if (param_2 != (char *)0x0) {
      if (-1 < iVar2) {
  local_24__u_alias = (local_24__u *)&local_24;
        local_24__u_alias->_cnt = local_24__u_alias->_cnt - 1;
  local_24__u_alias = (local_24__u *)&local_24;
        if (-1 < local_24__u_alias->_cnt) {
  local_24__u_alias = (local_24__u *)&local_24;
          *local_24__u_alias->_ptr = '\0';
          return iVar2;
        }
        iVar3 = __flsbuf(0,&local_24);
        if (iVar3 != -1) {
          return iVar2;
        }
      }
      param_2[param_3 - 1] = '\0';
  local_24__u_alias = (local_24__u *)&local_24;
      iVar2 = (-1 < local_24__u_alias->_cnt) - 2;
    }
  }
  else {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  return iVar2;
}


