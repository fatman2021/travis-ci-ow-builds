//
//  except.h -- C++ default exception handlers
//
// =========================================================================
//
//                          Open Watcom Project
//
// Copyright (c) 2002-2017 The Open Watcom Contributors. All Rights Reserved.
// Portions Copyright (c) 1983-2002 Sybase, Inc. All Rights Reserved.
//
//    This file is automatically generated. Do not edit directly.
//
// =========================================================================
//
#ifndef _EXCEPT_H_INCLUDED
#define _EXCEPT_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef __cplusplus
 #error This header file requires C++
#endif

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#ifndef _PFV_DEFINED
#define _PFV_DEFINED
 #define _PFV_DEFINED_
 typedef void (*PFV)( void );
#endif
#ifndef _PFU_DEFINED
#define _PFU_DEFINED
 #define _PFU_DEFINED_
 typedef int (*PFU)( unsigned );
#endif
#ifndef _PNH_DEFINED
#define _PNH_DEFINED
 #define _PNH_DEFINED_
 typedef int (*_PNH)( unsigned );
#endif
#if defined(__SW_BR) || defined(_RTDLL)
 #ifndef _PPV_DEFINED
 #define _PPV_DEFINED
  #define _PPV_DEFINED_
  typedef void (*_PVV)( void *);
 #endif
 #ifndef _PUP_DEFINED
 #define _PUP_DEFINED
  #define _PUP_DEFINED_
  typedef void* (*_PUP)( std::size_t );
 #endif
#endif

#ifndef _WATCOM_EXCEPTION_DEFINED
#define _WATCOM_EXCEPTION_DEFINED
 #define _WATCOM_EXCEPTION_DEFINED_
 struct __WATCOM_exception {
  #if defined(__AXP__) || defined(__PPC__)
     void *__filler;
  #endif
 };
#endif

namespace std {

  typedef void (_WCCALLBACK *unexpected_handler)();
  typedef void (_WCCALLBACK *terminate_handler)();
  _WPRTLINK _WCNORETURN extern void terminate();
  _WPRTLINK _WCNORETURN extern void unexpected();
  _WPRTLINK extern terminate_handler set_terminate( terminate_handler );
  _WPRTLINK extern unexpected_handler set_unexpected( unexpected_handler );

} // namespace std

using std::terminate_handler;
using std::terminate;
using std::set_terminate;
using std::unexpected_handler;
using std::unexpected;
using std::set_unexpected;

#endif
