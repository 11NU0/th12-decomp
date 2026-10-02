/* char * __thiscall name(type_info * this, __type_info_node * param_1) @ 0046cd6d  20 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: char const * __thiscall type_info_name(struct __type_info_node *)const 
   
   Library: Visual Studio 2008 Release */

char * __fastcall type_info_name(type_info *(float *)this,__type_info_node *param_1)

{
  char *pcVar1;
  
  pcVar1 = _Name_base(this,param_1);
  return pcVar1;
}


