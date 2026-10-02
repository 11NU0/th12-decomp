/* int __stdcall FUN_0045fba0(int param_1) @ 0045fba0  67 bytes */
#include "th12.h"

int __stdcall FUN_0045fba0(int param_1)

{
  int unaff_EBX;
  int unaff_ESI;
  int unaff_EDI;
  
  *(uint *)((int)unaff_ESI + 0x10) = *(uint *)((int)unaff_ESI + 0x10) & 0xfffffffe;
  D3DXCreateTexture(DAT_004ce8f0,param_1,unaff_EBX,1,0,
                    *(undefined4 *)(((char *)&DAT_004a2338 + unaff_EDI * 4)),1,unaff_ESI);
  *(undefined4 *)((int)unaff_ESI + 0xc) = *(undefined4 *)(((char *)&DAT_004a235c + unaff_EDI * 4));
  return param_1 * unaff_EBX * *(int *)(((char *)&DAT_004a235c + unaff_EDI * 4));
}


