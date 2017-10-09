/***************************************************************************
 * FILE: limits.h/climits (Machine and OS limits)
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
 *              describes implementation limits.
 ***************************************************************************/
#ifndef _LIMITS_H_INCLUDED
#define _LIMITS_H_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifndef MB_CUR_MAX
 #define MB_CUR_MAX     6
#endif
#ifndef MB_LEN_MAX
 #define MB_LEN_MAX     6
#endif

/*
 *  ANSI required limits
 */
#define CHAR_BIT    8           /*  number of bits in a byte        */
#ifdef __CHAR_SIGNED__
 #define CHAR_MIN   (-128)      /*  minimum value of a char         */
 #define CHAR_MAX   127         /*  maximum value of a char         */
#else
 #define CHAR_MIN   0           /*  minimum value of a char         */
 #define CHAR_MAX   255         /*  maximum value of a char         */
#endif
#define SCHAR_MIN   (-128)      /*  minimum value of a signed char      */
#define SCHAR_MAX   127         /*  maximum value of a signed char      */
#define UCHAR_MAX   255         /*  maximum value of an unsigned char   */

#define SHRT_MIN    (-32767-1)  /*  minimum value of a short int        */
#define SHRT_MAX    32767       /*  maximum value of a short int        */
 #define USHRT_MAX  65535       /*  maximum value of an unsigned short  */
#define LONG_MAX    2147483647L       /* maximum value of a long int      */
#define LONG_MIN    (-2147483647L-1L) /* minimum value of a long int      */
#define ULONG_MAX   4294967295UL      /* maximum value of an unsigned long*/
 #define INT_MIN    (-2147483647-1) /*  minimum value of an int         */
 #define INT_MAX    2147483647      /*  maximum value of an int         */
 #define UINT_MAX   4294967295U     /*  maximum value of an unsigned int*/
#ifdef __WATCOM_INT64__
 #define LONGLONG_MIN   (-9223372036854775807I64-1I64)
                                    /*  minimum value of an __int64         */
 #define LONGLONG_MAX   9223372036854775807I64
                                    /*  maximum value of an __int64         */
 #define ULONGLONG_MAX  18446744073709551615UI64
                                    /*  maximum value of an unsigned __int64*/
 #define LLONG_MIN      (-9223372036854775807LL-1LL) /* for C99 */
 #define LLONG_MAX      9223372036854775807LL        /* for C99 */
 #define ULLONG_MAX     18446744073709551615ULL      /* for C99 */
#endif

#define _I8_MIN     SCHAR_MIN   /*  minimum value of a signed 8 bit type   */
#define _I8_MAX     SCHAR_MAX   /*  maximum value of a signed 8 bit type   */
#define _UI8_MAX    255U        /*  maximum value of an unsigned 8 bit type*/

#define _I16_MIN    SHRT_MIN    /*  minimum value of a signed 16 bit type   */
#define _I16_MAX    SHRT_MAX    /*  maximum value of a signed 16 bit type   */
#define _UI16_MAX   65535U      /*  maximum value of an unsigned 16 bit type*/

#define _I32_MIN    LONG_MIN    /*  minimum value of a signed 32 bit type   */
#define _I32_MAX    LONG_MAX    /*  maximum value of a signed 32 bit type   */
#define _UI32_MAX   ULONG_MAX   /*  maximum value of an unsigned 32 bit type*/

#ifdef __WATCOM_INT64__
 #define _I64_MIN   LONGLONG_MIN  /* minimum value of a signed 64 bit type   */
 #define _I64_MAX   LONGLONG_MAX  /* maximum value of a signed 64 bit type   */
 #define _UI64_MAX  ULONGLONG_MAX /* maximum value of an unsigned 64 bit type*/
#endif


#if defined(_POSIX_SOURCE) || defined(_LINUX_SOURCE) || !defined(NO_EXT_KEYS) /* extensions enabled */

/*
 *  POSIX required limits.
 *  These are minimums values, not absolute limits,
 *  and the real value may be greater.
 */

#define _POSIX_ARG_MAX      4096    /*  Length of args for exec             */
                                    /*  functions including environment data*/
#define _POSIX_CHILD_MAX    6       /*  Number of simultaneous              */
                                    /*  processes per real user ID.         */
#define _POSIX_LINK_MAX     8       /*  Max. links per file                 */
#define _POSIX_MAX_CANON    255     /*  No. bytes in terminal               */
                                    /*  cannonical input queue.             */
#define _POSIX_MAX_INPUT    255     /*  Size of terminal input queue buffer */
#define _POSIX_NAME_MAX     14      /*  Max bytes in a filename             */
#define _POSIX_NGROUPS_MAX  0       /*  Num. simultaneous supplementary     */
                                    /*  group IDs per process               */
#define _POSIX_OPEN_MAX     16      /*  Min num. files open per process.    */
#define _POSIX_PATH_MAX     255     /*  Num. bytes in pathname (excl. NULL) */
#define _POSIX_PIPE_BUF     512     /*  Num. bytes written atomically to a  */
                                    /*  pipe.                               */
#define _POSIX_SSIZE_MAX    32767   /*  The value that can be stored in an  */
                                    /*  object of type ssize_t.             */
#define _POSIX_STREAM_MAX   8       /*  The number of streams that one      */
                                    /*  process can have open at one time.  */
#define _POSIX_SYMLOOP_MAX  8       /*  The number of loops to traverse     */
                                    /*  while resolving symbolic links      */
                                    /*  or prefix aliases.                  */
#define _POSIX_TZNAME_MAX   3       /*  The maximum number of bytes         */
                                    /*  supported for the name of a time    */
                                    /*  zone (not of the TZ variable).      */
#define _POSIX_THREAD_KEYS_MAX  512 /*  Open Watcom really doesn't have a   */
                                    /*  limit since a linked list is used,  */
                                    /*  but 512 is bigger than most.        */

#define PTHREAD_KEYS_MAX _POSIX_THREAD_KEYS_MAX

/*
 *  Run-time increasable values
 *
 */
#define NGROUPS_MAX 32

/*
 *  Run-time invariant values (possible indeterminate)
 *
 *  CHILD_MAX and OPEN_MAX are indeterminate.
 */
#define ARG_MAX     61440
#undef  CHILD_MAX           /* no child max             */
#undef  OPEN_MAX            /* no open max              */
#undef  STREAM_MAX          /* no stream max            */
#define TZNAME_MAX  128     /*  The maximum number of bytes         */
                            /*  supported for the name of a time    */
                            /*  zone (not of the TZ variable).      */

/*
 *  Pathname variable values (may vary by pathname)
 */
#define LINK_MAX    65535u
#define MAX_CANON   _POSIX_MAX_CANON
#define MAX_INPUT   _POSIX_MAX_INPUT
#define NAME_MAX    48
#define PATH_MAX    _POSIX_PATH_MAX
#define PIPE_BUF    5120

/*
 *  Invariant values
 */
#define SSIZE_MAX   _POSIX_SSIZE_MAX
#define SYMLOOP_MAX 32      /* This is bigger than _POSIX_SYMLOOP_MAX */

/*
 *  Posix .2/9 limits.
 */
#define BC_BASE_MAX     99
#define BC_DIM_MAX      2048
#define BC_SCALE_MAX    99
#define COLL_ELEM_MAX   4
#define EXPR_NEST_MAX   32
#define LINE_MAX        2048
#define PASTE_FILES_MAX 12
#define RE_DUP_MAX      255
#define SED_PATTERN_MAX 20480
#define SENDTO_MAX      90000L
#define SORT_LINE_MAX   20480

#endif /* extensions enabled */


#endif
