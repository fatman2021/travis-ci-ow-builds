/*
 *  oleauto.h   OLE automation functions
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2004-2017 The Open Watcom Contributors. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */

#ifndef _OLEAUTO_H_
#define _OLEAUTO_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <oaidl.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Macros to specify OLE automation functions */
#define WINOLEAUTAPI        EXTERN_C DECLSPEC_IMPORT HRESULT STDAPICALLTYPE
#define WINOLEAUTAPI_( x )  EXTERN_C DECLSPEC_IMPORT x STDAPICALLTYPE

/* Version numbers for STDOLE.TLB */
#define STDOLE_MAJORVERNUM  1
#define STDOLE_MINORVERNUM  0
#define STDOLE_LCID         0x0000

/* Version numbers for STDOLE2.TLB */
#define STDOLE2_MAJORVERNUM 2
#define STDOLE2_MINORVERNUM 0
#define STDOLE2_LCID        0x0000

/* VariantChangeType() flags */
#define VARIANT_NOVALUEPROP         0x0001
#define VARIANT_ALPHABOOL           0x0002
#define VARIANT_NOUSEROVERRIDE      0x0004
#define VARIANT_CALENDAR_HIJRI      0x0008
#define VARIANT_LOCALBOOL           0x0010
#define VARIANT_CALENDAR_THAI       0x0020
#define VARIANT_CALENDAR_GREGORIAN  0x0040
#define VARIANT_USE_NLS             0x0080

/* Variant date conversion flags */
#define VAR_TIMEVALUEONLY       0x00000001L
#define VAR_DATEVALUEONLY       0x00000002L
#define VAR_VALIDDATE           0x00000004L
#define VAR_CALENDAR_HIJRI      0x00000008L
#define VAR_LOCALBOOL           0x00000010L
#define VAR_FORMAT_SUBSTITUTE   0x00000020L
#define VAR_FOURDIGITYEARS      0x00000040L
#define VAR_CALENDAR_THAI       0x00000080L
#define VAR_CALENDAR_GREGORIAN  0x00000100L

/* Minimum and maximum date values */
#define VTDATEGRE_MAX   2958465
#define VTDATEGRE_MIN   (-657434)

/* Number parsing flags */
#define NUMPRS_LEADING_WHITE    0x00000001L
#define NUMPRS_TRAILING_WHITE   0x00000002L
#define NUMPRS_LEADING_PLUS     0x00000004L
#define NUMPRS_TRAILING_PLUS    0x00000008L
#define NUMPRS_LEADING_MINUS    0x00000010L
#define NUMPRS_TRAILING_MINUS   0x00000020L
#define NUMPRS_HEX_OCT          0x00000040L
#define NUMPRS_PARENS           0x00000080L
#define NUMPRS_DECIMAL          0x00000100L
#define NUMPRS_THOUSANDS        0x00000200L
#define NUMPRS_CURRENCY         0x00000400L
#define NUMPRS_EXPONENT         0x00000800L
#define NUMPRS_USE_ALL          0x00001000L
#define NUMPRS_STD              0x00001FFFL
#define NUMPRS_NEG              0x00010000L
#define NUMPRS_INEXACT          0x00020000L

/* VarNumFromParseNum() flags */
#define VTBIT_I1        (1 << VT_I1)
#define VTBIT_UI1       (1 << VT_UI1)
#define VTBIT_I2        (1 << VT_I2)
#define VTBIT_UI2       (1 << VT_UI2)
#define VTBIT_I4        (1 << VT_I4)
#define VTBIT_UI4       (1 << VT_UI4)
#define VTBIT_I8        (1 << VT_I8)
#define VTBIT_UI8       (1 << VT_UI8)
#define VTBIT_R4        (1 << VT_R4)
#define VTBIT_R8        (1 << VT_R8)
#define VTBIT_CY        (1 << VT_CY)
#define VTBIT_DECIMAL   (1 << VT_DECIMAL)

/* Comparison return values */
#define VARCMP_LT   0
#define VARCMP_EQ   1
#define VARCMP_GT   2
#define VARCMP_NULL 3

/* Variant type special value */
#define VT_HARDTYPE VT_RESERVED

/* Member identifier special value */
#define MEMBERID_NIL    DISPID_UNKNOWN

/* IDispatch::Invoke() flags */
#define DISPATCH_METHOD         0x00000001L
#define DISPATCH_PROPERTYGET    0x00000002L
#define DISPATCH_PROPERTYPUT    0x00000004L
#define DISPATCH_PROPERTYPUTREF 0x00000008L

/* LoadTypeLibEx() flags */
#define LOAD_TLB_AS_32BIT   0x00000020
#define LOAD_TLB_AS_64BIT   0x00000040

/* RegisterActiveObject() flags */
#define ACTIVEOBJECT_STRONG 0x00000000L
#define ACTIVEOBJECT_WEAK   0x00000001L

/* Variant access macros */
#ifdef NONAMELESSUNION
    #define V_UNION( x, p )     ((x)->n1.n2.n3.p)
    #define V_VT( x )           ((x)->n1.n2.vt)
    #define V_RECORDINFO( x )   ((x)->n1.n2.n3.brecVal.pRecInfo)
    #define V_RECORD( x )       ((x)->n1.n2.n3.brecVal.pvRecord)
#else
    #define V_UNION( x, p )     ((x)->p)
    #define V_VT( x )           ((x)->vt)
    #define V_RECORDINFO( x )   ((x)->pRecInfo)
    #define V_RECORD( x )       ((x)->pvRecord)
#endif
#define V_UI1( x )              V_UNION( x, bVal )
#define V_UI1REF( x )           V_UNION( x, pbVal )
#define V_I2( x )               V_UNION( x, iVal )
#define V_I2REF( x )            V_UNION( x, piVal )
#define V_I4( x )               V_UNION( x, lVal )
#define V_I4REF( x )            V_UNION( x, plVal )
#define V_I8( x )               V_UNION( x, llVal )
#define V_I8REF( x )            V_UNION( x, pllVal )
#define V_R4( x )               V_UNION( x, fltVal )
#define V_R4REF( x )            V_UNION( x, pfltVal )
#define V_R8( x )               V_UNION( x, dblVal )
#define V_R8REF( x )            V_UNION( x, pdblVal )
#define V_I1( x )               V_UNION( x, cVal )
#define V_I1REF( x )            V_UNION( x, pcVal )
#define V_UI2( x )              V_UNION( x, uiVal )
#define V_UI2REF( x )           V_UNION( x, puiVal )
#define V_UI4( x )              V_UNION( x, ulVal )
#define V_UI4REF( x )           V_UNION( x, pulVal )
#define V_UI8( x )              V_UNION( x, ullVal )
#define V_UI8REF( x )           V_UNION( x, pullVal )
#define V_INT( x )              V_UNION( x, intVal )
#define V_INTREF( x )           V_UNION( x, pintVal )
#define V_UINT( x )             V_UNION( x, uintVal )
#define V_UINTREF( x )          V_UNION( x, puintVal )
#define V_INT_PTR( x )          V_UNION( x, lVal )
#define V_UINT_PTR( x )         V_UNION( x, ulVal )
#define V_INT_PTRREF( x )       V_UNION( x, plVal )
#define V_UINT_PTRREF( x )      V_UNION( x, pulVal )
#define V_CY( x )               V_UNION( x, cyVal )
#define V_CYREF( x )            V_UNION( x, pcyVal )
#define V_DATE( x )             V_UNION( x, date )
#define V_DATEREF( x )          V_UNION( x, pdate )
#define V_BSTR( x )             V_UNION( x, bstrVal )
#define V_BSTRREF( x )          V_UNION( x, pbstrVal )
#define V_DISPATCH( x )         V_UNION( x, pdispVal )
#define V_DISPATCHREF( x )      V_UNION( x, ppdispVal )
#define V_ERROR( x )            V_UNION( x, scode )
#define V_ERRORREF( x )         V_UNION( x, pscode )
#define V_BOOL( x )             V_UNION( x, boolVal )
#define V_BOOLREF( x )          V_UNION( x, pboolVal )
#define V_UNKNOWN( x )          V_UNION( x, punkVal )
#define V_UNKNOWNREF( x )       V_UNION( x, ppunkVal )
#define V_VARIANTREF( x )       V_UNION( x, pvarVal )
#define V_ARRAY( x )            V_UNION( x, parray )
#define V_ARRAYREF( x )         V_UNION( x, pparray )
#define V_BYREF( x )            V_UNION( x, byref )
#define V_DECIMAL( x )          V_UNION( x, decVal )
#define V_DECIMALREF( x )       V_UNION( x, pdecVal )
#define V_ISBYREF( x )          (V_VT( x ) & VT_BYREF)
#define V_ISARRAY( x )          (V_VT( x ) & VT_ARRAY)
#define V_ISVECTOR( x )         (V_VT( x ) & VT_VECTOR)
#define V_NONE( x )             V_I2( x )

/* Number parsing information */
typedef struct {
    INT     cDig;
    ULONG   dwInFlags;
    ULONG   dwOutFlags;
    INT     cchUsed;
    INT     nBaseShif;
    INT     nPwr10;
} NUMPARSE;

/* Unpacked date */
typedef struct {
    SYSTEMTIME  st;
    USHORT      wDayOfYear;
} UDATE;

/* Registration kinds */
typedef enum tagREGKIND {
    REGKIND_DEFAULT     = 0,
    REGKIND_REGISTER    = 1,
    REGKIND_NONE        = 2
} REGKIND;

/* Parameter data */
typedef struct tagPARAMDATA {
    OLECHAR *szName;
    VARTYPE vt;
} PARAMDATA;
typedef PARAMDATA   *LPPARAMDATA;

/* Method data */
typedef struct tagMETHODDATA {
    OLECHAR     *szName;
    PARAMDATA   *ppdata;
    DISPID      dispid;
    UINT        iMeth;
    CALLCONV    cc;
    UINT        cArgs;
    WORD        wFlags;
    VARTYPE     vtReturn;
} METHODDATA;
typedef METHODDATA  *LPMETHODDATA;

/* Interface data */
typedef struct tagINTERFACEDATA {
    METHODDATA  *pmethdata;
    UINT        cMembers;
} INTERFACEDATA;
typedef INTERFACEDATA   *LPINTERFACEDATA;

/* Functions in OLEAUT32.DLL */
WINOLEAUTAPI                    BstrFromVector( SAFEARRAY *, BSTR * );
WINOLEAUTAPI_( void )           ClearCustData( LPCUSTDATA );
WINOLEAUTAPI                    CreateDispTypeInfo( INTERFACEDATA *, LCID, ITypeInfo ** );
WINOLEAUTAPI                    CreateErrorInfo( ICreateErrorInfo ** );
WINOLEAUTAPI                    CreateStdDispatch( IUnknown *, void *, ITypeInfo *, IUnknown ** );
WINOLEAUTAPI                    CreateTypeLib( SYSKIND, LPCOLESTR, ICreateTypeLib ** );
WINOLEAUTAPI                    CreateTypeLib2( SYSKIND, LPCOLESTR, ICreateTypeLib2 ** );
WINOLEAUTAPI                    DispCallFunc( void *, ULONG_PTR, CALLCONV, VARTYPE, UINT, VARTYPE *, VARIANTARG **, VARIANT * );
WINOLEAUTAPI                    DispGetIDsOfNames( ITypeInfo *, OLECHAR **, UINT, DISPID * );
WINOLEAUTAPI                    DispGetParam( DISPPARAMS *, UINT, VARTYPE, VARIANT *, UINT * );
WINOLEAUTAPI                    DispInvoke( void *, ITypeInfo *, DISPID, WORD, DISPPARAMS *, VARIANT *, EXCEPINFO *, UINT * );
WINOLEAUTAPI_( INT )            DosDateTimeToVariantTime( USHORT, USHORT, DOUBLE * );
WINOLEAUTAPI                    GetActiveObject( REFCLSID, void *, IUnknown ** );
WINOLEAUTAPI                    GetAltMonthNames( LCID, LPOLESTR ** );
WINOLEAUTAPI                    GetErrorInfo( ULONG, IErrorInfo ** );
WINOLEAUTAPI                    GetRecordInfoFromGuids( REFGUID, ULONG, ULONG, LCID, REFGUID, IRecordInfo ** );
WINOLEAUTAPI                    GetRecordInfoFromTypeInfo( ITypeInfo *, IRecordInfo ** );
WINOLEAUTAPI_( ULONG )          LHashValOfNameSys( SYSKIND, LCID, const OLECHAR * );
WINOLEAUTAPI_( ULONG )          LHashValOfNameSysA( SYSKIND, LCID, LPCSTR );
WINOLEAUTAPI                    LoadRegTypeLib( REFGUID, WORD, WORD, LCID, ITypeLib ** );
WINOLEAUTAPI                    LoadTypeLib( LPCOLESTR, ITypeLib ** );
WINOLEAUTAPI                    LoadTypeLibEx( LPCOLESTR, REGKIND, ITypeLib ** );
WINOLEAUTAPI_( ULONG )          OaBuildVersion( void );
WINOLEAUTAPI                    QueryPathOfRegTypeLib( REFGUID, USHORT, USHORT, LCID, LPBSTR );
WINOLEAUTAPI                    RegisterActiveObject( IUnknown *, REFCLSID, DWORD, DWORD * );
WINOLEAUTAPI                    RegisterTypeLib( ITypeLib *, LPCOLESTR, LPCOLESTR );
WINOLEAUTAPI                    RegisterTypeLibForUser( ITypeLib *, OLECHAR *, OLECHAR * );
WINOLEAUTAPI                    RevokeActiveObject( DWORD, void * );
WINOLEAUTAPI                    SafeArrayAccessData( SAFEARRAY *, void ** );
WINOLEAUTAPI                    SafeArrayAllocData( SAFEARRAY * );
WINOLEAUTAPI                    SafeArrayAllocDescriptor( UINT, SAFEARRAY ** );
WINOLEAUTAPI                    SafeArrayAllocDescriptorEx( VARTYPE, UINT, SAFEARRAY ** );
WINOLEAUTAPI                    SafeArrayCopy( SAFEARRAY *, SAFEARRAY ** );
WINOLEAUTAPI                    SafeArrayCopyData( SAFEARRAY *, SAFEARRAY * );
WINOLEAUTAPI_( SAFEARRAY * )    SafeArrayCreate( VARTYPE, UINT, SAFEARRAYBOUND * );
WINOLEAUTAPI_( SAFEARRAY * )    SafeArrayCreateEx( VARTYPE, UINT, SAFEARRAYBOUND *, PVOID );
WINOLEAUTAPI_( SAFEARRAY * )    SafeArrayCreateVector( VARTYPE, LONG, ULONG );
WINOLEAUTAPI_( SAFEARRAY * )    SafeArrayCreateVectorEx( VARTYPE, LONG, ULONG, PVOID );
WINOLEAUTAPI                    SafeArrayDestroy( SAFEARRAY * );
WINOLEAUTAPI                    SafeArrayDestroyData( SAFEARRAY * );
WINOLEAUTAPI                    SafeArrayDestroyDescriptor( SAFEARRAY * );
WINOLEAUTAPI_( UINT )           SafeArrayGetDim( SAFEARRAY * );
WINOLEAUTAPI                    SafeArrayGetElement( SAFEARRAY *, LONG *, void * );
WINOLEAUTAPI_( UINT )           SafeArrayGetElemsize( SAFEARRAY * );
WINOLEAUTAPI                    SafeArrayGetIID( SAFEARRAY *, GUID * );
WINOLEAUTAPI                    SafeArrayGetLBound( SAFEARRAY *, UINT, LONG * );
WINOLEAUTAPI                    SafeArrayGetRecordInfo( SAFEARRAY *, IRecordInfo ** );
WINOLEAUTAPI                    SafeArrayGetUBound( SAFEARRAY *, UINT, LONG * );
WINOLEAUTAPI                    SafeArrayGetVartype( SAFEARRAY *, VARTYPE * );
WINOLEAUTAPI                    SafeArrayLock( SAFEARRAY * );
WINOLEAUTAPI                    SafeArrayPtrOfIndex( SAFEARRAY *, LONG *, void ** );
WINOLEAUTAPI                    SafeArrayPutElement( SAFEARRAY *, LONG *, void * );
WINOLEAUTAPI                    SafeArrayRedim( SAFEARRAY *, SAFEARRAYBOUND * );
WINOLEAUTAPI                    SafeArraySetIID( SAFEARRAY *, REFGUID );
WINOLEAUTAPI                    SafeArraySetRecordInfo( SAFEARRAY *, IRecordInfo * );
WINOLEAUTAPI                    SafeArrayUnaccessData( SAFEARRAY * );
WINOLEAUTAPI                    SafeArrayUnlock( SAFEARRAY * );
WINOLEAUTAPI                    SetErrorInfo( ULONG, IErrorInfo * );
WINOLEAUTAPI_( BSTR )           SysAllocString( const OLECHAR * );
WINOLEAUTAPI_( BSTR )           SysAllocStringByteLen( LPCSTR, UINT );
WINOLEAUTAPI_( BSTR )           SysAllocStringLen( const OLECHAR *, UINT );
WINOLEAUTAPI_( void )           SysFreeString( BSTR );
WINOLEAUTAPI_( INT )            SysReAllocString( BSTR *, const OLECHAR * );
WINOLEAUTAPI_( INT )            SysReAllocStringLen( BSTR *, const OLECHAR *, unsigned int );
WINOLEAUTAPI_( UINT )           SysStringByteLen( BSTR );
WINOLEAUTAPI_( UINT )           SysStringLen( BSTR );
WINOLEAUTAPI_( INT )            SystemTimeToVariantTime( LPSYSTEMTIME, DOUBLE * );
WINOLEAUTAPI                    UnRegisterTypeLib( REFGUID, WORD, WORD, LCID, SYSKIND );
WINOLEAUTAPI                    UnRegisterTypeLibForUser( REFGUID, WORD, WORD, LCID, SYSKIND );
WINOLEAUTAPI                    VarAbs( LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarAdd( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarAnd( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarBoolFromCy( CY, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromDate( DATE, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromDec( const DECIMAL *, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromDisp( IDispatch *, LCID, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromI1( CHAR, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromI2( SHORT, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromI4( LONG, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromI8( LONG64, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromR4( FLOAT, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromR8( DOUBLE, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromStr( LPCOLESTR, LCID, ULONG, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromUI1( BYTE, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromUI2( USHORT, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromUI4( ULONG, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBoolFromUI8( ULONG64, VARIANT_BOOL * );
WINOLEAUTAPI                    VarBstrCat( BSTR, BSTR, LPBSTR );
WINOLEAUTAPI                    VarBstrCmp( BSTR, BSTR, LCID, ULONG );
WINOLEAUTAPI                    VarBstrFromBool( VARIANT_BOOL, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromCy( CY, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromDate( DATE, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromDec( const DECIMAL *, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromDisp( IDispatch *, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromI1( CHAR, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromI2( SHORT, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromI4( LONG, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromI8( LONG64, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromR4( FLOAT, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromR8( DOUBLE, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromUI1( BYTE, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromUI2( USHORT, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromUI4( ULONG, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarBstrFromUI8( ULONG64, LCID, ULONG, BSTR * );
WINOLEAUTAPI                    VarCat( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarCmp( LPVARIANT, LPVARIANT, LCID, ULONG );
WINOLEAUTAPI                    VarCyAbs( CY, LPCY );
WINOLEAUTAPI                    VarCyAdd( CY, CY, LPCY );
WINOLEAUTAPI                    VarCyCmp( CY, CY );
WINOLEAUTAPI                    VarCyCmpR8( CY, double );
WINOLEAUTAPI                    VarCyFix( CY, LPCY );
WINOLEAUTAPI                    VarCyFromBool( VARIANT_BOOL, CY * );
WINOLEAUTAPI                    VarCyFromDate( DATE, CY * );
WINOLEAUTAPI                    VarCyFromDec( const DECIMAL *, CY * );
WINOLEAUTAPI                    VarCyFromDisp( IDispatch *, LCID, CY * );
WINOLEAUTAPI                    VarCyFromI1( CHAR, CY * );
WINOLEAUTAPI                    VarCyFromI2( SHORT, CY * );
WINOLEAUTAPI                    VarCyFromI4( LONG, CY * );
WINOLEAUTAPI                    VarCyFromI8( LONG64, CY * );
WINOLEAUTAPI                    VarCyFromR4( FLOAT, CY * );
WINOLEAUTAPI                    VarCyFromR8( DOUBLE, CY * );
WINOLEAUTAPI                    VarCyFromStr( LPCOLESTR, LCID, ULONG, CY * );
WINOLEAUTAPI                    VarCyFromUI1( BYTE, CY * );
WINOLEAUTAPI                    VarCyFromUI2( USHORT, CY * );
WINOLEAUTAPI                    VarCyFromUI4( ULONG, CY * );
WINOLEAUTAPI                    VarCyFromUI8( ULONG64, CY * );
WINOLEAUTAPI                    VarCyInt( CY, LPCY );
WINOLEAUTAPI                    VarCyMul( CY, CY, LPCY );
WINOLEAUTAPI                    VarCyMulI4( CY, long, LPCY );
WINOLEAUTAPI                    VarCyMulI8( CY, LONG64, LPCY );
WINOLEAUTAPI                    VarCyNeg( CY, LPCY );
WINOLEAUTAPI                    VarCyRound( CY, int, LPCY );
WINOLEAUTAPI                    VarCySub( CY, CY, LPCY );
WINOLEAUTAPI                    VarDateFromBool( VARIANT_BOOL, DATE * );
WINOLEAUTAPI                    VarDateFromCy( CY, DATE * );
WINOLEAUTAPI                    VarDateFromDec( const DECIMAL *, DATE * );
WINOLEAUTAPI                    VarDateFromDisp( IDispatch *, LCID, DATE * );
WINOLEAUTAPI                    VarDateFromI1( CHAR, DATE * );
WINOLEAUTAPI                    VarDateFromI2( SHORT, DATE * );
WINOLEAUTAPI                    VarDateFromI4( LONG, DATE * );
WINOLEAUTAPI                    VarDateFromI8( LONG64, DATE * );
WINOLEAUTAPI                    VarDateFromR4( FLOAT, DATE * );
WINOLEAUTAPI                    VarDateFromR8( DOUBLE, DATE * );
WINOLEAUTAPI                    VarDateFromStr( LPCOLESTR, LCID, ULONG, DATE * );
WINOLEAUTAPI                    VarDateFromUI1( BYTE, DATE * );
WINOLEAUTAPI                    VarDateFromUI2( USHORT, DATE * );
WINOLEAUTAPI                    VarDateFromUI4( ULONG, DATE * );
WINOLEAUTAPI                    VarDateFromUI8( ULONG64, DATE * );
WINOLEAUTAPI                    VarDateFromUdate( UDATE *, ULONG, DATE * );
WINOLEAUTAPI                    VarDateFromUdateEx( UDATE *, LCID, ULONG, DATE * );
WINOLEAUTAPI                    VarDecAbs( LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDecAdd( LPDECIMAL, LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDecCmp( LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDecCmpR8( LPDECIMAL, double );
WINOLEAUTAPI                    VarDecDiv( LPDECIMAL, LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDecFix( LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDecFromBool( VARIANT_BOOL, DECIMAL * );
WINOLEAUTAPI                    VarDecFromCy( CY, DECIMAL * );
WINOLEAUTAPI                    VarDecFromDate( DATE, DECIMAL * );
WINOLEAUTAPI                    VarDecFromDisp( IDispatch *, LCID, DECIMAL * );
WINOLEAUTAPI                    VarDecFromI1( CHAR, DECIMAL * );
WINOLEAUTAPI                    VarDecFromI2( SHORT, DECIMAL * );
WINOLEAUTAPI                    VarDecFromI4( LONG, DECIMAL * );
WINOLEAUTAPI                    VarDecFromI8( LONG64, DECIMAL * );
WINOLEAUTAPI                    VarDecFromR4( FLOAT, DECIMAL * );
WINOLEAUTAPI                    VarDecFromR8( DOUBLE, DECIMAL * );
WINOLEAUTAPI                    VarDecFromStr( LPCOLESTR, LCID, ULONG, DECIMAL * );
WINOLEAUTAPI                    VarDecFromUI1( BYTE, DECIMAL * );
WINOLEAUTAPI                    VarDecFromUI2( USHORT, DECIMAL * );
WINOLEAUTAPI                    VarDecFromUI4( ULONG, DECIMAL * );
WINOLEAUTAPI                    VarDecFromUI8( ULONG64, DECIMAL * );
WINOLEAUTAPI                    VarDecInt( LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDecMul( LPDECIMAL, LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDecNeg( LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDecRound( LPDECIMAL, LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDecSub( LPDECIMAL, LPDECIMAL, LPDECIMAL );
WINOLEAUTAPI                    VarDiv( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarEqv( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarFix( LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarFormat( LPVARIANT, LPOLESTR, int, int, ULONG, BSTR * );
WINOLEAUTAPI                    VarFormatCurrency( LPVARIANT, int, int, int, int, ULONG, BSTR * );
WINOLEAUTAPI                    VarFormatDateTime( LPVARIANT, int, ULONG, BSTR * );
WINOLEAUTAPI                    VarFormatFromTokens( LPVARIANT, LPOLESTR, LPBYTE, ULONG, BSTR *, LCID );
WINOLEAUTAPI                    VarFormatNumber( LPVARIANT, int, int, int, int, ULONG, BSTR * );
WINOLEAUTAPI                    VarFormatPercent( LPVARIANT, int, int, int, int, ULONG, BSTR * );
WINOLEAUTAPI                    VarI1FromBool( VARIANT_BOOL, CHAR * );
WINOLEAUTAPI                    VarI1FromCy( CY, CHAR * );
WINOLEAUTAPI                    VarI1FromDate( DATE, CHAR * );
WINOLEAUTAPI                    VarI1FromDec( const DECIMAL *, CHAR * );
WINOLEAUTAPI                    VarI1FromDisp( IDispatch *, LCID, CHAR * );
WINOLEAUTAPI                    VarI1FromI2( SHORT, CHAR * );
WINOLEAUTAPI                    VarI1FromI4( LONG, CHAR * );
WINOLEAUTAPI                    VarI1FromI8( LONG64, CHAR * );
WINOLEAUTAPI                    VarI1FromR4( FLOAT, CHAR * );
WINOLEAUTAPI                    VarI1FromR8( DOUBLE, CHAR * );
WINOLEAUTAPI                    VarI1FromStr( LPCOLESTR, LCID, ULONG, CHAR * );
WINOLEAUTAPI                    VarI1FromUI1( BYTE, CHAR * );
WINOLEAUTAPI                    VarI1FromUI2( USHORT, CHAR * );
WINOLEAUTAPI                    VarI1FromUI4( ULONG, CHAR * );
WINOLEAUTAPI                    VarI1FromUI8( ULONG64, CHAR * );
WINOLEAUTAPI                    VarI2FromBool( VARIANT_BOOL, SHORT * );
WINOLEAUTAPI                    VarI2FromCy( CY, SHORT * );
WINOLEAUTAPI                    VarI2FromDate( DATE, SHORT * );
WINOLEAUTAPI                    VarI2FromDec( const DECIMAL *, SHORT * );
WINOLEAUTAPI                    VarI2FromDisp( IDispatch *, LCID, SHORT * );
WINOLEAUTAPI                    VarI2FromI1( CHAR, SHORT * );
WINOLEAUTAPI                    VarI2FromI4( LONG, SHORT * );
WINOLEAUTAPI                    VarI2FromI8( LONG64, SHORT * );
WINOLEAUTAPI                    VarI2FromR4( FLOAT, SHORT * );
WINOLEAUTAPI                    VarI2FromR8( DOUBLE, SHORT * );
WINOLEAUTAPI                    VarI2FromStr( LPCOLESTR, LCID, ULONG, SHORT * );
WINOLEAUTAPI                    VarI2FromUI1( BYTE, SHORT * );
WINOLEAUTAPI                    VarI2FromUI2( USHORT, SHORT * );
WINOLEAUTAPI                    VarI2FromUI4( ULONG, SHORT * );
WINOLEAUTAPI                    VarI2FromUI8( ULONG64, SHORT * );
WINOLEAUTAPI                    VarI4FromBool( VARIANT_BOOL, LONG * );
WINOLEAUTAPI                    VarI4FromCy( CY, LONG * );
WINOLEAUTAPI                    VarI4FromDate( DATE, LONG * );
WINOLEAUTAPI                    VarI4FromDec( const DECIMAL *, LONG * );
WINOLEAUTAPI                    VarI4FromDisp( IDispatch *, LCID, LONG * );
WINOLEAUTAPI                    VarI4FromI1( CHAR, LONG * );
WINOLEAUTAPI                    VarI4FromI2( SHORT, LONG * );
WINOLEAUTAPI                    VarI4FromI8( LONG64, LONG * );
WINOLEAUTAPI                    VarI4FromInt( INT, LONG * );
WINOLEAUTAPI                    VarI4FromR4( FLOAT, LONG * );
WINOLEAUTAPI                    VarI4FromR8( DOUBLE, LONG * );
WINOLEAUTAPI                    VarI4FromStr( LPCOLESTR, LCID, ULONG, LONG * );
WINOLEAUTAPI                    VarI4FromUI1( BYTE, LONG * );
WINOLEAUTAPI                    VarI4FromUI2( USHORT, LONG * );
WINOLEAUTAPI                    VarI4FromUI4( ULONG, LONG * );
WINOLEAUTAPI                    VarI4FromUI8( ULONG64, LONG * );
WINOLEAUTAPI                    VarI8FromBool( VARIANT_BOOL, LONG64 * );
WINOLEAUTAPI                    VarI8FromCy( CY, LONG64 * );
WINOLEAUTAPI                    VarI8FromDate( DATE, LONG64 * );
WINOLEAUTAPI                    VarI8FromDec( const DECIMAL *, LONG64 * );
WINOLEAUTAPI                    VarI8FromDisp( IDispatch *, LCID, LONG64 * );
WINOLEAUTAPI                    VarI8FromI1( CHAR, LONG64 * );
WINOLEAUTAPI                    VarI8FromI2( SHORT, LONG64 * );
WINOLEAUTAPI                    VarI8FromI4( LONG, LONG64 * );
WINOLEAUTAPI                    VarI8FromInt( INT, LONG64 * );
WINOLEAUTAPI                    VarI8FromR4( FLOAT, LONG64 * );
WINOLEAUTAPI                    VarI8FromR8( DOUBLE, LONG64 * );
WINOLEAUTAPI                    VarI8FromStr( LPCOLESTR, LCID, unsigned long, LONG64 * );
WINOLEAUTAPI                    VarI8FromUI1( BYTE, LONG64 * );
WINOLEAUTAPI                    VarI8FromUI2( USHORT, LONG64 * );
WINOLEAUTAPI                    VarI8FromUI4( ULONG, LONG64 * );
WINOLEAUTAPI                    VarI8FromUI8( ULONG64, LONG64 * );
WINOLEAUTAPI                    VarIdiv( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarImp( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarInt( LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarMod( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarMonthName( int, int, ULONG, BSTR * );
WINOLEAUTAPI                    VarMul( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarNeg( LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarNot( LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarNumFromParseNum( NUMPARSE *, BYTE *, ULONG, VARIANT * );
WINOLEAUTAPI                    VarOr( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarParseNumFromStr( LPCOLESTR, LCID, ULONG, NUMPARSE *, BYTE * );
WINOLEAUTAPI                    VarPow( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarR4CmpR8( float, double );
WINOLEAUTAPI                    VarR4FromBool( VARIANT_BOOL, FLOAT * );
WINOLEAUTAPI                    VarR4FromCy( CY, FLOAT * );
WINOLEAUTAPI                    VarR4FromDate( DATE, FLOAT * );
WINOLEAUTAPI                    VarR4FromDec( const DECIMAL *, FLOAT * );
WINOLEAUTAPI                    VarR4FromDisp( IDispatch *, LCID, FLOAT * );
WINOLEAUTAPI                    VarR4FromI1( CHAR, FLOAT * );
WINOLEAUTAPI                    VarR4FromI2( SHORT, FLOAT * );
WINOLEAUTAPI                    VarR4FromI4( LONG, FLOAT * );
WINOLEAUTAPI                    VarR4FromI8( LONG64, FLOAT * );
WINOLEAUTAPI                    VarR4FromR8( DOUBLE, FLOAT * );
WINOLEAUTAPI                    VarR4FromStr( LPCOLESTR, LCID, ULONG, FLOAT * );
WINOLEAUTAPI                    VarR4FromUI1( BYTE, FLOAT * );
WINOLEAUTAPI                    VarR4FromUI2( USHORT, FLOAT * );
WINOLEAUTAPI                    VarR4FromUI4( ULONG, FLOAT * );
WINOLEAUTAPI                    VarR4FromUI8( ULONG64, FLOAT * );
WINOLEAUTAPI                    VarR8FromBool( VARIANT_BOOL, DOUBLE * );
WINOLEAUTAPI                    VarR8FromCy( CY, DOUBLE * );
WINOLEAUTAPI                    VarR8FromDate( DATE, DOUBLE * );
WINOLEAUTAPI                    VarR8FromDec( const DECIMAL *, DOUBLE * );
WINOLEAUTAPI                    VarR8FromDisp( IDispatch *, LCID, DOUBLE * );
WINOLEAUTAPI                    VarR8FromI1( CHAR, DOUBLE * );
WINOLEAUTAPI                    VarR8FromI2( SHORT, DOUBLE * );
WINOLEAUTAPI                    VarR8FromI4( LONG, DOUBLE * );
WINOLEAUTAPI                    VarR8FromI8( LONG64, DOUBLE * );
WINOLEAUTAPI                    VarR8FromR4( FLOAT, DOUBLE * );
WINOLEAUTAPI                    VarR8FromStr( LPCOLESTR, LCID, ULONG, DOUBLE * );
WINOLEAUTAPI                    VarR8FromUI1( BYTE, DOUBLE * );
WINOLEAUTAPI                    VarR8FromUI2( USHORT, DOUBLE * );
WINOLEAUTAPI                    VarR8FromUI4( ULONG, DOUBLE * );
WINOLEAUTAPI                    VarR8FromUI8( ULONG64, DOUBLE * );
WINOLEAUTAPI                    VarR8Pow( double, double, double * );
WINOLEAUTAPI                    VarR8Round( double, int, double * );
WINOLEAUTAPI                    VarRound( LPVARIANT, int, LPVARIANT );
WINOLEAUTAPI                    VarSub( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VarTokenizeFormatString( LPOLESTR, LPBYTE, int, int, int, LCID, int * );
WINOLEAUTAPI                    VarUI1FromBool( VARIANT_BOOL, BYTE * );
WINOLEAUTAPI                    VarUI1FromCy( CY, BYTE * );
WINOLEAUTAPI                    VarUI1FromDate( DATE, BYTE * );
WINOLEAUTAPI                    VarUI1FromDec( const DECIMAL *, BYTE * );
WINOLEAUTAPI                    VarUI1FromDisp( IDispatch *, LCID, BYTE * );
WINOLEAUTAPI                    VarUI1FromI1( CHAR, BYTE * );
WINOLEAUTAPI                    VarUI1FromI2( SHORT, BYTE * );
WINOLEAUTAPI                    VarUI1FromI4( LONG, BYTE * );
WINOLEAUTAPI                    VarUI1FromI8( LONG64, BYTE * );
WINOLEAUTAPI                    VarUI1FromR4( FLOAT, BYTE * );
WINOLEAUTAPI                    VarUI1FromR8( DOUBLE, BYTE * );
WINOLEAUTAPI                    VarUI1FromStr( LPCOLESTR, LCID, ULONG, BYTE * );
WINOLEAUTAPI                    VarUI1FromUI2( USHORT, BYTE * );
WINOLEAUTAPI                    VarUI1FromUI4( ULONG, BYTE * );
WINOLEAUTAPI                    VarUI1FromUI8( ULONG64, BYTE * );
WINOLEAUTAPI                    VarUI2FromBool( VARIANT_BOOL, USHORT * );
WINOLEAUTAPI                    VarUI2FromCy( CY, USHORT * );
WINOLEAUTAPI                    VarUI2FromDate( DATE, USHORT * );
WINOLEAUTAPI                    VarUI2FromDec( const DECIMAL *, USHORT * );
WINOLEAUTAPI                    VarUI2FromDisp( IDispatch *, LCID, USHORT * );
WINOLEAUTAPI                    VarUI2FromI1( CHAR, USHORT * );
WINOLEAUTAPI                    VarUI2FromI2( SHORT, USHORT * );
WINOLEAUTAPI                    VarUI2FromI4( LONG, USHORT * );
WINOLEAUTAPI                    VarUI2FromI8( LONG64, USHORT * );
WINOLEAUTAPI                    VarUI2FromR4( FLOAT, USHORT * );
WINOLEAUTAPI                    VarUI2FromR8( DOUBLE, USHORT * );
WINOLEAUTAPI                    VarUI2FromStr( LPCOLESTR, LCID, ULONG, USHORT * );
WINOLEAUTAPI                    VarUI2FromUI1( BYTE, USHORT * );
WINOLEAUTAPI                    VarUI2FromUI4( ULONG, USHORT * );
WINOLEAUTAPI                    VarUI2FromUI8( ULONG64, USHORT * );
WINOLEAUTAPI                    VarUI4FromBool( VARIANT_BOOL, ULONG * );
WINOLEAUTAPI                    VarUI4FromCy( CY, ULONG * );
WINOLEAUTAPI                    VarUI4FromDate( DATE, ULONG * );
WINOLEAUTAPI                    VarUI4FromDec( const DECIMAL *, ULONG * );
WINOLEAUTAPI                    VarUI4FromDisp( IDispatch *, LCID, ULONG * );
WINOLEAUTAPI                    VarUI4FromI1( CHAR, ULONG * );
WINOLEAUTAPI                    VarUI4FromI2( SHORT, ULONG * );
WINOLEAUTAPI                    VarUI4FromI4( LONG, ULONG * );
WINOLEAUTAPI                    VarUI4FromI8( LONG64, ULONG * );
WINOLEAUTAPI                    VarUI4FromR4( FLOAT, ULONG * );
WINOLEAUTAPI                    VarUI4FromR8( DOUBLE, ULONG * );
WINOLEAUTAPI                    VarUI4FromStr( LPCOLESTR, LCID, ULONG, ULONG * );
WINOLEAUTAPI                    VarUI4FromUI1( BYTE, ULONG * );
WINOLEAUTAPI                    VarUI4FromUI2( USHORT, ULONG * );
WINOLEAUTAPI                    VarUI4FromUI8( ULONG64, ULONG * );
WINOLEAUTAPI                    VarUI8FromBool( VARIANT_BOOL, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromCy( CY, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromDate( DATE, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromDec( const DECIMAL *, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromDisp( IDispatch *, LCID, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromI1( CHAR, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromI2( SHORT, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromI4( LONG, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromI8( LONG64, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromInt( INT, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromR4( FLOAT, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromR8( DOUBLE, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromStr( LPCOLESTR, LCID, unsigned long, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromUI1( BYTE, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromUI2( USHORT, ULONG64 * );
WINOLEAUTAPI                    VarUI8FromUI4( ULONG, ULONG64 * );
WINOLEAUTAPI                    VarUdateFromDate( DATE, ULONG, UDATE * );
WINOLEAUTAPI                    VarWeekdayName( int, int, int, ULONG, BSTR * );
WINOLEAUTAPI                    VarXor( LPVARIANT, LPVARIANT, LPVARIANT );
WINOLEAUTAPI                    VariantChangeType( VARIANTARG *, const VARIANTARG *, USHORT, VARTYPE );
WINOLEAUTAPI                    VariantChangeTypeEx( VARIANTARG *, const VARIANTARG *, LCID, USHORT, VARTYPE );
WINOLEAUTAPI                    VariantClear( VARIANTARG * );
WINOLEAUTAPI                    VariantCopy( VARIANTARG *, const VARIANTARG * );
WINOLEAUTAPI                    VariantCopyInd( VARIANT *, const VARIANTARG * );
WINOLEAUTAPI_( void )           VariantInit( VARIANTARG * );
WINOLEAUTAPI_( INT )            VariantTimeToDosDateTime( DOUBLE, USHORT *, USHORT * );
WINOLEAUTAPI_( INT )            VariantTimeToSystemTime( DOUBLE, LPSYSTEMTIME );
WINOLEAUTAPI                    VectorFromBstr( BSTR, SAFEARRAY ** );
#if (NTDDI_VERSION >= 0x06000100)
WINOLEAUTAPI_( void )           OaEnablePerUserTLibRegistration( void );
#endif

/* Functions implemented as macros */
#define LHashValOfName( p1, p2 )    LHashValOfNameSys( SYS_WIN32, p1, p2 )
#define IsHashValCompatible( p1, p2 ) \
    (BOOL)(((p1) & 0x00FF0000L) == ((p2) & 0x00FF0000L))
#define VarI4FromI4( p1, p2 )       (*(p2) = (p1))
#define VarI8FromI8( p1, p2 )       (*(p2) = (p1))
#define VarUI4FromUI4( p1, p2 )     (*(p2) = (p1))
#define VarUI8FromUI8( p1, p2 )     (*(p2) = (p1))
#define WHashValOfLHashVal( x )     ((USHORT)((x) & 0x0000FFFFL))

/* Aliases */
#define VarBoolFromInt  VarBoolFromI4
#define VarBoolFromUint VarBoolFromUI4
#define VarBstrFromInt  VarBstrFromI4
#define VarBstrFromUint VarBstrFromUI4
#define VarCyFromInt    VarCyFromI4
#define VarCyFromUint   VarCyFromUI4
#define VarDateFromInt  VarDateFromI4
#define VarDateFromUint VarDateFromUI4
#define VarDecFromInt   VarDecFromI4
#define VarDecFromUint  VarDecFromUI4
#define VarI1FromInt    VarI1FromI4
#define VarI1FromUint   VarI1FromUI4
#define VarI2FromInt    VarI2FromI4
#define VarI2FromUint   VarI2FromUI4
#define VarI4FromInt    VarI4FromI4
#define VarI4FromUint   VarI4FromUI4
#define VarI8FromInt    VarI8FromI4
#define VarI8FromUint   VarI8FromUI4
#define VarIntFromBool  VarI4FromBool
#define VarIntFromCy    VarI4FromCy
#define VarIntFromDate  VarI4FromDate
#define VarIntFromDec   VarI4FromDec
#define VarIntFromDisp  VarI4FromDisp
#define VarIntFromI1    VarI4FromI1
#define VarIntFromI2    VarI4FromI2
#define VarIntFromI4    VarI4FromI4
#define VarIntFromI8    VarI4FromI8
#define VarIntFromR4    VarI4FromR4
#define VarIntFromR8    VarI4FromR8
#define VarIntFromStr   VarI4FromStr
#define VarIntFromUI1   VarI4FromUI1
#define VarIntFromUI2   VarI4FromUI2
#define VarIntFromUI4   VarI4FromUI4
#define VarIntFromUI8   VarI4FromUI8
#define VarIntFromUint  VarI4FromUI4
#define VarR4FromInt    VarR4FromI4
#define VarR4FromUint   VarR4FromUI4
#define VarR8FromInt    VarR8FromI4
#define VarR8FromUint   VarR8FromUI4
#define VarUI1FromInt   VarUI1FromI4
#define VarUI1FromUint  VarUI1FromUI4
#define VarUI2FromInt   VarUI2FromI4
#define VarUI2FromUint  VarUI2FromUI4
#define VarUI4FromInt   VarUI4FromI4
#define VarUI4FromUint  VarUI4FromUI4
#define VarUintFromBool VarUI4FromBool
#define VarUintFromCy   VarUI4FromCy
#define VarUintFromDate VarUI4FromDate
#define VarUintFromDec  VarUI4FromDec
#define VarUintFromDisp VarUI4FromDisp
#define VarUintFromI1   VarUI4FromI1
#define VarUintFromI2   VarUI4FromI2
#define VarUintFromI4   VarUI4FromI4
#define VarUintFromI8   VarUI4FromI8
#define VarUintFromInt  VarUI4FromI4
#define VarUintFromR4   VarUI4FromR4
#define VarUintFromR8   VarUI4FromR8
#define VarUintFromStr  VarUI4FromStr
#define VarUintFromUI1  VarUI4FromUI1
#define VarUintFromUI2  VarUI4FromUI2
#define VarUintFromUI4  VarUI4FromUI4
#define VarUintFromUI8  VarUI4FromUI8

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _OLEAUTO_H_ */
