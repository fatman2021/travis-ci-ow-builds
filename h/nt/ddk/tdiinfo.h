/*
 *  tdiinfo.h   Transport driver interface information definitions
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

#ifndef TDI_INFO_INCLUDED
#define TDI_INFO_INCLUDED

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Primitive data types */
#ifndef CTE_TYPEDEFS_DEFINED
#define CTE_TYPEDEFS_DEFINED
typedef unsigned long   ulong;
typedef unsigned short  ushort;
typedef unsigned char   uchar;
typedef unsigned int    uint;
#endif

/* Maximum number of transport driver interface entities */
#define MAX_TDI_ENTITIES    4096

/* Information classes */
#define INFO_CLASS_GENERIC          0x00000100L
#define INFO_CLASS_PROTOCOL         0x00000200L
#define INFO_CLASS_IMPLEMENTATION   0x00000300L

/* Information types */
#define INFO_TYPE_PROVIDER          0x00000100L
#define INFO_TYPE_ADDRESS_OBJECT    0x00000200L
#define INFO_TYPE_CONNECTION        0x00000300L

/* Entity list identifier */
#define ENTITY_LIST_ID  0L

/* Entities */
#define GENERIC_ENTITY  0x00000000L
#define CO_TL_ENTITY    0x00000400L
#define CL_TL_ENTITY    0x00000401L
#define ER_ENTITY       0x00000380L
#define CO_NL_ENTITY    0x00000300L
#define CL_NL_ENTITY    0x00000301L
#define AT_ENTITY       0x00000280L
#define IF_ENTITY       0x00000200L

/* Entity instance special value */
#define INVALID_ENTITY_INSTANCE (-1)

/* Context size */
#define CONTEXT_SIZE    16

/* Entity type identifiers */
#define ENTITY_TYPE_ID  1
#define CO_TL_NBF       0x00000400L
#define CO_TL_SPX       0x00000402L
#define CO_TL_TCP       0x00000404L
#define CO_TL_SPP       0x00000406L
#define CL_TL_NBF       0x00000401L
#define CO_TL_UDP       0x00000403L
#define ER_ICMP         0x00000380L
#define CL_NL_IPX       0x00000301L
#define CL_NL_IP        0x00000303L
#define AT_ARP          0x00000280L
#define AT_NULL         0x00000282L
#define IF_GENERIC      0x00000200L
#define IF_MIB          0x00000202L

/* Transport driver interface device I/O control codes */
#define IOCTL_TDI_TL_IO_CONTROL_ENDPOINT \
    CTL_CODE( FILE_DEVICE_TRANSPORT, 14, METHOD_BUFFERED, FILE_ANY_ACCESS )

/* Transport driver interface entity identifier */
typedef struct TDIEntityID {
    ulong   tei_entity;
    ulong   tei_instance;
} TDIEntityID;

/* Transport driver interface object identifier */
typedef struct TDIObjectID {
    TDIEntityID toi_entity;
    ulong       toi_class;
    ulong       toi_type;
    ulong       toi_id;
} TDIObjectID;

/* TCP request query information (extended version) */
typedef struct tcp_request_query_information_ex_xp {
    TDIObjectID ID;
    ULONG_PTR   Context[CONTEXT_SIZE / sizeof( ULONG_PTR )];
} TCP_REQUEST_QUERY_INFORMATION_EX_XP;
typedef TCP_REQUEST_QUERY_INFORMATION_EX_XP     *PTCP_REQUEST_QUERY_INFORMATION_EX_XP;
typedef struct tcp_request_query_information_ex_w2k {
    TDIObjectID ID;
    uchar       Context[CONTEXT_SIZE];
} TCP_REQUEST_QUERY_INFORMATION_EX_W2K;
typedef TCP_REQUEST_QUERY_INFORMATION_EX_W2K    *PTCP_REQUEST_QUERY_INFORMATION_EX_W2K;
#if (NTDDI_VERSION >= 0x05010000)
typedef TCP_REQUEST_QUERY_INFORMATION_EX_XP     TCP_REQUEST_QUERY_INFORMATION_EX;
#else
typedef TCP_REQUEST_QUERY_INFORMATION_EX_W2K    TCP_REQUEST_QUERY_INFORMATION_EX;
#endif
typedef TCP_REQUEST_QUERY_INFORMATION_EX        *PTCP_REQUEST_QUERY_INFORMATION_EX;

/* TCP request set information (extended version) */
typedef struct tcp_request_set_information_ex {
    TDIObjectID     ID;
    unsigned int    BufferSize;
    unsigned char   Buffer[1];
} TCP_REQUEST_SET_INFORMATION_EX;
typedef TCP_REQUEST_SET_INFORMATION_EX  *PTCP_REQUEST_SET_INFORMATION_EX;

/* Transport driver interface TL I/O control types */
typedef enum {
    EndpointIoControlType   = 0,
    SetSockOptIoControlType = 1,
    GetSockOptIoControlType = 2,
    SocketIoControlType     = 3
} TDI_TL_IO_CONTROL_TYPE;
typedef TDI_TL_IO_CONTROL_TYPE  *PTDI_TL_IO_CONTROL_TYPE;

/* Transport driver interface TL I/O control endpoint */
typedef struct _TDI_TL_IO_CONTROL_ENDPOINT {
    TDI_TL_IO_CONTROL_TYPE  Type;
    ULONG                   Level;
    union {
        ULONG   IoControlCode;
        ULONG   OptionName;
    };
    PVOID                   InputBuffer;
    ULONG                   InputBufferLength;
    PVOID                   OutputBuffer;
    ULONG                   OutputBufferLength;
} TDI_TL_IO_CONTROL_ENDPOINT;
typedef TDI_TL_IO_CONTROL_ENDPOINT  *PTDI_TL_IO_CONTROL_ENDPOINT;

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* TDI_INFO_INCLUDED */
