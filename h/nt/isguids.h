/*
 *  isguids.h   Internet shortcut GUIDs
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

#ifndef _ISGUIDS_H_
#define _ISGUIDS_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

/* UUIDs */
EXTERN_C const CLSID    __cdecl CLSID_InternetShortcut;
EXTERN_C const IID      __cdecl IID_IUniformResourceLocatorA;
EXTERN_C const IID      __cdecl IID_IUniformResourceLocatorW;
#ifdef UNICODE
    #define IID_IUniformResourceLocator IID_IUniformResourceLocatorW
#else
    #define IID_IUniformResourceLocator IID_IUniformResourceLocatorA
#endif

#endif /* _ISGUIDS_H_ */
