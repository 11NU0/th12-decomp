/* undefined4 * __cdecl __CreateFrameInfo(undefined4 * param_1, undefined4 param_2) @ 00491d54  44 bytes */
#include "th12.h"

/* Library Function - Single Match
    __CreateFrameInfo
   
   Library: Visual Studio 2008 Release */

undefined4 * __cdecl __CreateFrameInfo(undefined4 *param_1,undefined4 param_2)

{
  _ptiddata p_Var1;
  
  *param_1 = param_2;
  p_Var1 = __getptd();
  param_1[1] = p_Var1->_pFrameInfoChain;
  p_Var1 = __getptd();
  p_Var1->_pFrameInfoChain = param_1;
  return param_1;
}


