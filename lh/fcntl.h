/*
 *  fcntl.h     File control options used by open
 *
 * =========================================================================
 *
 *                          Open Watcom Project
 *
 * Copyright (c) 2002-2017 The Open Watcom Contributors. All Rights Reserved.
 * Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
 *
 *    This file is automatically generated. Do not edit directly.
 *
 * =========================================================================
 */
#ifndef _FCNTL_H_INCLUDED
#define _FCNTL_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _SYS_TYPES_H_INCLUDED
 #include <sys/types.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __cplusplus
 #ifndef _WCHAR_T_DEFINED
 #define _WCHAR_T_DEFINED
  #define _WCHAR_T_DEFINED_
  typedef unsigned short wchar_t;
 #endif
#endif

#pragma pack( __push, 4 )

#ifndef _ARCH_DIR
 #ifdef __386__
  #define _ARCH_DIR i386
 #elif defined(__MIPS__)
  #define _ARCH_DIR mips
 #else
  #error unknown platform
  #define _ARCH_DIR
 #endif
 #define _ARCH_INCLUDE(hdr) <arch/ ## _ARCH_DIR ## / ## hdr ## >
#endif /* !_ARCH_DIR */

#include _ARCH_INCLUDE(fcntl.h)

/* For now Linux has synchronicity options for data and read operations.
 * We define the symbols here but let them do the same as O_SYNC since
 * this is a superset.
 */
#if defined(_LINUX_SOURCE) || !defined(NO_EXT_KEYS) /* extensions enabled */
#define O_DSYNC     O_SYNC  /* Synchronize data.  */
#define O_RSYNC     O_SYNC  /* Synchronize read operations.  */
#endif /* extensions enabled */

#define O_TEMP      000000  /*  Temporary file, don't put to disk (QNX thing) */
#define O_TEXT      000000  /*  Text file   (DOS thing)     */
#define O_BINARY    000000  /*  Binary file (DOS thing)     */

/*
 *  POSIX 1003.1 Prototypes.
 */
_WCRTLINK extern int open( const char *__path, int __oflag, ... );
_WCRTLINK extern int sopen( const char *__path, int __oflag, int __share, ... );
_WCRTLINK extern int creat( const char *__path, mode_t __mode );

_WCRTLINK extern int _wopen( const wchar_t *, int, ... );
_WCRTLINK extern int _wsopen( const wchar_t *, int, int, ... );
_WCRTLINK extern int _wcreat( const wchar_t *, int );

_WCRTLINK extern int fcntl( int __fildes, int __cmd, ... );

#pragma pack( __pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
