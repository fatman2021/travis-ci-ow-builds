/*
 *  excpt.h     Structured Exception Handling types, defines and routines
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
#ifndef _EXCPT_H_INCLUDED
#define _EXCPT_H_INCLUDED
#define _INC_EXCPT

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

#ifdef __OS2__
#ifndef __BSEXCPT_H__
 #include <os2def.h>
 #include <bsexcpt.h>
#endif
#endif

/*
 * Exception disposition return values.
 */
typedef enum _EXCEPTION_DISPOSITION {
    ExceptionContinueExecution,
    ExceptionContinueSearch,
    ExceptionNestedException,
    ExceptionCollidedUnwind
} EXCEPTION_DISPOSITION;


/*
 * Prototype for SEH support function.
 */
struct _EXCEPTION_RECORD;
struct _CONTEXT;

EXCEPTION_DISPOSITION __cdecl _except_handler (
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void * EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        void * DispatcherContext
        );

#ifdef __OS2__
 typedef struct _EXCEPTION_POINTERS {
     PEXCEPTIONREPORTRECORD ExceptionRecord;
     PCONTEXTRECORD ContextRecord;
 } EXCEPTION_POINTERS,*PEXCEPTION_POINTERS,*LPEXCEPTION_POINTERS;
#endif

/*
 * Keywords and intrinsics for SEH
 */
#define GetExceptionCode                _exception_code
#define exception_code                  _exception_code
#define GetExceptionInformation         (struct _EXCEPTION_POINTERS *)_exception_info
#define exception_info                  (struct _EXCEPTION_POINTERS *)_exception_info
#undef AbnormalTermination
#define AbnormalTermination             _abnormal_termination
#define abnormal_termination            _abnormal_termination

unsigned long __cdecl _exception_code(void);
void *        __cdecl _exception_info(void);
int           __cdecl _abnormal_termination(void);


/*
 * Legal values for expression in except().
 */
#define EXCEPTION_EXECUTE_HANDLER        1
#define EXCEPTION_CONTINUE_SEARCH        0
#ifndef EXCEPTION_CONTINUE_EXECUTION
#define EXCEPTION_CONTINUE_EXECUTION   (-1)
#endif

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
