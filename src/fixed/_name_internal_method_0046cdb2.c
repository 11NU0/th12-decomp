/* char * __thiscall _name_internal_method(type_info * this, __type_info_node * param_1) @ 0046cdb2  20 bytes */
#include "th12.h"

/* Library Function - Single Match
    public: char const * __thiscall type_info__name_internal_method(struct __type_info_node *)const
   
   
   Library: Visual Studio 2008 Release */

char * __fastcall type_info__name_internal_method(type_info *(float *)this,__type_info_node *param_1)

{
  char *pcVar1;
  
  pcVar1 = _Name_base_internal(this,param_1);
  return pcVar1;
}


