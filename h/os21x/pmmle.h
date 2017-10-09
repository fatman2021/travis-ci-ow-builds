/*
 *  pmmle.h     OS/2 PM MultiLine Edit control include file
 *              for 16-bit development.
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

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#define MLS_WORDWRAP  0x00000001L
#define MLS_BORDER    0x00000002L
#define MLS_VSCROLL   0x00000004L
#define MLS_HSCROLL   0x00000008L
#define MLS_READONLY  0x00000010L
#define MLS_IGNORETAB 0x00000020L

#define MLFFMTRECT_LIMITHORZ   1
#define MLFFMTRECT_LIMITVERT   2
#define MLFFMTRECT_MATCHWINDOW 4
#define MLFFMTRECT_FORMATRECT  7

#define MLFIE_CFTEXT  0
#define MLFIE_NOTRANS 1
#define MLFIE_WINFMT  2
#define MLFIE_RTF     3

#define MLFEFR_RESIZE    0x00000001L
#define MLFEFR_TABSTOP   0x00000002L
#define MLFEFR_FONT      0x00000004L
#define MLFEFR_TEXT      0x00000008L
#define MLFEFR_WORDWRAP  0x00000010L
#define MLFETL_TEXTBYTES 0x00000020L

#define MLFMARGIN_LEFT   1
#define MLFMARGIN_BOTTOM 2
#define MLFMARGIN_RIGHT  3
#define MLFMARGIN_TOP    4

#define MLFQS_MINMAXSEL 0
#define MLFQS_MINSEL    1
#define MLFQS_MAXSEL    2
#define MLFQS_ANCHORSEL 3
#define MLFQS_CURSORSEL 4

#define MLFCLPBD_TOOMUCHTEXT 1
#define MLFCLPBD_ERROR       2

#define MLFSEARCH_CASESENSITIVE 1
#define MLFSEARCH_SELECTMATCH   2
#define MLFSEARCH_CHANGEALL     4

#define MLM_SETTEXTLIMIT          0x01b0
#define MLM_QUERYTEXTLIMIT        0x01b1
#define MLM_SETFORMATRECT         0x01b2
#define MLM_QUERYFORMATRECT       0x01b3
#define MLM_SETWRAP               0x01b4
#define MLM_QUERYWRAP             0x01b5
#define MLM_SETTABSTOP            0x01b6
#define MLM_QUERYTABSTOP          0x01b7
#define MLM_SETREADONLY           0x01b8
#define MLM_QUERYREADONLY         0x01b9
#define MLM_QUERYCHANGED          0x01ba
#define MLM_SETCHANGED            0x01bb
#define MLM_QUERYLINECOUNT        0x01bc
#define MLM_CHARFROMLINE          0x01bd
#define MLM_LINEFROMCHAR          0x01be
#define MLM_QUERYLINELENGTH       0x01bf
#define MLM_QUERYTEXTLENGTH       0x01c0
#define MLM_FORMAT                0x01c1
#define MLM_SETIMPORTEXPORT       0x01c2
#define MLM_IMPORT                0x01c3
#define MLM_EXPORT                0x01c4
#define MLM_DELETE                0x01c6
#define MLM_QUERYFORMATLINELENGTH 0x01c7
#define MLM_QUERYFORMATTEXTLENGTH 0x01c8
#define MLM_INSERT                0x01c9
#define MLM_SETSEL                0x01ca
#define MLM_QUERYSEL              0x01cb
#define MLM_QUERYSELTEXT          0x01cc
#define MLM_QUERYUNDO             0x01cd
#define MLM_UNDO                  0x01ce
#define MLM_RESETUNDO             0x01cf
#define MLM_QUERYFONT             0x01d0
#define MLM_SETFONT               0x01d1
#define MLM_SETTEXTCOLOR          0x01d2
#define MLM_QUERYTEXTCOLOR        0x01d3
#define MLM_SETBACKCOLOR          0x01d4
#define MLM_QUERYBACKCOLOR        0x01d5
#define MLM_QUERYFIRSTCHAR        0x01d6
#define MLM_SETFIRSTCHAR          0x01d7
#define MLM_CUT                   0x01d8
#define MLM_COPY                  0x01d9
#define MLM_PASTE                 0x01da
#define MLM_CLEAR                 0x01db
#define MLM_ENABLEREFRESH         0x01dc
#define MLM_DISABLEREFRESH        0x01dd
#define MLM_SEARCH                0x01de
#define MLM_QUERYIMPORTEXPORT     0x01df
#define MLN_OVERFLOW              0x0001
#define MLN_PIXHORZOVERFLOW       0x0002
#define MLN_PIXVERTOVERFLOW       0x0003
#define MLN_TEXTOVERFLOW          0x0004
#define MLN_VSCROLL               0x0005
#define MLN_HSCROLL               0x0006
#define MLN_CHANGE                0x0007
#define MLN_SETFOCUS              0x0008
#define MLN_KILLFOCUS             0x0009
#define MLN_MARGIN                0x000a
#define MLN_SEARCHPAUSE           0x000b
#define MLN_MEMERROR              0x000c
#define MLN_UNDOOVERFLOW          0x000d
#define MLN_CLPBDFAIL             0x000f

typedef LONG  IPT;
typedef PLONG PIPT;
typedef LONG  PIX;
typedef ULONG LINE;

typedef struct _FORMATRECT {
    LONG cxFormat;
    LONG cyFormat;
} MLEFORMATRECT, FAR *PFORMATRECT;

typedef struct _MLECTLDATA {
    USHORT cbCtlData;
    USHORT afIEFormat;
    ULONG  cchText;
    IPT    iptAnchor;
    IPT    iptCursor;
    LONG   cxFormat;
    LONG   cyFormat;
    ULONG  afFormatFlags;
} MLECTLDATA, FAR *PMLECTLDATA;

typedef struct _MLEOVERFLOW {
    ULONG afErrInd;
    LONG  nBytesOver;
    LONG  pixHorzOver;
    LONG  pixVertOver;
}  MLEOVERFLOW, FAR *POVERFLOW;

typedef struct _MLEMARGSTRUCT {
    USHORT afMargins;
    USHORT usMouMsg;
    IPT    iptNear;
} MLEMARGSTRUCT, FAR *PMARGSTRUCT;

typedef struct _SEARCH {
    USHORT cb;
    PCHAR  pchFind;
    PCHAR  pchReplace;
    SHORT  cchFind;
    SHORT  cchReplace;
    IPT    iptStart;
    IPT    iptStop;
    USHORT cchFound;
} MLE_SEARCHDATA, FAR *PMLE_SEARCHDATA;
