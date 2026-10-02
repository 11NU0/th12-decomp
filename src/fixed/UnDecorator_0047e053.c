/* undefined __thiscall UnDecorator(UnDecorator * this, char * param_1, char * param_2, int param_3, _func_char_ptr_long * param_4, ulong param_5) @ 0047e053  111 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: __thiscall UnDecorator_UnDecorator(char *,char const *,int,char *
   (__cdecl*)(long),unsigned long)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

void __thiscall
UnDecorator_UnDecorator
          (UnDecorator *(float *)this,char *param_1,char *param_2,int param_3,_func_char_ptr_long *param_4,
          ulong param_5)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0xffffffff;
  DAT_004b431c = param_2;
  DAT_004b4318 = param_2;
  if (param_1 == (char *)0x0) {
    DAT_004b4320 = (char *)0x0;
    DAT_004b4324 = 0;
  }
  else {
    DAT_004b4324 = param_3;
    DAT_004b4320 = param_1;
  }
  DAT_004b4310 = this + 0x2c;
  DAT_004b4328 = param_5;
  DAT_004b430c = this;
  DAT_004b432c = param_4;
  DAT_004b4330 = 0;
  return;
}


