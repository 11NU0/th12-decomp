/* int __cdecl _sprintf(char * _Dest, char * _Format, ...) @ 0046cbbb  125 bytes */
#include "th12.h"

/* Library Function - Single Match
    _sprintf
   
   Library: Visual Studio 2008 Release */

typedef struct local_24__u { undefined4 _; undefined4 _base; undefined4 _ptr; undefined4 _cnt; undefined4 _flag; } local_24__u;
int __cdecl _sprintf(char *_Dest,char *_Format,...)

{
  undefined4 stack0x0000000c;
  int *piVar1;
  int iVar2;
  FILE local_24;
  
  if ((_Format == (char *)0x0) || (_Dest == (char *)0x0)) {
    piVar1 = __errno();
    *piVar1 = 0x16;
    __invalid_parameter((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    iVar2 = -1;
  }
  else {
    ((local_24__u *)&local_24)->_base = _Dest;
    ((local_24__u *)&local_24)->_ptr = _Dest;
    ((local_24__u *)&local_24)->_cnt = 0x7fffffff;
    ((local_24__u *)&local_24)->_flag = 0x42;
    iVar2 = __output_l(&local_24,_Format,(_locale_t)0x0,&stack0x0000000c);
    ((local_24__u *)&local_24)->_cnt = ((local_24__u *)&local_24)->_cnt + -1;
    if (((local_24__u *)&local_24)->_cnt < 0) {
      __flsbuf(0,&local_24);
    }
    else {
      *((local_24__u *)&local_24)->_ptr = '\0';
    }
  }
  return iVar2;
}


