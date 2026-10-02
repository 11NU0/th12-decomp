#ifndef TH12_CRT_H
#define TH12_CRT_H

/* The MSVC 9.0 (VS2008) CRT's internal per-thread and locale structures.
 *
 * These are the members the decompilation reaches on every `_ptiddata` and
 * locale unit, and no installed header declares them:
 *
 *   - `struct _tiddata` / `_ptiddata` live in the CRT's private <mtdll.h>.
 *     windows.h, stdio.h and the public <crtdefs.h> never define them, so
 *     `_getptd()->ptlocinfo`, `->_setloc_data`, `->_curexception` and the rest
 *     are all C2039 "is not a member of '_ptiddata'" without this file.
 *
 *   - `setloc_struct` (the `_setloc_data` member) and `LC_STRINGS` live in the
 *     CRT's private <setlocal.h>. `__get_qualified_locale` reads
 *     `_psetloc_data->pchLanguage` and `lpInStr->szLanguage` through them.
 *
 *   - `threadmbcinfostruct` is only a forward declaration in the public
 *     <crtdefs.h>; the full body is private, and the decompilation reads
 *     `mbcodepage`, `ismbcodepage`, `mblcid`, `mbulinfo`, `mbctype` and
 *     `mbcasemap` through it, so it has to be completed here.
 *
 * `threadlocaleinfostruct` itself needs no definition: the public VS2008
 * <crtdefs.h> already provides the complete struct (refcount, lc_codepage,
 * lc_collate_cp, lc_handle[6], lc_id[6], lc_category[6], lc_clike, mb_cur_max,
 * lconv_*_refcount, lconv, ctype1_refcount, ctype1, pctype, pclmap, pcumap,
 * lc_time_curr), which is the msvcr90 layout the decompilation was built
 * against. Defining it again here would be C2371.
 *
 * Field offsets are the ABI's, so pointer arithmetic and the fixed sources'
 * member accesses land on the same bytes the original binary used. The units
 * that read the locale blocks go through `threadlocaleinfostruct` above; the
 * handful that read `->locale_name[N]` are Ghidra's naming for the dword at
 * 0xA0 + 4*N, which is mb_cur_max (0xAC), lconv_intl_refcount (0xB0) and
 * lconv_num_refcount (0xB4) respectively; fix_sources.py rewrites those to the
 * real member names.
 */

#include <windows.h>
#include <crtdefs.h>

/* MSVC's own <crtdefs.h> forward-declares threadmbcinfostruct and guards the
 * full definition behind _THREADMBCINFO. Guard the same way so this file can
 * coexist with whichever CRT headers the translation unit happens to pull in. */
#ifndef _THREADMBCINFO
#define _THREADMBCINFO
struct threadmbcinfostruct {
    int refcount;
    int mbcodepage;
    int ismbcodepage;
    int mblcid;
    unsigned short mbulinfo[6];
    unsigned char mbctype[257];
    unsigned char mbcasemap[256];
};
typedef struct threadmbcinfostruct threadmbcinfo;
#endif /* _THREADMBCINFO */

/* VC2008's <time.h> only spells the calendar type as `struct tm` - it defines
 * `_TM_DEFINED` for the struct but never typedefs the bare name, which only
 * C++'s <ctime> does. Ghidra used the bare name, and these units are C, so the
 * typedef is unconditional here; <time.h> still supplies the full layout. */
typedef struct tm tm;

/* mtdll.h: the setlocale() scratch state, reached as _tiddata::_setloc_data. */
#ifndef _SETLOC_STRUCT_DEFINED
struct _is_ctype_compatible {
    unsigned long id;
    int is_clike;
};

typedef struct setloc_struct {
    /* getqloc static variables */
    char *pchLanguage;
    char *pchCountry;
    int iLcidState;
    int iPrimaryLen;
    BOOL bAbbrevLanguage;
    BOOL bAbbrevCountry;
    LCID lcidLanguage;
    LCID lcidCountry;
    /* expand_locale static variables */
    LC_ID _cacheid;
    UINT _cachecp;
    char _cachein[131];            /* MAX_LC_LEN */
    char _cacheout[131];           /* MAX_LC_LEN */
    /* _setlocale_set_cat (LC_CTYPE) static variable */
    struct _is_ctype_compatible _Lcid_c[5];
} _setloc_struct, *_psetloc_struct;
#define _SETLOC_STRUCT_DEFINED
#endif /* _SETLOC_STRUCT_DEFINED */

/* mtdll.h: the per-thread CRT data block. _getptd()/_getptd_noexit() return
 * this, and the whole C++ exception-handling and locale code reads it by
 * member, so the layout has to be the CRT's, not a placeholder. */
#ifndef _PTIDDATA_HAND_DEFINED
#define _PTIDDATA_HAND_DEFINED
struct _tiddata {
    unsigned long   _tid;           /* thread ID */
    uintptr_t _thandle;             /* thread handle */

    int     _terrno;                /* errno value */
    unsigned long   _tdoserrno;     /* _doserrno value */
    unsigned int    _fpds;          /* Floating Point data segment */
    unsigned long   _holdrand;      /* rand() seed value */
    char *      _token;             /* ptr to strtok() token */
    wchar_t *   _wtoken;            /* ptr to wcstok() token */
    unsigned char * _mtoken;        /* ptr to _mbstok() token */

    /* following pointers get malloc'd at runtime */
    char *      _errmsg;            /* ptr to strerror()/_strerror() buff */
    wchar_t *   _werrmsg;           /* ptr to _wcserror()/__wcserror() buff */
    char *      _namebuf0;          /* ptr to tmpnam() buffer */
    wchar_t *   _wnamebuf0;         /* ptr to _wtmpnam() buffer */
    char *      _namebuf1;          /* ptr to tmpfile() buffer */
    wchar_t *   _wnamebuf1;         /* ptr to _wtmpfile() buffer */
    char *      _asctimebuf;        /* ptr to asctime() buffer */
    wchar_t *   _wasctimebuf;       /* ptr to wasctime() buffer */
    void *      _gmtimebuf;         /* ptr to gmtime() structure */
    char *      _cvtbuf;            /* ptr to ecvt()/fcvt buffer */
    unsigned char _con_ch_buf[MB_LEN_MAX];
                                /* ptr to putch() buffer */
    unsigned short _ch_buf_used;   /* if the _con_ch_buf is used */

    /* following fields are needed by _beginthread code */
    void *      _initaddr;          /* initial user thread address */
    void *      _initarg;           /* initial user thread argument */

    /* following three fields are needed to support signal handling and
     * runtime errors */
    void *      _pxcptacttab;       /* ptr to exception-action table */
    void *      _tpxcptinfoptrs;    /* ptr to exception info pointers */
    int         _tfpecode;          /* float point exception code */

    /* pointer to the copy of the multibyte character information used by
     * the thread */
    pthreadmbcinfo  ptmbcinfo;

    /* pointer to the copy of the locale informaton used by the thead */
    pthreadlocinfo  ptlocinfo;
    int         _ownlocale;     /* if 1, this thread owns its own locale */

    /* following field is needed by NLG routines */
    unsigned long   _NLG_dwCode;

    /*
     * Per-Thread data needed by C++ Exception Handling
     */
    void *      _terminate;     /* terminate() routine */
    void *      _unexpected;    /* unexpected() routine */
    void *      _translator;    /* S.E. translator */
    void *      _purecall;      /* called when pure virtual happens */
    void *      _curexception;  /* current exception */
    void *      _curcontext;    /* current exception context */
    int         _ProcessingThrow; /* for uncaught_exception */
    void *              _curexcspec;    /* for handling exceptions thrown from std::unexpected */
#if defined(_M_IX86)
    void *      _pFrameInfoChain;
#elif defined(_M_IA64) || defined(_M_AMD64)
    void *      _pExitContext;
    void *      _pUnwindContext;
    void *      _pFrameInfoChain;
    unsigned __int64    _ImageBase;
#if defined(_M_IA64)
    unsigned __int64    _TargetGp;
#endif  /* defined(_M_IA64) */
    unsigned __int64    _ThrowImageBase;
    void *      _pForeignException;
#endif
    _setloc_struct _setloc_data;

#if defined(_M_IX86)
    void *      _encode_ptr;    /* EncodePointer() routine */
    void *      _decode_ptr;    /* DecodePointer() routine */
#endif  /* defined(_M_IX86) */

    void *      _reserved1;     /* nothing */
    void *      _reserved2;     /* nothing */
    void *      _reserved3;     /* nothing */

    int _cxxReThrow;        /* Set to True if it's a rethrown C++ Exception */

    unsigned long __initDomain;     /* initial domain used by _beginthread[ex] for managed function */
};

typedef struct _tiddata * _ptiddata;
#endif /* _PTIDDATA_HAND_DEFINED */

/* setlocal.h: the language/country buffers __get_qualified_locale fills in and
 * reads (lpInStr->szLanguage, lpOutStr->szCountry). */
typedef struct tagLC_STRINGS {
    char szLanguage[64];             /* MAX_LANG_LEN */
    char szCountry[64];              /* MAX_CTRY_LEN */
    char szCodePage[16];             /* MAX_CP_LEN */
} LC_STRINGS, *LPLC_STRINGS;

/* The CRT's private float-string scratch structures. `strtod`/`printf` fill
 * one in and read it back, so the members are read and written by name and a
 * forward declaration alone is C2039 on every field.
 *
 * Neither has a public definition, so the layouts below were read straight out
 * of the shipped code rather than assumed, by checking every store and load in
 * the original binary:
 *
 *   __fltin2  (004757B7), esi = FLT *:
 *       [esi+0x00] <- flags          [esi+0x04] <- nbytes
 *       [esi+0x10] <- dval.lo        [esi+0x14] <- dval.hi
 *   => flags 0x00, nbytes 0x04, dval 0x10 (the double's natural alignment).
 *
 *   __fltout2 (0048E03C), ebx = STRFLT *:
 *       [ebx+0x00] <- sign   [ebx+0x04] <- decpt
 *       [ebx+0x08] <- flags  [ebx+0x0C] <- mantissa
 *   __fptostr (0048DEC0): mov edi,[ecx+0Ch] (mantissa), inc dword ptr [ecx+4]
 *       (decpt)   - so decpt really is a full dword at 0x04, and sign is
 *       compared as a dword in __cftof_l (0048A9D4: cmp dword ptr [ebp-2Ch],2Dh).
 *   __cftof_l sizes its stack copy at 0x10 bytes, matching sign@0, decpt@4,
 *       flags@8, mantissa@0xC.
 */
struct FLT {
    int   flags;                  /* 0x00 - INTRNCVT_OVERFLOW/UNDERFLOW bits */
    int   nbytes;                 /* 0x04 - characters consumed */
    /* 0x08 - padding to the double's 8-byte alignment */
    double dval;                  /* 0x10 - the parsed value */
};
typedef struct FLT *FLT;

struct STRFLT {
    int   sign;                   /* 0x00 - '-' when negative */
    int   decpt;                  /* 0x04 - decimal point position */
    int   flags;                  /* 0x08 */
    char *mantissa;               /* 0x0C - digit string */
    char *exp;                    /* 0x10 - exponent string */
};
typedef struct STRFLT *STRFLT;

/* The same two structures by value, which is how the conversion routines
 * declare them as locals (`_flt local_2c;`, `_strflt local_30;`) before taking
 * the address to pass to __fltin2/__fltout2. Ghidra kept the two spellings
 * apart, so both names are needed, but they are the same types and must have
 * the same layout - `__atof_l` loads the result with `fld qword ptr [eax+10h]`.
 */
typedef struct FLT _flt;
typedef struct STRFLT _strflt;

/* strtod's status enum. It is a 1-byte struct in the generated header, and the
 * constants are private to the CRT, so the corpus cannot name them. The values
 * are read off __fltin2 (004757B7): the conversion result is compared against 1
 * for overflow (0047581B) and 2 for underflow (0047582B), with 0 the success
 * case, and the flags it builds are 0x80/0x100/0x200 respectively.
 */
enum {
    INTRNCVT_OK = 0,
    INTRNCVT_OVERFLOW = 1,
    INTRNCVT_UNDERFLOW = 2
};

#endif /* TH12_CRT_H */
