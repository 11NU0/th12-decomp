/* undefined __thiscall Constructor(void * this, undefined4 param_1, undefined4 param_2) @ 0047d5a1  31 bytes */
#include "th12.h"

/* Library Function - Multiple Matches With Same Base Name
    public: void __thiscall HeapManager_Constructor(void * (__cdecl*)(unsigned int),void
   (__cdecl*)(void *))
    public: void __thiscall _HeapManager_Constructor(void * (__cdecl*)(unsigned int),void
   (__cdecl*)(void *))
   
   Library: Visual Studio */

void __fastcall Constructor(void *this,undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  return;
}


