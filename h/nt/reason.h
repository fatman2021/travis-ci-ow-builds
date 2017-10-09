/*
 *  reason.h    Shutdown reason codes
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

#ifndef SENTINEL_Reason
#define SENTINEL_Reason

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Shutdown reason flags */
#define SHTDN_REASON_FLAG_COMMENT_REQUIRED          0x01000000L
#define SHTDN_REASON_FLAG_DIRTY_PROBLEM_ID_REQUIRED 0x02000000L
#define SHTDN_REASON_FLAG_CLEAN_UI                  0x04000000L
#define SHTDN_REASON_FLAG_DIRTY_UI                  0x08000000L
#define SHTDN_REASON_FLAG_USER_DEFINED              0x40000000L
#define SHTDN_REASON_FLAG_PLANNED                   0x80000000L

/* Major shutdown reason codes */
#define SHTDN_REASON_MAJOR_OTHER            0x00000000L
#define SHTDN_REASON_MAJOR_NONE             0x00000000L
#define SHTDN_REASON_MAJOR_HARDWARE         0x00010000L
#define SHTDN_REASON_MAJOR_OPERATINGSYSTEM  0x00020000L
#define SHTDN_REASON_MAJOR_SOFTWARE         0x00030000L
#define SHTDN_REASON_MAJOR_APPLICATION      0x00040000L
#define SHTDN_REASON_MAJOR_SYSTEM           0x00050000L
#define SHTDN_REASON_MAJOR_POWER            0x00060000L
#define SHTDN_REASON_MAJOR_LEGACY_API       0x00070000L

/* Minor shutdown reason codes */
#define SHTDN_REASON_MINOR_OTHER                    0x00000000L
#define SHTDN_REASON_MINOR_NONE                     0x000000FFL
#define SHTDN_REASON_MINOR_MAINTENANCE              0x00000001L
#define SHTDN_REASON_MINOR_INSTALLATION             0x00000002L
#define SHTDN_REASON_MINOR_UPGRADE                  0x00000003L
#define SHTDN_REASON_MINOR_RECONFIG                 0x00000004L
#define SHTDN_REASON_MINOR_HUNG                     0x00000005L
#define SHTDN_REASON_MINOR_UNSTABLE                 0x00000006L
#define SHTDN_REASON_MINOR_DISK                     0x00000007L
#define SHTDN_REASON_MINOR_PROCESSOR                0x00000008L
#define SHTDN_REASON_MINOR_NETWORKCARD              0x00000009L
#define SHTDN_REASON_MINOR_POWER_SUPPLY             0x0000000AL
#define SHTDN_REASON_MINOR_CORDUNPLUGGED            0x0000000BL
#define SHTDN_REASON_MINOR_ENVIRONMENT              0x0000000CL
#define SHTDN_REASON_MINOR_HARDWARE_DRIVER          0x0000000DL
#define SHTDN_REASON_MINOR_OTHER_DRIVER             0x0000000EL
#define SHTDN_REASON_MINOR_BLUESCREEN               0x0000000FL
#define SHTDN_REASON_MINOR_SERVICEPACK              0x00000010L
#define SHTDN_REASON_MINOR_HOTFIX                   0x00000011L
#define SHTDN_REASON_MINOR_SECURITYFIX              0x00000012L
#define SHTDN_REASON_MINOR_SECURITY                 0x00000013L
#define SHTDN_REASON_MINOR_NETWORK_CONNECTIVITY     0x00000014L
#define SHTDN_REASON_MINOR_WMI                      0x00000015L
#define SHTDN_REASON_MINOR_SERVICEPACK_UNINSTALL    0x00000016L
#define SHTDN_REASON_MINOR_HOTFIX_UNINSTALL         0x00000017L
#define SHTDN_REASON_MINOR_SECURITYFIX_UNINSTALL    0x00000018L
#define SHTDN_REASON_MINOR_MMC                      0x00000019L
#define SHTDN_REASON_MINOR_SYSTEMRESTORE            0x0000001AL
#define SHTDN_REASON_MINOR_TERMSRV                  0x00000020L
#define SHTDN_REASON_MINOR_DC_PROMOTION             0x00000021L
#define SHTDN_REASON_MINOR_DC_DEMOTION              0x00000022L

/* Shutdown reason codes */
#define SHTDN_REASON_UNKNOWN        (SHTDN_REASON_MINOR_NONE)
#define SHTDN_REASON_LEGACY_API     (SHTDN_REASON_MAJOR_LEGACY_API | SHTDN_REASON_FLAG_PLANNED)
#define SHTDN_REASON_VALID_BIT_MASK 0xC0FFFFFFL

/* Combinations of shutdown reason flags */
#define PCLEANUI    (SHTDN_REASON_FLAG_PLANNED | SHTDN_REASON_FLAG_CLEAN_UI)
#define UCLEANUI    (SHTDN_REASON_FLAG_CLEAN_UI)
#define PDIRTYUI    (SHTDN_REASON_FLAG_PLANNED | SHTDN_REASON_FLAG_DIRTY_UI)
#define UDIRTYUI    (SHTDN_REASON_FLAG_DIRTY_UI)

/* Maximum lengths */
#define MAX_REASON_NAME_LEN     64
#define MAX_REASON_DESC_LEN     256
#define MAX_REASON_BUGID_LEN    32
#define MAX_REASON_COMMENT_LEN  512
#define SHUTDOWN_TYPE_LEN       32

/* Policy values */
#define POLICY_SHOWREASONUI_NEVER           0
#define POLICY_SHOWREASONUI_ALWAYS          1
#define POLICY_SHOWREASONUI_WORKSTATIONONLY 2
#define POLICY_SHOWREASONUI_SERVERONLY      3

/* Snapshot policy values */
#define SNAPSHOT_POLICY_NEVER       0
#define SNAPSHOT_POLICY_ALWAYS      1
#define SNAPSHOT_POLICY_UNPLANNED   2

/* Maximum number of user-defined reasons */
#define MAX_NUM_REASONS 256

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* SENTINEL_Reason */
