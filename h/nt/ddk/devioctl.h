/*
 *  devioctl.h  Basic device I/O control definitions
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

#ifndef _DEVIOCTL_
#define _DEVIOCTL_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Device type data type */
#define DEVICE_TYPE ULONG

/* Device types */
#define FILE_DEVICE_BEEP                0x00000001L
#define FILE_DEVICE_CD_ROM              0x00000002L
#define FILE_DEVICE_CD_ROM_FILE_SYSTEM  0x00000003L
#define FILE_DEVICE_CONTROLLER          0x00000004L
#define FILE_DEVICE_DATALINK            0x00000005L
#define FILE_DEVICE_DFS                 0x00000006L
#define FILE_DEVICE_DISK                0x00000007L
#define FILE_DEVICE_DISK_FILE_SYSTEM    0x00000008L
#define FILE_DEVICE_FILE_SYSTEM         0x00000009L
#define FILE_DEVICE_INPORT_PORT         0x0000000AL
#define FILE_DEVICE_KEYBOARD            0x0000000BL
#define FILE_DEVICE_MAILSLOT            0x0000000CL
#define FILE_DEVICE_MIDI_IN             0x0000000DL
#define FILE_DEVICE_MIDI_OUT            0x0000000EL
#define FILE_DEVICE_MOUSE               0x0000000FL
#define FILE_DEVICE_MULTI_UNC_PROVIDER  0x00000010L
#define FILE_DEVICE_NAMED_PIPE          0x00000011L
#define FILE_DEVICE_NETWORK             0x00000012L
#define FILE_DEVICE_NETWORK_BROWSER     0x00000013L
#define FILE_DEVICE_NETWORK_FILE_SYSTEM 0x00000014L
#define FILE_DEVICE_NULL                0x00000015L
#define FILE_DEVICE_PARALLEL_PORT       0x00000016L
#define FILE_DEVICE_PHYSICAL_NETCARD    0x00000017L
#define FILE_DEVICE_PRINTER             0x00000018L
#define FILE_DEVICE_SCANNER             0x00000019L
#define FILE_DEVICE_SERIAL_MOUSE_PORT   0x0000001AL
#define FILE_DEVICE_SERIAL_PORT         0x0000001BL
#define FILE_DEVICE_SCREEN              0x0000001CL
#define FILE_DEVICE_SOUND               0x0000001DL
#define FILE_DEVICE_STREAMS             0x0000001EL
#define FILE_DEVICE_TAPE                0x0000001FL
#define FILE_DEVICE_TAPE_FILE_SYSTEM    0x00000020L
#define FILE_DEVICE_TRANSPORT           0x00000021L
#define FILE_DEVICE_UNKNOWN             0x00000022L
#define FILE_DEVICE_VIDEO               0x00000023L
#define FILE_DEVICE_VIRTUAL_DISK        0x00000024L
#define FILE_DEVICE_WAVE_IN             0x00000025L
#define FILE_DEVICE_WAVE_OUT            0x00000026L
#define FILE_DEVICE_8042_PORT           0x00000027L
#define FILE_DEVICE_NETWORK_REDIRECTOR  0x00000028L
#define FILE_DEVICE_BATTERY             0x00000029L
#define FILE_DEVICE_BUS_EXTENDER        0x0000002AL
#define FILE_DEVICE_MODEM               0x0000002BL
#define FILE_DEVICE_VDM                 0x0000002CL
#define FILE_DEVICE_MASS_STORAGE        0x0000002DL
#define FILE_DEVICE_SMB                 0x0000002EL
#define FILE_DEVICE_KS                  0x0000002FL
#define FILE_DEVICE_CHANGER             0x00000030L
#define FILE_DEVICE_SMARTCARD           0x00000031L
#define FILE_DEVICE_ACPI                0x00000032L
#define FILE_DEVICE_DVD                 0x00000033L
#define FILE_DEVICE_FULLSCREEN_VIDEO    0x00000034L
#define FILE_DEVICE_DFS_FILE_SYSTEM     0x00000035L
#define FILE_DEVICE_DFS_VOLUME          0x00000036L
#define FILE_DEVICE_SERENUM             0x00000037L
#define FILE_DEVICE_TERMSRV             0x00000038L
#define FILE_DEVICE_KSEC                0x00000039L
#define FILE_DEVICE_FIPS                0x0000003AL
#define FILE_DEVICE_INFINIBAND          0x0000003BL
#define FILE_DEVICE_VMBUS               0x0000003EL
#define FILE_DEVICE_CRYPT_PROVIDER      0x0000003FL
#define FILE_DEVICE_WPD                 0x00000040L
#define FILE_DEVICE_BLUETOOTH           0x00000041L
#define FILE_DEVICE_MT_COMPOSITE        0x00000042L
#define FILE_DEVICE_MT_TRANSPORT        0x00000043L
#define FILE_DEVICE_BIOMETRIC           0x00000044L
#define FILE_DEVICE_PMI                 0x00000045L

/* Buffering methods */
#define METHOD_BUFFERED             0L
#define METHOD_IN_DIRECT            1L
#define METHOD_OUT_DIRECT           2L
#define METHOD_NEITHER              3L
#define METHOD_DIRECT_TO_HARDWARE   METHOD_IN_DIRECT
#define METHOD_DIRECT_FROM_HARDWARE METHOD_OUT_DIRECT

/* File access types */
#define FILE_ANY_ACCESS     0x0000L
#define FILE_SPECIAL_ACCESS FILE_ANY_ACCESS
#define FILE_READ_ACCESS    0x0001L
#define FILE_WRITE_ACCESS   0x0002L

/* Macros to manipulate I/O control codes */
#define CTL_CODE( p1, p2, p3, p4 ) \
    (((p1) << 16) | ((p4) << 14) | ((p2) << 2) | (p3))
#define DEVICE_TYPE_FROM_CTL_CODE( x )  (((ULONG)(x & 0xFFFF0000L)) >> 16)
#define METHOD_FROM_CTL_CODE( x )       ((ULONG)(x & 0x00000003L))

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* _DEVIOCTL_ */
