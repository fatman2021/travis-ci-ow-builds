/*
 *  intshcut.h  Internet shortcut interfaces and functions
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

#ifndef __INTSHCUT_H__
#define __INTSHCUT_H__

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <isguids.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Macro to specify Internet shortcut functions */
#define INTSHCUTAPI DECLSPEC_IMPORT

/* Internet shortcut error codes */
#define E_FLAGS                     MAKE_SCODE( SEVERITY_ERROR, FACILITY_ITF, 0x1000 )
#define URL_E_INVALID_SYNTAX        MAKE_SCODE( SEVERITY_ERROR, FACILITY_ITF, 0x1001 )
#define URL_E_UNREGISTERED_PROTOCOL MAKE_SCODE( SEVERITY_ERROR, FACILITY_ITF, 0x1002 )
#define IS_E_EXEC_FAILED            MAKE_SCODE( SEVERITY_ERROR, FACILITY_ITF, 0x2002 )

/* IUniformResourceLocator::SetURL() flags */
typedef enum iurl_seturl_flags {
    IURL_SETURL_FL_GUESS_PROTOCOL       = 0x00000001,
    IURL_SETURL_FL_SET_DEFAULT_PROTOCOL = 0x00000002
} IURL_SETURL_FLAGS;

/* IUniformResourceLocator::InvokeCommand() flags */
typedef enum iurl_invokecommand_flags {
    IURL_INVOKECOMMAND_FL_ALLOW_UI          = 0x00000001,
    IURL_INVOKECOMMAND_FL_USE_DEFAULT_VERB  = 0x00000002,
    IURL_INVOKECOMMAND_FL_DDEWAIT           = 0x00000004,
    IURL_INVOKECOMMAND_FL_ASYNCOK           = 0x00000008
} IURL_INVOKECOMMAND_FLAGS;

/* IUniformResourceLocator::InvokeCommand() parameters */
typedef struct urlinvokecommandinfoA {
    DWORD   dwcbSize;
    DWORD   dwFlags;
    HWND    hwndParent;
    LPCSTR  pcszVerb;
} URLINVOKECOMMANDINFOA;
typedef URLINVOKECOMMANDINFOA       *PURLINVOKECOMMANDINFOA;
typedef const URLINVOKECOMMANDINFOA CURLINVOKECOMMANDINFOA;
typedef const URLINVOKECOMMANDINFOA *PCURLINVOKECOMMANDINFOA;
typedef struct urlinvokecommandinfoW {
    DWORD   dwcbSize;
    DWORD   dwFlags;
    HWND    hwndParent;
    LPCWSTR pcszVerb;
} URLINVOKECOMMANDINFOW;
typedef URLINVOKECOMMANDINFOW       *PURLINVOKECOMMANDINFOW;
typedef const URLINVOKECOMMANDINFOW CURLINVOKECOMMANDINFOW;
typedef const URLINVOKECOMMANDINFOW *PCURLINVOKECOMMANDINFOW;
#ifdef UNICODE
typedef URLINVOKECOMMANDINFOW       URLINVOKECOMMANDINFO;
typedef PURLINVOKECOMMANDINFOW      PURLINVOKECOMMANDINFO;
typedef CURLINVOKECOMMANDINFOW      CURLINVOKECOMMANDINFO;
typedef PCURLINVOKECOMMANDINFOW     PCURLINVOKECOMMANDINFO;
#else
typedef URLINVOKECOMMANDINFOA       URLINVOKECOMMANDINFO;
typedef PURLINVOKECOMMANDINFOA      PURLINVOKECOMMANDINFO;
typedef CURLINVOKECOMMANDINFOA      CURLINVOKECOMMANDINFO;
typedef PCURLINVOKECOMMANDINFOA     PCURLINVOKECOMMANDINFO;
#endif

/* TranslateURL() flags */
typedef enum translateurl_in_flags {
    TRANSLATEURL_FL_GUESS_PROTOCOL          = 0x00000001,
    TRANSLATEURL_FL_USE_DEFAULT_PROTOCOL    = 0x00000002
} TRANSLATEURL_IN_FLAGS;

/* URLAssociationDialog() flags */
typedef enum urlassociationdialog_in_flags {
    URLASSOCDLG_FL_USE_DEFAULT_NAME = 0x00000001,
    URLASSOCDLG_FL_REGISTER_ASSOC   = 0x00000002
} URLASSOCIATIONDIALOG_IN_FLAGS;

/* MIMEAssociationDialog() flags */
typedef enum mimeassociationdialog_in_flags {
    MIMEASSOCDLG_FL_REGISTER_ASSOC  = 0x00000001
} MIMEASSOCATIONDIALOG_IN_FLAGS;

/* IUniformResourceLocator interface */
#undef INTERFACE
#define INTERFACE   IUniformResourceLocatorA
DECLARE_INTERFACE_( IUniformResourceLocatorA, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;
    
    /* IUniformResourceLocator methods */
    STDMETHOD( SetURL )( THIS_ LPCSTR, DWORD ) PURE;
    STDMETHOD( GetURL )( THIS_ LPSTR * ) PURE;
    STDMETHOD( InvokeCommand )( THIS_ PURLINVOKECOMMANDINFOA ) PURE;
};
#undef INTERFACE
#define INTERFACE   IUniformResourceLocatorW
DECLARE_INTERFACE_( IUniformResourceLocatorW, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, void ** ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IUniformResourceLocator methods */
    STDMETHOD( SetURL )( THIS_ LPCWSTR, DWORD ) PURE;
    STDMETHOD( GetURL )( THIS_ LPWSTR * ) PURE;
    STDMETHOD( InvokeCommand )( THIS_ PURLINVOKECOMMANDINFOW ) PURE;
};
#ifdef UNICODE
    #define IUniformResourceLocator     IUniformResourceLocatorW
    #define IUniformResourceLocatorVtbl IUniformResourceLocatorWVtbl
#else
    #define IUniformResourceLocator     IUniformResourceLocatorA
    #define IUniformResourceLocatorVtbl IUniformResourceLocatorAVtbl
#endif
typedef IUniformResourceLocator         *PIUniformResourceLocator;
typedef const IUniformResourceLocator   CIUniformResourceLocator;
typedef const IUniformResourceLocator   *PCIUniformResourceLocator;

/* Functions in URL.DLL */
INTSHCUTAPI BOOL WINAPI     InetIsOffline( DWORD );
INTSHCUTAPI HRESULT WINAPI  MIMEAssociationDialogA( HWND, DWORD, PCSTR, PCSTR, PSTR, UINT );
INTSHCUTAPI HRESULT WINAPI  MIMEAssociationDialogW( HWND, DWORD, PCWSTR, PCWSTR, PWSTR, UINT );
INTSHCUTAPI HRESULT WINAPI  TranslateURLA( PCSTR, DWORD, PSTR * );
INTSHCUTAPI HRESULT WINAPI  TranslateURLW( PCWSTR, DWORD, PWSTR UNALIGNED * );
INTSHCUTAPI HRESULT WINAPI  URLAssociationDialogA( HWND, DWORD, PCSTR, PCSTR, PSTR, UINT );
INTSHCUTAPI HRESULT WINAPI  URLAssociationDialogW( HWND, DWORD, PCWSTR, PCWSTR, PWSTR, UINT );

/* Map generic function names to the appropriate ANSI or Unicode version. */
#ifdef UNICODE
    #define MIMEAssociationDialog   MIMEAssociationDialogW
    #define TranslateURL            TranslateURLW
    #define URLAssociationDialog    URLAssociationDialogW
#else
    #define MIMEAssociationDialog   MIMEAssociationDialogA
    #define TranslateURL            TranslateURLA
    #define URLAssociationDialog    URLAssociationDialogA
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* __INTSHCUT_H__ */
