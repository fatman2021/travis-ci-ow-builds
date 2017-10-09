/***************************************************************************
 * FILE: ctype.h/cctype (Character Handling)
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
 *
 * Description: This header is part of the C/C++ standard library. It
 *              declares several character classification functions.
 ***************************************************************************/
#ifndef _CTYPE_H_INCLUDED
#define _CTYPE_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus

#include <cctype>

// C99 functions in ctype.h
using std::isalnum;
using std::isalpha;
using std::iscntrl;
using std::isdigit;
using std::isgraph;
using std::islower;
using std::isprint;
using std::ispunct;
using std::isspace;
using std::isupper;
using std::isxdigit;
using std::tolower;
using std::toupper;

#if defined(_LINUX_SOURCE) || !defined(NO_EXT_KEYS) || __STDC_VERSION__ >= 199901L /* extensions enabled or C99 */
using std::isblank;
#endif /* extensions enabled */

#else /* __cplusplus not defined */

#ifndef __COMDEF_H_INCLUDED
 #include <_comdef.h>
#endif

#define _LOWER  0x80
#define _UPPER  0x40
#define _DIGIT  0x20
#define _XDIGT  0x10
#define _PRINT  0x08
#define _PUNCT  0x04
#define _SPACE  0x02
#define _CNTRL  0x01

_WCRTLINK extern int    isalnum(int);
_WCRTLINK extern int    isalpha(int);
_WCRTLINK extern int    iscntrl(int);
_WCRTLINK extern int    isdigit(int);
_WCRTLINK extern int    isgraph(int);
_WCRTLINK extern int    islower(int);
_WCRTLINK extern int    isprint(int);
_WCRTLINK extern int    ispunct(int);
_WCRTLINK extern int    isspace(int);
_WCRTLINK extern int    isupper(int);
_WCRTLINK extern int    isxdigit(int);
_WCRTLINK extern int    tolower(int);
_WCRTLINK extern int    toupper(int);

#if defined(_LINUX_SOURCE) || !defined(NO_EXT_KEYS) || __STDC_VERSION__ >= 199901L /* extensions enabled or C99 */
_WCRTLINK extern int    isblank(int);
#endif /* extensions enabled */

#if defined(__SW_BR) || defined(_RTDLL)
 #define _IsTable _IsTable_br
#endif
_WCRTDATA extern const unsigned char _WCDATA _IsTable[257];

#if defined(_LINUX_SOURCE) || !defined(NO_EXT_KEYS) /* extensions enabled */
_WCRTLINK extern int    _tolower(int);
_WCRTLINK extern int    _toupper(int);
_WCRTLINK extern int    isleadbyte(int);
_WCRTLINK extern int    __isascii(int);
_WCRTLINK extern int    __toascii(int);
_WCRTLINK extern int    __iscsymf(int);
_WCRTLINK extern int    __iscsym(int);
#endif /* extensions enabled */

#ifndef __FUNCTION_DATA_ACCESS

#define isalnum(__c)    ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & (_LOWER|_UPPER|_DIGIT))
#define isalpha(__c)    ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & (_LOWER|_UPPER))
#define iscntrl(__c)    ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & _CNTRL)
#define isdigit(__c)    ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & _DIGIT)
#define isgraph(__c)    (((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & (_PRINT|_SPACE))==_PRINT)
#define islower(__c)    ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & _LOWER)
#define isprint(__c)    ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & _PRINT)
#define ispunct(__c)    ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & _PUNCT)
#define isspace(__c)    ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & _SPACE)
#define isupper(__c)    ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & _UPPER)
#define isxdigit(__c)   ((unsigned char)(_IsTable[((unsigned char)(__c))+1]) & _XDIGT)

#if defined(_LINUX_SOURCE) || !defined(NO_EXT_KEYS) || __STDC_VERSION__ >= 199901L /* extensions enabled or C99 */
#define isblank(__c)    (((__c)==' ')||((__c)=='\t'))
#endif /* extensions enabled */

#if defined(_LINUX_SOURCE) || !defined(NO_EXT_KEYS) /* extensions enabled */
#define __isascii(__c)  ((unsigned)(__c) <= 0x7f)
#define __toascii(__c)  ((__c) & 0x7f)
#define __iscsymf(__c)  (isalpha(__c)||((__c)=='_'))
#define __iscsym(__c)   (isalnum(__c)||((__c)=='_'))
#endif /* extensions enabled */

#endif /* __FUNCTION_DATA_ACCESS not defined */

#if defined(_LINUX_SOURCE) || !defined(NO_EXT_KEYS) /* extensions enabled */
#define isascii         __isascii
#define toascii         __toascii
#define iscsym          __iscsym
#define iscsymf         __iscsymf
#endif /* extensions enabled */

#endif /* __cplusplus not defined */

#endif
