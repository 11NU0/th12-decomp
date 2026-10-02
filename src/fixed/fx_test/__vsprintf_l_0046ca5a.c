/* int __cdecl __vsprintf_l(char * _DstBuf, char * _Format, _locale_t param_3, va_list _ArgList) @ 0046ca5a  126 bytes */

#include "th12.h"

/* Library Function - Single Match
    __vsprintf_l
   
   Library: Visual Studio 2008 Release */

typedef struct local_24__u { undefined4 _; undefined4 _base; undefined4 _ptr; undefined4 _cnt; undefined4 _flag; } local_24__u;
int __cdecl __vsprintf_l(char *_DstBuf,char *_Format,_locale_t param_3,va_list _ArgList)

{
  local_24__u *local_24__u_alias;
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_DstBuf == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
  local_24__u_alias = (local_24__u *)&local_24;
    local_24__u_alias->_base = _DstBuf;
  local_24__u_alias = (local_24__u *)&local_24;
    local_24__u_alias->_ptr = _DstBuf;
  local_24__u_alias = (local_24__u *)&local_24;
    local_24__u_alias->_cnt = 0x7fffffff;
  local_24__u_alias = (local_24__u *)&local_24;
    local_24__u_alias->_flag = 0x42;
    iVar2 = __output_l(&local_24,_Format,param_3,_ArgList);
  local_24__u_alias = (local_24__u *)&local_24;
    local_24__u_alias->_cnt = local_24__u_alias->_cnt + -1;
  local_24__u_alias = (local_24__u *)&local_24;
    if (local_24__u_alias->_cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
  local_24__u_alias = (local_24__u *)&local_24;
      *local_24__u_alias->_ptr = '\0';
    }
  }
  return iVar2;
}


