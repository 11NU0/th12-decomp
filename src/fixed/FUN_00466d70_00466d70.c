/* undefined4 __stdcall FUN_00466d70(void * param_1, size_t * param_2) @ 00466d70  192 bytes */
#include "th12.h"

undefined4 __stdcall FUN_00466d70(void *param_1,size_t *param_2)

{
  void *_Src;
  uint uVar1;
  size_t *psVar2;
  uint in_EAX;
  int unaff_ESI;
  
  psVar2 = param_2;
  if (*(int *)((int)unaff_ESI + 0x7c) == 0) {
    if (*(HANDLE *)((int)unaff_ESI + 0x8c) != (HANDLE)0x0) {
      if ((param_1 != (void *)0x0) && (param_2 != (size_t *)0x0)) {
        uVar1 = *(uint *)((int)unaff_ESI + 8);
        if (uVar1 < in_EAX) {
          in_EAX = uVar1;
        }
        *(uint *)((int)unaff_ESI + 8) = uVar1 - in_EAX;
        ReadFile(*(HANDLE *)((int)unaff_ESI + 0x8c),param_1,in_EAX,(LPDWORD)&param_1,(LPOVERLAPPED)0x0);
        *psVar2 = (size_t)param_1;
        return 0;
      }
      return 0x80070057;
    }
  }
  else {
    _Src = *(void **)((int)unaff_ESI + 0x84);
    if (_Src != (void *)0x0) {
      if (param_2 != (size_t *)0x0) {
        *param_2 = 0;
      }
      if ((uint)(*(int *)((int)unaff_ESI + 0x80) + *(int *)((int)unaff_ESI + 0x88)) < (int)_Src + in_EAX) {
        in_EAX = (*(int *)((int)unaff_ESI + 0x80) - (int)_Src) + *(int *)((int)unaff_ESI + 0x88);
      }
      _memcpy(param_1,_Src,in_EAX);
      *(int *)((int)unaff_ESI + 0x84) = *(int *)((int)unaff_ESI + 0x84) + in_EAX;
      if (param_2 != (size_t *)0x0) {
        *param_2 = in_EAX;
      }
      return 0;
    }
  }
  return 0x800401f0;
}


