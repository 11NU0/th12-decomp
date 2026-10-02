/* char * __stdcall FUN_00424a20(char * param_1) @ 00424a20  210 bytes */
#include "th12.h"

char * __stdcall FUN_00424a20(char *param_1)

{
  char *in_EAX;
  char *pcVar1;
  size_t _Size;
  char *_Dst;
  size_t *unaff_EBX;
  
  _memset(param_1,0,0x1000);
  if (*param_1 == '\0') {
    while ((pcVar1 = _strchr(in_EAX,10), pcVar1 != (char *)0x0 ||
           (pcVar1 = _strchr(in_EAX,0xd), pcVar1 != (char *)0x0))) {
      _Size = (int)pcVar1 - (int)in_EAX;
      if (0xffe < (int)_Size) {
        _Size = 0xfff;
      }
      _memcpy(param_1,in_EAX,_Size);
      *unaff_EBX = (size_t)(in_EAX + (*unaff_EBX - (int)pcVar1));
      for (; (*pcVar1 == '\n' || (*pcVar1 == '\r')); pcVar1 = pcVar1 + 1) {
        *unaff_EBX = *unaff_EBX - 1;
      }
      _Dst = _strchr(param_1,0x23);
      if (_Dst != (char *)0x0) {
        _memset(_Dst,0,(size_t)(param_1 + (0x1000 - (int)_Dst)));
        *_Dst = '\0';
      }
      FUN_00424b50();
      in_EAX = pcVar1;
      if (*param_1 != '\0') {
        return pcVar1;
      }
    }
    _memcpy(param_1,in_EAX,*unaff_EBX);
    *unaff_EBX = 0;
  }
  return in_EAX;
}


