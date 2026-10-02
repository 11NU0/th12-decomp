/* INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 * _Ifp, _CRT_FLOAT * _F) @ 00489b2e  1348 bytes */

#include "th12.h"

/* Library Function - Multiple Matches With Different Base Names
    __ld12tod
    __ld12tof
   
   Library: Visual Studio 2008 Release */

INTRNCVT_STATUS __cdecl __ld12tof(_LDBL12 *_Ifp,_CRT_FLOAT *_F)

{
  uint uVar1;
  int iVar2;
  INTRNCVT_STATUS IVar3;
  byte bVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  _LDBL12 *p_Var8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  bool bVar14;
  uint local_24;
  float local_20;
  uint local_1c [5];
  _LDBL12 *local_8;
  
  local_1c[1] = *(ushort *)(_Ifp->ld12 + 10) & 0x8000;
  uVar9 = *(uint *)(_Ifp->ld12 + 6);
  local_24 = uVar9;
  fVar12 = *(float *)(_Ifp->ld12 + 2);
  uVar10 = *(ushort *)(_Ifp->ld12 + 10) & 0x7fff;
  iVar11 = uVar10 - 0x3fff;
  uVar1 = (uint)*(ushort *)_Ifp->ld12 << 0x10;
  local_20 = fVar12;
  local_1c[0] = uVar1;
  if (iVar11 == -0x3fff) {
    iVar11 = 0;
    iVar2 = 0;
    do {
      if ((&local_24)[iVar2] != 0) {
        local_24 = 0;
        local_20 = 0.0;
        IVar3 = INTRNCVT_UNDERFLOW;
        goto LAB_0048a02f;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 3);
    IVar3 = INTRNCVT_OK;
  }
  else {
    _Ifp = (_LDBL12 *)0x0;
    iVar13 = DAT_004adfd0 - 1;
    iVar2 = (int)(DAT_004adfd0 + ((int)DAT_004adfd0 >> 0x1f & 0x1fU)) >> 5;
    uVar7 = DAT_004adfd0 & 0x8000001f;
    local_1c[2] = iVar11;
    local_1c[3] = iVar2;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xffffffe0) + 1;
    }
    puVar6 = &local_24 + iVar2;
    bVar4 = (byte)(0x1f - uVar7);
    local_1c[4] = 0x1f - uVar7;
    if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
      uVar7 = (&local_24)[iVar2] & ~(-1 << (bVar4 & 0x1f));
      while( true ) {
        if (uVar7 != 0) {
          iVar2 = (int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5;
          local_8 = (_LDBL12 *)0x0;
          p_Var8 = (_LDBL12 *)(1 << (0x1f - ((byte)iVar13 & 0x1f) & 0x1f));
          puVar5 = &local_24 + iVar2;
          _Ifp = (_LDBL12 *)(p_Var8->ld12 + *puVar5);
          if (_Ifp < (_LDBL12 *)*puVar5) goto LAB_00489c63;
          bVar14 = _Ifp < p_Var8;
          do {
            local_8 = (_LDBL12 *)0x0;
            if (!bVar14) goto LAB_00489c6a;
LAB_00489c63:
            do {
              local_8 = (_LDBL12 *)0x1;
LAB_00489c6a:
              iVar2 = iVar2 + -1;
              *puVar5 = (uint)_Ifp;
              if ((iVar2 < 0) || (local_8 == (_LDBL12 *)0x0)) {
                _Ifp = local_8;
                goto LAB_00489c78;
              }
              local_8 = (_LDBL12 *)0x0;
              puVar5 = &local_24 + iVar2;
              _Ifp = (_LDBL12 *)(((_LDBL12 *)*puVar5)->ld12 + 1);
            } while (_Ifp < (_LDBL12 *)*puVar5);
            bVar14 = _Ifp == (_LDBL12 *)0x0;
          } while( true );
        }
        iVar2 = iVar2 + 1;
        if (2 < iVar2) break;
        uVar7 = (&local_24)[iVar2];
      }
    }
LAB_00489c78:
    *puVar6 = *puVar6 & -1 << ((byte)local_1c[4] & 0x1f);
    iVar2 = local_1c[3] + 1;
    if (iVar2 < 3) {
      puVar6 = &local_24 + iVar2;
      for (iVar13 = 3 - iVar2; iVar13 != 0; iVar13 = iVar13 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
    }
    if (_Ifp != (_LDBL12 *)0x0) {
      iVar11 = uVar10 - 0x3ffe;
    }
    if (iVar11 < (int)(DAT_004adfcc - DAT_004adfd0)) {
      local_24 = 0;
      local_20 = 0.0;
    }
    else {
      if (DAT_004adfcc < iVar11) {
        if (iVar11 < DAT_004adfc8) {
          local_24 = local_24 & 0x7fffffff;
          iVar11 = iVar11 + DAT_004adfdc;
          iVar2 = (int)(DAT_004adfd4 + ((int)DAT_004adfd4 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_004adfd4 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            local_1c[2] = (&local_24)[(int)_Ifp] & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = (&local_24)[(int)_Ifp] >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar13 = 2;
          puVar6 = local_1c + -iVar2;
          do {
            if (iVar13 < iVar2) {
              (&local_24)[iVar13] = 0;
            }
            else {
              (&local_24)[iVar13] = *puVar6;
            }
            iVar13 = iVar13 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar13);
          IVar3 = INTRNCVT_OK;
        }
        else {
          local_20 = 0.0;
          local_1c[0] = 0;
          local_24 = 0x80000000;
          iVar11 = (int)(DAT_004adfd4 + ((int)DAT_004adfd4 >> 0x1f & 0x1fU)) >> 5;
          uVar9 = DAT_004adfd4 & 0x8000001f;
          if ((int)uVar9 < 0) {
            uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
          }
          local_1c[3] = 0;
          _Ifp = (_LDBL12 *)0x0;
          local_8 = (_LDBL12 *)(0x20 - uVar9);
          do {
            uVar1 = (&local_24)[(int)_Ifp];
            local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
            (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
            _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
            local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
          } while ((int)_Ifp < 3);
          iVar2 = 2;
          puVar6 = local_1c + -iVar11;
          do {
            if (iVar2 < iVar11) {
              (&local_24)[iVar2] = 0;
            }
            else {
              (&local_24)[iVar2] = *puVar6;
            }
            iVar2 = iVar2 + -1;
            puVar6 = puVar6 + -1;
          } while (-1 < iVar2);
          iVar11 = DAT_004adfdc + DAT_004adfc8;
          IVar3 = INTRNCVT_OVERFLOW;
        }
        goto LAB_0048a02f;
      }
      local_1c[2] = DAT_004adfcc - local_1c[2];
      local_24 = uVar9;
      local_20 = fVar12;
      iVar11 = (int)(local_1c[2] + ((int)local_1c[2] >> 0x1f & 0x1fU)) >> 5;
      uVar9 = local_1c[2] & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
      iVar2 = DAT_004adfd0 - 1;
      iVar11 = (int)(DAT_004adfd0 + ((int)DAT_004adfd0 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = DAT_004adfd0 & 0x8000001f;
      local_1c[3] = iVar11;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      bVar4 = (byte)(0x1f - uVar9);
      puVar6 = &local_24 + iVar11;
      local_1c[2] = 0x1f - uVar9;
      if ((*puVar6 & 1 << (bVar4 & 0x1f)) != 0) {
        uVar9 = (&local_24)[iVar11] & ~(-1 << (bVar4 & 0x1f));
        while (uVar9 == 0) {
          iVar11 = iVar11 + 1;
          if (2 < iVar11) goto LAB_00489e1b;
          uVar9 = (&local_24)[iVar11];
        }
        iVar11 = (int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5;
        bVar14 = false;
        uVar10 = 1 << (0x1f - ((byte)iVar2 & 0x1f) & 0x1f);
        uVar1 = (&local_24)[iVar11];
        uVar9 = uVar1 + uVar10;
        if ((uVar9 < uVar1) || (uVar9 < uVar10)) {
          bVar14 = true;
        }
        (&local_24)[iVar11] = uVar9;
        while ((iVar11 = iVar11 + -1, -1 < iVar11 && (bVar14))) {
          uVar1 = (&local_24)[iVar11];
          uVar9 = uVar1 + 1;
          bVar14 = false;
          if ((uVar9 < uVar1) || (uVar9 == 0)) {
            bVar14 = true;
          }
          (&local_24)[iVar11] = uVar9;
        }
      }
LAB_00489e1b:
      *puVar6 = *puVar6 & -1 << ((byte)local_1c[2] & 0x1f);
      iVar11 = local_1c[3] + 1;
      if (iVar11 < 3) {
        puVar6 = &local_24 + iVar11;
        for (iVar2 = 3 - iVar11; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar6 = 0;
          puVar6 = puVar6 + 1;
        }
      }
      uVar9 = DAT_004adfd4 + 1;
      iVar11 = (int)(uVar9 + ((int)uVar9 >> 0x1f & 0x1fU)) >> 5;
      uVar9 = uVar9 & 0x8000001f;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xffffffe0) + 1;
      }
      local_1c[3] = 0;
      _Ifp = (_LDBL12 *)0x0;
      local_8 = (_LDBL12 *)(0x20 - uVar9);
      do {
        uVar1 = (&local_24)[(int)_Ifp];
        local_1c[2] = uVar1 & ~(-1 << ((byte)uVar9 & 0x1f));
        (&local_24)[(int)_Ifp] = uVar1 >> ((byte)uVar9 & 0x1f) | local_1c[3];
        _Ifp = (_LDBL12 *)(_Ifp->ld12 + 1);
        local_1c[3] = local_1c[2] << ((byte)(0x20 - uVar9) & 0x1f);
      } while ((int)_Ifp < 3);
      iVar2 = 2;
      puVar6 = local_1c + -iVar11;
      do {
        if (iVar2 < iVar11) {
          (&local_24)[iVar2] = 0;
        }
        else {
          (&local_24)[iVar2] = *puVar6;
        }
        iVar2 = iVar2 + -1;
        puVar6 = puVar6 + -1;
      } while (-1 < iVar2);
    }
    iVar11 = 0;
    IVar3 = INTRNCVT_UNDERFLOW;
  }
LAB_0048a02f:
  fVar12 = (float)(iVar11 << (0x1fU - (char)DAT_004adfd4 & 0x1f) |
                   -(uint)(local_1c[1] != 0) & 0x80000000 | local_24);
  if (DAT_004adfd8 == 0x40) {
    _F[1].f = fVar12;
    _F->f = local_20;
  }
  else if (DAT_004adfd8 == 0x20) {
    _F->f = fVar12;
  }
  return IVar3;
}


