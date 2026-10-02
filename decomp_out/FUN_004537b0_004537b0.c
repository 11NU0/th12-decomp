/* int __stdcall FUN_004537b0(void) @ 004537b0  214 bytes */
#include "th12.h"

int FUN_004537b0(void)

{
  char cVar1;
  int *in_EAX;
  char *pcVar2;
  HANDLE pvVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  pcVar2 = "thbgm.dat";
  do {
    cVar1 = *pcVar2;
    *(char *)((int)(in_EAX + -0x126d9f) + (int)pcVar2) = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if ((in_EAX[4] != 0) && (*in_EAX != 0)) {
    FUN_00453c30();
    uVar5 = (uint)*(ushort *)(in_EAX[0x661] + 0x2c);
    uVar6 = *(int *)(in_EAX[0x661] + 0x24) * uVar5 * 4 >> 4;
    pvVar3 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,0,0,(LPCSTR)0x0);
    in_EAX[0x149c] = (int)pvVar3;
    pvVar3 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_004548a0,DAT_004ce940,0,
                          (LPDWORD)(in_EAX + 5));
    in_EAX[6] = (int)pvVar3;
    iVar4 = FUN_004657a0(in_EAX + 0x149b,(int *)in_EAX[4],0,0,0,0,uVar6 - uVar6 % uVar5,
                         in_EAX[0x149c]);
    return (-1 < iVar4) - 1;
  }
  return -1;
}


