/*
 *  io.h        Low level I/O routines that work with file handles
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
#ifndef _IO_H_INCLUDED
#define _IO_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#if !defined(_SYS__LFNDOS_H_INCLUDED) && defined(__WATCOM_LFN__) && defined(__DOS__)
 #include <sys/_lfndos.h>
#endif

#ifndef _SYS_TYPES_H_INCLUDED
 #include <sys/types.h>
#endif

#ifndef _SYS_STAT_H_INCLUDED
 #include <sys/stat.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef _M_IX86
 #pragma pack( __push, 1 )
#else
 #pragma pack( __push, 8 )
#endif

#ifdef __cplusplus
 #ifndef _STDTIME_T_DEFINED
 #define _STDTIME_T_DEFINED
  namespace std {
    typedef unsigned long time_t;
  }
  typedef std::time_t __w_time_t;
 #endif
 #ifndef _TIME_T_DEFINED
 #define _TIME_T_DEFINED
  #define _TIME_T_DEFINED_
  using std::time_t;
 #endif
#else  /* __cplusplus not defined */
 #ifndef _TIME_T_DEFINED
 #define _TIME_T_DEFINED
  #define _TIME_T_DEFINED_
  typedef unsigned long time_t;
  typedef time_t __w_time_t;
 #endif
#endif /* __cplusplus not defined */

#ifndef __cplusplus
 #ifndef _WCHAR_T_DEFINED
 #define _WCHAR_T_DEFINED
  #define _WCHAR_T_DEFINED_
  typedef unsigned short wchar_t;
 #endif
#endif

#ifndef _MAX_PATH
 #if defined(__OS2__) || defined(__NT__) || defined(__WATCOM_LFN__) && defined(__DOS__) || defined(__OSI__)
  #define _MAX_PATH   260 /* maximum length of full pathname */
 #else
  #define _MAX_PATH   144 /* maximum length of full pathname */
 #endif
#endif

/* Symbolic constants for the access() function */

#define R_OK    4       /*  Test for read permission    */
#define W_OK    2       /*  Test for write permission   */
#define X_OK    1       /*  Test for execute permission */
#define F_OK    0       /*  Test for existence of file  */

#define ACCESS_WR       0x0002
#define ACCESS_RD       0x0004

/* Symbolic constants for the lseek() function */

#define SEEK_SET    0           /* Seek relative to the start of file   */
#define SEEK_CUR    1           /* Seek relative to current position    */
#define SEEK_END    2           /* Seek relative to the end of the file */

/* Symbolic constants for stream I/O */

#define STDIN_FILENO    0
#define STDOUT_FILENO   1
#define STDERR_FILENO   2

#if !defined(NO_EXT_KEYS) /* extensions enabled */
#if ! defined(__NT__)
#define STDAUX_FILENO   3
#define STDPRN_FILENO   4
#endif
#endif /* extensions enabled */

typedef unsigned long   _fsize_t;

struct _finddata_t {
    unsigned    attrib;
    time_t      time_create;
    time_t      time_access;
    time_t      time_write;
    _fsize_t    size;
    char        name[_MAX_PATH];
};

struct _wfinddata_t {
    unsigned    attrib;
    time_t      time_create;
    time_t      time_access;
    time_t      time_write;
    _fsize_t    size;
    wchar_t     name[_MAX_PATH];
};

#ifdef __WATCOM_INT64__
struct _finddatai64_t {
    unsigned    attrib;
    time_t      time_create;
    time_t      time_access;
    time_t      time_write;
    __int64     size;
    char        name[_MAX_PATH];
};

struct _wfinddatai64_t {
    unsigned    attrib;
    time_t      time_create;
    time_t      time_access;
    time_t      time_write;
    __int64     size;
    wchar_t     name[_MAX_PATH];
};
#endif

/* File attribute constants for attrib field */
#define _A_NORMAL       0x00    /* Normal file - read/write permitted */
#define _A_RDONLY       0x01    /* Read-only file */
#define _A_HIDDEN       0x02    /* Hidden file */
#define _A_SYSTEM       0x04    /* System file */
#define _A_SUBDIR       0x10    /* Subdirectory */
#define _A_ARCH         0x20    /* Archive file */


_WCRTLINK extern int  access(const char *__path,int __mode);
_WCRTLINK extern int  _access(const char *__path,int __mode);
_WCRTLINK extern int  chmod(const char *__path,int __pmode);
_WCRTLINK extern int  _chmod(const char *__path,int __pmode);
_WCRTLINK extern int  chsize(int __handle,long __size);
_WCRTLINK extern int  _chsize(int __handle,long __size);
_WCRTLINK extern int  close(int __handle);
_WCRTLINK extern int  _close(int __handle);
_WCRTLINK extern int  _commit(int __handle);
_WCRTLINK extern int  creat(const char *__path,int __pmode);
_WCRTLINK extern int  _creat(const char *__path,int __pmode);
_WCRTLINK extern int  dup(int __handle);
_WCRTLINK extern int  _dup(int __handle);
_WCRTLINK extern int  dup2(int __handle1,int __handle2);
_WCRTLINK extern int  _dup2(int __handle1,int __handle2);
_WCRTLINK extern int  eof(int __handle);
_WCRTLINK extern int  _eof(int __handle);
_WCRTLINK extern long filelength(int __handle);
_WCRTLINK extern long _filelength(int __handle);
_WCRTLINK extern int  fsync( int __filedes );
_WCRTLINK extern long _get_osfhandle( int __posixhandle );
_WCRTLINK extern int  _hdopen(int __handle,int __mode);
_WCRTLINK extern int  isatty(int __handle);
_WCRTLINK extern int  _isatty(int __handle);
_WCRTLINK extern int  lock(int __handle,unsigned long __offset,
                           unsigned long __nbytes);
_WCRTLINK extern off_t lseek(int __handle,off_t __offset,int __origin);
_WCRTLINK extern off_t _lseek(int __handle,off_t __offset,int __origin);
_WCRTLINK extern int  open(const char *__path,int __oflag,...);
_WCRTLINK extern int  _open(const char *__path,int __oflag,...);
_WCRTLINK extern int  _open_osfhandle( long __osfhandle, int __flags );
_WCRTLINK extern int  _os_handle(int __handle);
_WCRTLINK extern int  _pipe( int *__phandles, unsigned __psize, int __textmode );
_WCRTLINK extern int  read(int __handle,void *__buf,unsigned int __len);
_WCRTLINK extern int  _read(int __handle,void *__buf,unsigned int __len);
_WCRTLINK extern int  setmode(int __handle,int __mode);
_WCRTLINK extern int  _setmode(int __handle,int __mode);
_WCRTLINK extern int  sopen(const char *__path,int __oflag,int __shflag,...);
_WCRTLINK extern int  _sopen(const char *__path,int __oflag,int __shflag,...);
_WCRTLINK extern off_t tell(int __handle);
_WCRTLINK extern off_t _tell(int __handle);
_WCRTLINK extern int  umask(int __permission);
_WCRTLINK extern int  _umask(int __permission);
_WCRTLINK extern int  unlink(const char *__path);
_WCRTLINK extern int  _unlink(const char *__path);
_WCRTLINK extern int  unlock(int __handle,unsigned long __offset,
                             unsigned long __nbytes);
_WCRTLINK extern int  write(int __handle,const void *__buf,unsigned int __len);
_WCRTLINK extern int  _write(int __handle,const void *__buf,unsigned int __len);
_WCRTLINK extern int  _waccess(const wchar_t *__path,int __mode);
_WCRTLINK extern int  _wchmod( const wchar_t *__path, int __pmode );
_WCRTLINK extern int  _wunlink(const wchar_t *__path);

_WCRTLINK extern long _findfirst( const char *__filespec,
                                  struct _finddata_t *__fileinfo );
_WCRTLINK extern long _wfindfirst( const wchar_t *__filespec,
                                   struct _wfinddata_t *__fileinfo );
_WCRTLINK extern int  _findnext( long __handle,
                                 struct _finddata_t *__fileinfo );
_WCRTLINK extern int  _wfindnext( long __handle,
                                  struct _wfinddata_t *__fileinfo );
_WCRTLINK extern int  _findclose( long __handle );

_WCRTLINK extern char       *_mktemp( char *__template );
_WCRTLINK extern wchar_t    *_wmktemp( wchar_t *__template );

#ifdef __WATCOM_INT64__
_WCRTLINK extern long       _findfirsti64( const char *__filespec,
                                           struct _finddatai64_t *__fileinfo );
_WCRTLINK extern long       _wfindfirsti64( const wchar_t *__filespec,
                                            struct _wfinddatai64_t *__fileinfo );
_WCRTLINK extern int        _findnexti64( long __handle,
                                          struct _finddatai64_t *__fileinfo );
_WCRTLINK extern int        _wfindnexti64( long __handle,
                                           struct _wfinddatai64_t *__fileinfo );
_WCRTLINK extern __int64    _filelengthi64( int __handle );
_WCRTLINK extern __int64    _lseeki64( int __handle, __int64 __offset,
                                       int __origin );
_WCRTLINK extern __int64    _telli64( int __handle );
#endif

#pragma pack( __pop )

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
