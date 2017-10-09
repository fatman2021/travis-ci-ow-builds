/*
 *  ole2.h      Object Linking and Embedding (OLE) 2.0 functions
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

#ifndef _OLE2_H_
#define _OLE2_H_

#ifndef _ENABLE_AUTODEPEND
 #pragma read_only_file
#endif

#include <compobj.h>
#include <storage.h>

/* Forward declarations */
typedef interface IDataObject           IDataObject;
typedef interface IOleClientSite        IOleClientSite;
typedef interface IMoniker              IMoniker;
typedef interface IAdviseSink           IAdviseSink;
typedef interface IEnumSTATDATA         IEnumSTATDATA;
typedef interface IOleContainer         IOleContainer;
typedef interface IBindCtx              IBindCtx;
typedef interface IOleInPlaceUIWindow   IOleInPlaceUIWindow;
typedef IDataObject FAR                 *LPDATAOBJECT;
typedef IOleClientSite FAR              *LPOLECLIENTSITE;
typedef IMoniker FAR                    *LPMONIKER;
typedef IAdviseSink FAR                 *LPADVISESINK;
typedef IEnumSTATDATA FAR               *LPENUMSTATDATA;
typedef IOleContainer FAR               *LPOLECONTAINER;
typedef IBindCtx FAR                    *LPBC;
typedef IBindCtx FAR                    *LPBINDCTX;
typedef IOleInPlaceUIWindow FAR         *LPOLEINPLACEUIWINDOW;

/* OLE menu handle */
DECLARE_HANDLE( HOLEMENU );

/* OLE error codes */
#define OLE_E_OLEVERB               (OLE_E_FIRST + 0)
#define OLE_E_ADVF                  (OLE_E_FIRST + 1)
#define OLE_E_ENUM_NOMORE           (OLE_E_FIRST + 2)
#define OLE_E_ADVISENOTSUPPORTED    (OLE_E_FIRST + 3)
#define OLE_E_NOCONNECTION          (OLE_E_FIRST + 4)
#define OLE_E_NOTRUNNING            (OLE_E_FIRST + 5)
#define OLE_E_NOCACHE               (OLE_E_FIRST + 6)
#define OLE_E_BLANK                 (OLE_E_FIRST + 7)
#define OLE_E_CLASSDIFF             (OLE_E_FIRST + 8)
#define OLE_E_CANT_GETMONIKER       (OLE_E_FIRST + 9)
#define OLE_E_CANT_BINDTOSOURCE     (OLE_E_FIRST + 10)
#define OLE_E_STATIC                (OLE_E_FIRST + 11)
#define OLE_E_PROMPTSAVECANCELLED   (OLE_E_FIRST + 12)
#define OLE_E_INVALIDRECT           (OLE_E_FIRST + 13)
#define OLE_E_WRONGCOMPOBJ          (OLE_E_FIRST + 14)
#define OLE_E_INVALIDHWND           (OLE_E_FIRST + 15)
#define OLE_E_NOT_INPLACEACTIVE     (OLE_E_FIRST + 16)
#define OLE_E_CANTCONVERT           (OLE_E_FIRST + 17)
#define OLE_E_NOSTORAGE             (OLE_E_FIRST + 18)
#define OLE_S_USEREG                (OLE_S_FIRST + 0)
#define OLE_S_STATIC                (OLE_S_FIRST + 1)
#define OLE_S_MAC_CLIPFORMAT        (OLE_S_FIRST + 2)

/* Data/view error codes */
#define DVGEN_E_FIRST               (OLE_E_FIRST + 100)
#define DV_E_FORMATETC              (DVGEN_E_FIRST + 0)
#define DV_E_DVTARGETDEVICE         (DVGEN_E_FIRST + 1)
#define DV_E_STGMEDIUM              (DVGEN_E_FIRST + 2)
#define DV_E_STATDATA               (DVGEN_E_FIRST + 3)
#define DV_E_LINDEX                 (DVGEN_E_FIRST + 4)
#define DV_E_TYMED                  (DVGEN_E_FIRST + 5)
#define DV_E_CLIPFORMAT             (DVGEN_E_FIRST + 6)
#define DV_E_DVASPECT               (DVGEN_E_FIRST + 7)
#define DV_E_DVTARGETDEVICE_SIZE    (DVGEN_E_FIRST + 8)
#define DV_E_NOIVIEWOBJECT          (DVGEN_E_FIRST + 9)

/* OLE 1.0 conversion error codes */
#define CONVERT10_E_OLESTREAM_GET           (CONVERT10_E_FIRST + 0)
#define CONVERT10_E_OLESTREAM_PUT           (CONVERT10_E_FIRST + 1)
#define CONVERT10_E_OLESTREAM_FMT           (CONVERT10_E_FIRST + 2)
#define CONVERT10_E_OLESTREAM_BITMAP_TO_DIB (CONVERT10_E_FIRST + 3)
#define CONVERT10_E_STG_FMT                 (CONVERT10_E_FIRST + 4)
#define CONVERT10_E_STG_NO_STD_STREAM       (CONVERT10_E_FIRST + 5)
#define CONVERT10_E_STG_DIB_TO_BITMAP       (CONVERT10_E_FIRST + 6)
#define CONVERT10_S_NO_PRESENTATION         (CONVERT10_S_FIRST + 0)

/* Clipboard error codes */
#define CLIPBRD_E_CANT_OPEN     (CLIPBRD_E_FIRST + 0)
#define CLIPBRD_E_CANT_EMPTY    (CLIPBRD_E_FIRST + 1)
#define CLIPBRD_E_CANT_SET      (CLIPBRD_E_FIRST + 2)
#define CLIPBRD_E_BAD_DATA      (CLIPBRD_E_FIRST + 3)
#define CLIPBRD_E_CANT_CLOSE    (CLIPBRD_E_FIRST + 4)

/* OleCreateEmbeddingHelper() flags */
#define EMBDHLP_INPROC_HANDLER  0x00000000L
#define EMBDHLP_INPROC_SERVER   0x00000001L
#define EMBDHLP_CREATENOW       0x00000000L
#define EMBDHLP_DELAYCREATE     0x00010000L

/* OLE verbs */
#define OLEIVERB_PRIMARY            0L
#define OLEIVERB_SHOW               (-1L)
#define OLEIVERB_OPEN               (-2L)
#define OLEIVERB_HIDE               (-3L)
#define OLEIVERB_UIACTIVATE         (-4L)
#define OLEIVERB_INPLACEACTIVATE    (-5L)
#define OLEIVERB_DISCARDUNDOSTATE   (-6L)

/* Moniker flags */
#define MK_ALT  0x00000020L

/* Drop effects */
#define DROPEFFECT_NONE     0x00000000L
#define DROPEFFECT_COPY     0x00000001L
#define DROPEFFECT_MOVE     0x00000002L
#define DROPEFFECT_LINK     0x00000004L
#define DROPEFFECT_SCROLL   0x80000000L

/* Drop defaults */
#define DD_DEFSCROLLINSET       11
#define DD_DEFSCROLLDELAY       50
#define DD_DEFSCROLLINTERVAL    50
#define DD_DEFDRAGDELAY         200
#define DD_DEFDRAGMINDIST       2

/* Drag/drop error codes */
#define DRAGDROP_E_NOTREGISTERED        (DRAGDROP_E_FIRST + 0)
#define DRAGDROP_E_ALREADYREGISTERED    (DRAGDROP_E_FIRST + 1)
#define DRAGDROP_E_INVALIDHWND          (DRAGDROP_E_FIRST + 2)
#define DRAGDROP_S_DROP                 (DRAGDROP_S_FIRST + 0)
#define DRAGDROP_S_CANCEL               (DRAGDROP_S_FIRST + 1)
#define DRAGDROP_S_USEDEFAULTCURSORS    (DRAGDROP_S_FIRST + 2)

/* OLE object error codes */
#define OLEOBJ_E_NOVERBS            (OLEOBJ_E_FIRST + 0)
#define OLEOBJ_E_INVALIDVERB        (OLEOBJ_E_FIRST + 1)
#define OLEOBJ_S_INVALIDVERB        (OLEOBJ_S_FIRST + 0)
#define OLEOBJ_S_CANNOT_DOVERB_NOW  (OLEOBJ_S_FIRST + 1)
#define OLEOBJ_S_INVALIDHWND        (OLEOBJ_S_FIRST + 2)

/* In-place error codes */
#define INPLACE_E_NOTUNDOABLE   (INPLACE_E_FIRST + 0)
#define INPLACE_E_NOTOOLSPACE   (INPLACE_E_FIRST + 1)
#define INPLACE_S_TRUNCATED     (INPLACE_S_FIRST + 0)

/* In-place defaults */
#define INPLACE_DEFBORDERWIDTH  4

/* OLE rendering options */
typedef enum tagOLERENDER {
    OLERENDER_NONE      = 0,
    OLERENDER_DRAW      = 1,
    OLERENDER_FORMAT    = 2,
    OLERENDER_ASIS      = 3
} OLERENDER;
typedef OLERENDER FAR   *LPOLERENDER;

/* OLE verb */
typedef struct FARSTRUCT tagOLEVERB {
    LONG    lVerb;
    LPSTR   lpszVerbName;
    DWORD   fuFlags;
    DWORD   grfAttribs;
} OLEVERB;
typedef OLEVERB FAR *LPOLEVERB;

/* OLE verb attributes */
typedef enum tagOLEVERBATTRIB {
    OLEVERBATTRIB_NEVERDIRTIES      = 1,
    OLEVERBATTRIB_ONCONTAINERMENU   = 2
} OLEVERBATTRIB;

/* User class types */
typedef enum tagUSERCLASSTYPE {
    USERCLASSTYPE_FULL      = 1,
    USERCLASSTYPE_SHORT     = 2,
    USERCLASSTYPE_APPNAME   = 3
} USERCLASSTYPE;

/* OLE miscellaneous flags */
typedef enum tagOLEMISC {
    OLEMISC_RECOMPOSEONRESIZE               = 0x00000001,
    OLEMISC_ONLYICONIC                      = 0x00000002,
    OLEMISC_INSERTNOTREPLACE                = 0x00000004,
    OLEMISC_STATIC                          = 0x00000008,
    OLEMISC_CANTLINKINSIDE                  = 0x00000010,
    OLEMISC_CANLINKBYOLE1                   = 0x00000020,
    OLEMISC_ISLINKOBJECT                    = 0x00000040,
    OLEMISC_INSIDEOUT                       = 0x00000080,
    OLEMISC_ACTIVATEWHENVISIBLE             = 0x00000100,
    OLEMISC_RENDERINGISDEVICEINDEPENDENT    = 0x00000200
} OLEMISC;

/* IOleObject::Close() save options */
typedef enum tagOLECLOSE {
    OLECLOSE_SAVEIFDIRTY    = 0,
    OLECLOSE_NOSAVE         = 1,
    OLECLOSE_PROMPTSAVE     = 2
} OLECLOSE;

/* IOleObject::GetMoniker() assignments */
typedef enum tagOLEGETMONIKER {
    OLEGETMONIKER_ONLYIFTHERE   = 1,
    OLEGETMONIKER_FORCEASSIGN   = 2,
    OLEGETMONIKER_UNASSIGN      = 3,
    OLEGETMONIKER_TEMPFORUSER   = 4
} OLEGETMONIKER;

/* OLE monikers */
typedef enum tagOLEWHICHMK {
    OLEWHICHMK_CONTAINER    = 1,
    OLEWHICHMK_OBJREL       = 2,
    OLEWHICHMK_OBJFULL      = 3
} OLEWHICHMK;

/* Size (long version) */
typedef struct FARSTRUCT tagSIZEL {
    long    cx;
    long    cy;
} SIZEL;
typedef SIZEL FAR   *LPSIZEL;

/* Rectangle (long version) */
typedef struct FARSTRUCT tagRECTL {
    long    left;
    long    top;
    long    right;
    long    bottom;
} RECTL;
typedef RECTL FAR   *LPRECTL;

/* Point (long version) */
typedef struct FARSTRUCT tagPOINTL {
    LONG    x;
    LONG    y;
} POINTL;

/* Constant rectangle data types */
typedef const RECT FAR  *LPCRECT;
typedef const RECTL FAR *LPCRECTL;

/* OLE stream for compatibility with OLE 1.0 */
typedef struct _OLESTREAM {
    struct _OLESTREAMVTBL FAR   *lpstbl;
} OLESTREAM;
typedef OLESTREAM FAR       *LPOLESTREAM;
typedef struct _OLESTREAMVTBL {
    DWORD   (CALLBACK *Get)( LPOLESTREAM, void FAR *, DWORD );
    DWORD   (CALLBACK *Put)( LPOLESTREAM, const void FAR *, DWORD );
} OLESTREAMVTBL;
typedef OLESTREAMVTBL FAR   *LPOLESTREAMVTBL;

/* Object descriptor */
typedef struct tagOBJECTDESCRIPTOR {
    ULONG   cbSize;
    CLSID   clsid;
    DWORD   dwDrawAspect;
    SIZEL   sizel;
    POINTL  pointl;
    DWORD   dwStatus;
    DWORD   dwFullUserTypeName;
    DWORD   dwSrcOfCopy;
} OBJECTDESCRIPTOR;
typedef OBJECTDESCRIPTOR        *POBJECTDESCRIPTOR;
typedef OBJECTDESCRIPTOR FAR    *LPOBJECTDESCRIPTOR;
typedef OBJECTDESCRIPTOR        LINKSRCDESCRIPTOR;
typedef OBJECTDESCRIPTOR        *PLINKSRCDESCRIPTOR;
typedef OBJECTDESCRIPTOR FAR    *LPLINKSRCDESCRIPTOR;

/* Bind speeds */
typedef enum tagBINDSPEED {
    BINDSPEED_INDEFINITE    = 1,
    BINDSPEED_MODERATE      = 2,
    BINDSPEED_IMMEDIATE     = 3
} BINDSPEED;

/* OLE content flags */
typedef enum tagOLECONTF {
    OLECONTF_EMBEDDINGS     = 1,
    OLECONTF_LINKS          = 2,
    OLECONTF_OTHERS         = 4,
    OLECONTF_ONLYUSER       = 8,
    OLECONTF_ONLYIFRUNNING  = 16
} OLECONTF;

/* OLE link update options */
typedef enum tagOLEUPDATE {
    OLEUPDATE_ALWAYS    = 1,
    OLEUPDATE_ONCALL    = 3
} OLEUPDATE;
typedef OLEUPDATE FAR   *LPOLEUPDATE;

/* IOleLink::BindToSource() options */
typedef enum tagOLELINKBIND {
    OLELINKBIND_EVENIFCLASSDIFF = 1
} OLELINKBIND;

/* OLE in-place frame information */
typedef struct FARSTRUCT tagOIFI {
    UINT    cb;
    BOOL    fMDIApp;
    HWND    hwndFrame;
    HACCEL  haccel;
    int     cAccelEntries;
} OLEINPLACEFRAMEINFO;
typedef OLEINPLACEFRAMEINFO FAR *LPOLEINPLACEFRAMEINFO;

/* OLE menu group widths */
typedef struct FARSTRUCT tagOleMenuGroupWidths {
    LONG    width[6];
} OLEMENUGROUPWIDTHS;
typedef OLEMENUGROUPWIDTHS FAR  *LPOLEMENUGROUPWIDTHS;

/* Bind widths */
typedef RECT    BORDERWIDTHS;
typedef LPRECT  LPBORDERWIDTHS;
typedef LPCRECT LPCBORDERWIDTHS;

/* IDropTarget interface */
#undef INTERFACE
#define INTERFACE   IDropTarget
DECLARE_INTERFACE_( IDropTarget, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDropTarget methods */
    STDMETHOD( DragEnter )( THIS_ LPDATAOBJECT, DWORD, POINTL, LPDWORD ) PURE;
    STDMETHOD( DragOver )( THIS_ DWORD, POINTL, LPDWORD ) PURE;
    STDMETHOD( DragLeave )( THIS ) PURE;
    STDMETHOD( Drop )( THIS_ LPDATAOBJECT, DWORD, POINTL, LPDWORD ) PURE;
};
typedef IDropTarget FAR *LPDROPTARGET;

/* IDropSource interface */
#undef INTERFACE
#define INTERFACE   IDropSource
DECLARE_INTERFACE_( IDropSource, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IDropSource methods */
    STDMETHOD( QueryContinueDrag )( THIS_ BOOL, DWORD ) PURE;
    STDMETHOD( GiveFeedback )( THIS_ DWORD ) PURE;
};
typedef IDropSource FAR *LPDROPSOURCE;

/* IPersist interface */
#undef INTERFACE
#define INTERFACE   IPersist
DECLARE_INTERFACE_( IPersist, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IPersist methods */
    STDMETHOD( GetClassID )( THIS_ LPCLSID ) PURE;
};
typedef IPersist FAR    *LPPERSIST;

/* IPersistStorage interface */
#undef INTERFACE
#define INTERFACE   IPersistStorage
DECLARE_INTERFACE_( IPersistStorage, IPersist ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IPersist methods */
    STDMETHOD( GetClassID )( THIS_ LPCLSID ) PURE;

    /* IPersistStorage methods */
    STDMETHOD( IsDirty )( THIS ) PURE;
    STDMETHOD( InitNew )( THIS_ LPSTORAGE ) PURE;
    STDMETHOD( Load )( THIS_ LPSTORAGE ) PURE;
    STDMETHOD( Save )( THIS_ LPSTORAGE, BOOL ) PURE;
    STDMETHOD( SaveCompleted )( THIS_ LPSTORAGE ) PURE;
    STDMETHOD( HandsOffStorage )( THIS ) PURE;
};
typedef IPersistStorage FAR *LPPERSISTSTORAGE;

/* IPersistStream interface */
#undef INTERFACE
#define INTERFACE   IPersistStream
DECLARE_INTERFACE_( IPersistStream, IPersist ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IPersist methods */
    STDMETHOD( GetClassID )( THIS_ LPCLSID ) PURE;
    
    /* IPersistStream methods */
    STDMETHOD( IsDirty )( THIS ) PURE;
    STDMETHOD( Load )( THIS_ LPSTREAM ) PURE;
    STDMETHOD( Save )( THIS_ LPSTREAM, BOOL ) PURE;
    STDMETHOD( GetSizeMax )( THIS_ ULARGE_INTEGER FAR * ) PURE;
};
typedef IPersistStream FAR  *LPPERSISTSTREAM;

/* IPersistFile interface */
#undef INTERFACE
#define INTERFACE   IPersistFile
DECLARE_INTERFACE_( IPersistFile, IPersist ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IPersist methods */
    STDMETHOD( GetClassID )( THIS_ LPCLSID ) PURE;

    /* IPersistFile methods */
    STDMETHOD( IsDirty )( THIS ) PURE;
    STDMETHOD( Load )( THIS_ LPCSTR, DWORD ) PURE;
    STDMETHOD( Save )( THIS_ LPCSTR, BOOL ) PURE;
    STDMETHOD( SaveCompleted )( THIS_ LPCSTR ) PURE;
    STDMETHOD( GetCurFile )( THIS_ LPSTR FAR * ) PURE;
};
typedef IPersistFile FAR    *LPPERSISTFILE;

/* IEnumOLEVERB interface */
#undef INTERFACE
#define INTERFACE   IEnumOLEVERB
DECLARE_INTERFACE_( IEnumOLEVERB, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IEnumOLEVERB methods */
    STDMETHOD( Next )( THIS_ ULONG, LPOLEVERB, ULONG FAR * ) PURE;
    STDMETHOD( Skip )( THIS_ ULONG ) PURE;
    STDMETHOD( Reset )( THIS ) PURE;
    STDMETHOD( Clone )( THIS_ IEnumOLEVERB FAR * FAR * ) PURE;
};
typedef IEnumOLEVERB FAR    *LPENUMOLEVERB;

/* IOleObject interface */
#undef INTERFACE
#define INTERFACE   IOleObject
DECLARE_INTERFACE_( IOleObject, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleObject methods */
    STDMETHOD( SetClientSite )( THIS_ LPOLECLIENTSITE ) PURE;
    STDMETHOD( GetClientSite )( THIS_ LPOLECLIENTSITE FAR * ) PURE;
    STDMETHOD( SetHostNames )( THIS_ LPCSTR, LPCSTR ) PURE;
    STDMETHOD( Close )( THIS_ DWORD ) PURE;
    STDMETHOD( SetMoniker )( THIS_ DWORD, LPMONIKER ) PURE;
    STDMETHOD( GetMoniker )( THIS_ DWORD, DWORD, LPMONIKER FAR * ) PURE;
    STDMETHOD( InitFromData )( THIS_ LPDATAOBJECT, BOOL, DWORD ) PURE;
    STDMETHOD( GetClipboardData )( THIS_ DWORD, LPDATAOBJECT FAR * ) PURE;
    STDMETHOD( DoVerb )( THIS_ LONG, LPMSG, LPOLECLIENTSITE, LONG, HWND, LPCRECT ) PURE;
    STDMETHOD( EnumVerbs )( THIS_ LPENUMOLEVERB FAR * ) PURE;
    STDMETHOD( Update )( THIS ) PURE;
    STDMETHOD( IsUpToDate )( THIS ) PURE;
    STDMETHOD( GetUserClassID )( THIS_ CLSID FAR * ) PURE;
    STDMETHOD( GetUserType )( THIS_ DWORD dwFormOfType, LPSTR FAR * ) PURE;
    STDMETHOD( SetExtent )( THIS_ DWORD, LPSIZEL ) PURE;
    STDMETHOD( GetExtent )( THIS_ DWORD, LPSIZEL ) PURE;
    STDMETHOD( Advise )( THIS_ LPADVISESINK, DWORD FAR * ) PURE;
    STDMETHOD( Unadvise )( THIS_ DWORD ) PURE;
    STDMETHOD( EnumAdvise )( THIS_ LPENUMSTATDATA FAR * ) PURE;
    STDMETHOD( GetMiscStatus )( THIS_ DWORD, DWORD FAR * ) PURE;
    STDMETHOD( SetColorScheme )( THIS_ LPLOGPALETTE ) PURE;
};
typedef IOleObject FAR  *LPOLEOBJECT;

/* IOleClientSite interface */
#undef INTERFACE
#define INTERFACE   IOleClientSite
DECLARE_INTERFACE_( IOleClientSite, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleClientSite methods */
    STDMETHOD( SaveObject )( THIS ) PURE;
    STDMETHOD( GetMoniker )( THIS_ DWORD, DWORD, LPMONIKER FAR * ) PURE;
    STDMETHOD( GetContainer )( THIS_ LPOLECONTAINER FAR * ) PURE;
    STDMETHOD( ShowObject )( THIS ) PURE;
    STDMETHOD( OnShowWindow )( THIS_ BOOL ) PURE;
    STDMETHOD( RequestNewObjectLayout )( THIS ) PURE;
};
typedef IOleClientSite FAR  *LPOLECLIENTSITE;

/* IRunnableObject interface */
#undef INTERFACE
#define INTERFACE   IRunnableObject
DECLARE_INTERFACE_( IRunnableObject, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IRunnableObject methods */
    STDMETHOD( GetRunningClass )( THIS_ LPCLSID ) PURE;
    STDMETHOD( Run )( THIS_ LPBINDCTX ) PURE;
    STDMETHOD_( BOOL, IsRunning )( THIS ) PURE;
    STDMETHOD( LockRunning )( THIS_ BOOL, BOOL ) PURE;
    STDMETHOD( SetContainedObject )( THIS_ BOOL ) PURE;
};
typedef IRunnableObject FAR *LPRUNNABLEOBJECT;

/* IParseDisplayName interface */
#undef INTERFACE
#define INTERFACE   IParseDisplayName
DECLARE_INTERFACE_( IParseDisplayName, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IParseDisplayName methods */
    STDMETHOD( ParseDisplayName )( THIS_ LPBC, LPSTR, ULONG FAR *, LPMONIKER FAR * ) PURE;
};
typedef IParseDisplayName FAR   *LPPARSEDISPLAYNAME;

/* IOleContainer interface */
#undef INTERFACE
#define INTERFACE   IOleContainer
DECLARE_INTERFACE_( IOleContainer, IParseDisplayName ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IParseDisplayName methods */
    STDMETHOD( ParseDisplayName )( THIS_ LPBC, LPSTR, ULONG FAR *, LPMONIKER FAR * ) PURE;

    /* IOleContainer methods */
    STDMETHOD( EnumObjects )( THIS_ DWORD, LPENUMUNKNOWN FAR * ) PURE;
    STDMETHOD( LockContainer )( THIS_ BOOL ) PURE;
};
typedef IOleContainer FAR   *LPOLECONTAINER;

/* IOleItemContainer interface */
#undef INTERFACE
#define INTERFACE   IOleItemContainer
DECLARE_INTERFACE_( IOleItemContainer, IOleContainer ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IParseDisplayName methods */
    STDMETHOD( ParseDisplayName )( THIS_ LPBC, LPSTR, ULONG FAR *, LPMONIKER FAR * ) PURE;

    /* IOleContainer methods */
    STDMETHOD( EnumObjects )( THIS_ DWORD, LPENUMUNKNOWN FAR * ) PURE;
    STDMETHOD( LockContainer )( THIS_ BOOL ) PURE;

    /* IOleItemContainer methods */
    STDMETHOD( GetObject )( THIS_ LPSTR, DWORD, LPBINDCTX, REFIID, LPVOID FAR * ) PURE;
    STDMETHOD( GetObjectStorage )( THIS_ LPSTR, LPBINDCTX, REFIID, LPVOID FAR * ) PURE;
    STDMETHOD( IsRunning )( THIS_ LPSTR ) PURE;
};
typedef IOleItemContainer FAR   *LPOLEITEMCONTAINER;

/* IOleAdviseHolder interface */
#undef INTERFACE
#define INTERFACE   IOleAdviseHolder
DECLARE_INTERFACE_( IOleAdviseHolder, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleAdviseHolder methods */
    STDMETHOD( Advise )( THIS_ LPADVISESINK, DWORD FAR * ) PURE;
    STDMETHOD( Unadvise )( THIS_ DWORD ) PURE;
    STDMETHOD( EnumAdvise )( THIS_ LPENUMSTATDATA FAR * ) PURE;
    STDMETHOD( SendOnRename )( THIS_ LPMONIKER ) PURE;
    STDMETHOD( SendOnSave )( THIS ) PURE;
    STDMETHOD( SendOnClose )( THIS ) PURE;
};
typedef IOleAdviseHolder FAR    *LPOLEADVISEHOLDER;

/* IOleLink interface */
#undef INTERFACE
#define INTERFACE   IOleLink
DECLARE_INTERFACE_( IOleLink, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleLink methods */
    STDMETHOD( SetUpdateOptions )( THIS_ DWORD ) PURE;
    STDMETHOD( GetUpdateOptions )( THIS_ LPDWORD ) PURE;
    STDMETHOD( SetSourceMoniker )( THIS_ LPMONIKER, REFCLSID ) PURE;
    STDMETHOD( GetSourceMoniker )( THIS_ LPMONIKER FAR * ) PURE;
    STDMETHOD( SetSourceDisplayName )( THIS_ LPCSTR ) PURE;
    STDMETHOD( GetSourceDisplayName )( THIS_ LPSTR FAR * ) PURE;
    STDMETHOD( BindToSource )( THIS_ DWORD, LPBINDCTX ) PURE;
    STDMETHOD( BindIfRunning )( THIS ) PURE;
    STDMETHOD( GetBoundSource )( THIS_ LPUNKNOWN FAR * ) PURE;
    STDMETHOD( UnbindSource )( THIS ) PURE;
    STDMETHOD( Update )( THIS_ LPBINDCTX ) PURE;
};
typedef IOleLink FAR    *LPOLELINK;

/* IOleWindow interface */
#undef INTERFACE
#define INTERFACE   IOleWindow
DECLARE_INTERFACE_( IOleWindow, IUnknown ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleWindow methods */
    STDMETHOD( GetWindow )( THIS_ HWND FAR * ) PURE;
    STDMETHOD( ContextSensitiveHelp )( THIS_ BOOL ) PURE;
};
typedef IOleWindow FAR  *LPOLEWINDOW;

/* IOleInPlaceObject interface */
#undef INTERFACE
#define INTERFACE   IOleInPlaceObject
DECLARE_INTERFACE_( IOleInPlaceObject, IOleWindow ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleWindow methods */
    STDMETHOD( GetWindow )( THIS_ HWND FAR * ) PURE;
    STDMETHOD( ContextSensitiveHelp )( THIS_ BOOL ) PURE;

    /* IOleInPlaceObject methods */
    STDMETHOD( InPlaceDeactivate )( THIS ) PURE;
    STDMETHOD( UIDeactivate )( THIS ) PURE;
    STDMETHOD( SetObjectRects )( THIS_ LPCRECT, LPCRECT ) PURE;
    STDMETHOD( ReactivateAndUndo )( THIS ) PURE;
};
typedef IOleInPlaceObject FAR   *LPOLEINPLACEOBJECT;

/* IOleInPlaceActiveObject interface */
#undef INTERFACE
#define INTERFACE   IOleInPlaceActiveObject
DECLARE_INTERFACE_( IOleInPlaceActiveObject, IOleWindow ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleWindow methods */
    STDMETHOD( GetWindow )( THIS_ HWND FAR * ) PURE;
    STDMETHOD( ContextSensitiveHelp )( THIS_ BOOL ) PURE;

    /* IOleInPlaceActiveObject methods */
    STDMETHOD( TranslateAccelerator )( THIS_ LPMSG ) PURE;
    STDMETHOD( OnFrameWindowActivate )( THIS_ BOOL ) PURE;
    STDMETHOD( OnDocWindowActivate )( THIS_ BOOL ) PURE;
    STDMETHOD( ResizeBorder )( THIS_ LPCRECT, LPOLEINPLACEUIWINDOW, BOOL ) PURE;
    STDMETHOD( EnableModeless )( THIS_ BOOL ) PURE;
};
typedef IOleInPlaceActiveObject FAR *LPOLEINPLACEACTIVEOBJECT;

/* IOleInPlaceUIWindow interface */
#undef INTERFACE
#define INTERFACE   IOleInPlaceUIWindow
DECLARE_INTERFACE_( IOleInPlaceUIWindow, IOleWindow ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleWindow methods */
    STDMETHOD( GetWindow )( THIS_ HWND FAR * ) PURE;
    STDMETHOD( ContextSensitiveHelp )( THIS_ BOOL ) PURE;

    /* IOleInPlaceUIWindow methods */
    STDMETHOD( GetBorder )( THIS_ LPRECT ) PURE;
    STDMETHOD( RequestBorderSpace )( THIS_ LPCBORDERWIDTHS ) PURE;
    STDMETHOD( SetBorderSpace )( THIS_ LPCBORDERWIDTHS ) PURE;
    STDMETHOD( SetActiveObject )( THIS_ LPOLEINPLACEACTIVEOBJECT, LPCSTR ) PURE;
};
typedef IOleInPlaceUIWindow FAR *LPOLEINPLACEUIWINDOW;

/* IOleInPlaceFrame interface */
#undef INTERFACE
#define INTERFACE   IOleInPlaceFrame
DECLARE_INTERFACE_( IOleInPlaceFrame, IOleInPlaceUIWindow ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleWindow methods */
    STDMETHOD( GetWindow )( THIS_ HWND FAR * ) PURE;
    STDMETHOD( ContextSensitiveHelp )( THIS_ BOOL ) PURE;

    /* IOleInPlaceUIWindow methods */
    STDMETHOD( GetBorder )( THIS_ LPRECT ) PURE;
    STDMETHOD( RequestBorderSpace )( THIS_ LPCBORDERWIDTHS ) PURE;
    STDMETHOD( SetBorderSpace )( THIS_ LPCBORDERWIDTHS ) PURE;
    STDMETHOD( SetActiveObject )( THIS_ LPOLEINPLACEACTIVEOBJECT, LPCSTR ) PURE;

    /* IOleInPlaceFrame methods */
    STDMETHOD( InsertMenus )( THIS_ HMENU, LPOLEMENUGROUPWIDTHS ) PURE;
    STDMETHOD( SetMenu )( THIS_ HMENU, HOLEMENU, HWND ) PURE;
    STDMETHOD( RemoveMenus )( THIS_ HMENU ) PURE;
    STDMETHOD( SetStatusText )( THIS_ LPCSTR ) PURE;
    STDMETHOD( EnableModeless )( THIS_ BOOL ) PURE;
    STDMETHOD( TranslateAccelerator )( THIS_ LPMSG, WORD ) PURE;
};
typedef IOleInPlaceFrame FAR    *LPOLEINPLACEFRAME;

/* IOleInPlaceSite interface */
#undef INTERFACE
#define INTERFACE   IOleInPlaceSite
DECLARE_INTERFACE_( IOleInPlaceSite, IOleWindow ) {
    /* IUnknown methods */
    STDMETHOD( QueryInterface )( THIS_ REFIID, LPVOID FAR * ) PURE;
    STDMETHOD_( ULONG, AddRef )( THIS ) PURE;
    STDMETHOD_( ULONG, Release )( THIS ) PURE;

    /* IOleWindow methods */
    STDMETHOD( GetWindow )( THIS_ HWND FAR * ) PURE;
    STDMETHOD( ContextSensitiveHelp )( THIS_ BOOL ) PURE;

    /* IOleInPlaceSite methods */
    STDMETHOD( CanInPlaceActivate )( THIS ) PURE;
    STDMETHOD( OnInPlaceActivate )( THIS ) PURE;
    STDMETHOD( OnUIActivate )( THIS ) PURE;
    STDMETHOD( GetWindowContext )( THIS_ LPOLEINPLACEFRAME FAR *, LPOLEINPLACEUIWINDOW FAR *, LPRECT, LPRECT, LPOLEINPLACEFRAMEINFO ) PURE;
    STDMETHOD( Scroll )( THIS_ SIZE ) PURE;
    STDMETHOD( OnUIDeactivate )( THIS_ BOOL ) PURE;
    STDMETHOD( OnInPlaceDeactivate )( THIS ) PURE;
    STDMETHOD( DiscardUndoState )( THIS ) PURE;
    STDMETHOD( DeactivateAndUndo )( THIS ) PURE;
    STDMETHOD( OnPosRectChange )( THIS_ LPCRECT ) PURE;
};
typedef IOleInPlaceSite FAR *LPOLEINPLACESITE;

#include <dvobj.h>
#include <moniker.h>

/* Functions in OLE2.DLL */
STDAPI              CreateILockBytesOnHGlobal( HGLOBAL, BOOL, LPLOCKBYTES FAR * );
STDAPI              CreateOleAdviseHolder( LPOLEADVISEHOLDER FAR * );
STDAPI              CreateStreamOnHGlobal( HGLOBAL, BOOL, LPSTREAM FAR * );
STDAPI              DoDragDrop( LPDATAOBJECT, LPDROPSOURCE, DWORD, LPDWORD );
STDAPI              GetConvertStg( LPSTORAGE );
STDAPI              GetHGlobalFromILockBytes( LPLOCKBYTES, HGLOBAL FAR * );
STDAPI              GetHGlobalFromStream( LPSTREAM, HGLOBAL FAR * );
STDAPI_( BOOL )     IsAccelerator( HACCEL, int, LPMSG, WORD FAR * );
STDAPI_( DWORD )    OleBuildVersion( VOID );
STDAPI              OleConvertIStorageToOLESTREAM( LPSTORAGE, LPOLESTREAM );
STDAPI              OleConvertIStorageToOLESTREAMEx( LPSTORAGE, CLIPFORMAT, LONG, LONG, DWORD, LPSTGMEDIUM, LPOLESTREAM );
STDAPI              OleConvertOLESTREAMToIStorage( LPOLESTREAM, LPSTORAGE, const DVTARGETDEVICE FAR * );
STDAPI              OleConvertOLESTREAMToIStorageEx( LPOLESTREAM, LPSTORAGE, CLIPFORMAT FAR *, LONG FAR *, LONG FAR *, DWORD FAR *, LPSTGMEDIUM );
STDAPI              OleCreate( REFCLSID, REFIID, DWORD, LPFORMATETC, LPOLECLIENTSITE, LPSTORAGE, LPVOID FAR * );
STDAPI              OleCreateDefaultHandler( REFCLSID, LPUNKNOWN, REFIID, LPVOID FAR * );
STDAPI              OleCreateEmbeddingHelper( REFCLSID, LPUNKNOWN, DWORD, LPCLASSFACTORY, REFIID, LPVOID FAR * );
STDAPI              OleCreateFromData( LPDATAOBJECT, REFIID, DWORD, LPFORMATETC, LPOLECLIENTSITE, LPSTORAGE, LPVOID FAR * );
STDAPI              OleCreateFromFile( REFCLSID, LPCSTR, REFIID, DWORD, LPFORMATETC, LPOLECLIENTSITE, LPSTORAGE, LPVOID FAR * );
STDAPI              OleCreateLink( LPMONIKER, REFIID, DWORD, LPFORMATETC, LPOLECLIENTSITE, LPSTORAGE, LPVOID FAR * );
STDAPI              OleCreateLinkFromData( LPDATAOBJECT, REFIID, DWORD, LPFORMATETC, LPOLECLIENTSITE, LPSTORAGE, LPVOID FAR * );
STDAPI              OleCreateLinkToFile( LPCSTR, REFIID, DWORD, LPFORMATETC, LPOLECLIENTSITE, LPSTORAGE, LPVOID FAR * );
STDAPI_( HOLEMENU ) OleCreateMenuDescriptor( HMENU, LPOLEMENUGROUPWIDTHS );
STDAPI              OleCreateStaticFromData( LPDATAOBJECT, REFIID, DWORD, LPFORMATETC, LPOLECLIENTSITE, LPSTORAGE, LPVOID FAR * );
STDAPI              OleDestroyMenuDescriptor( HOLEMENU );
STDAPI              OleDoAutoConvert( LPSTORAGE, LPCLSID );
STDAPI              OleDraw( LPUNKNOWN, DWORD, HDC, LPCRECT );
STDAPI_( HANDLE )   OleDuplicateData( HANDLE, CLIPFORMAT, UINT );
STDAPI              OleFlushClipboard( void );
STDAPI              OleGetAutoConvert( REFCLSID, LPCLSID );
STDAPI              OleGetClipboard( LPDATAOBJECT FAR * );
STDAPI_( HGLOBAL )  OleGetIconOfClass( REFCLSID, LPSTR, BOOL );
STDAPI_( HGLOBAL )  OleGetIconOfFile( LPSTR, BOOL );
STDAPI              OleInitialize( LPMALLOC );
STDAPI              OleIsCurrentClipboard( LPDATAOBJECT );
STDAPI_( BOOL )     OleIsRunning( LPOLEOBJECT );
STDAPI              OleLoad( LPSTORAGE, REFIID, LPOLECLIENTSITE, LPVOID FAR * );
STDAPI              OleLoadFromStream( LPSTREAM, REFIID, LPVOID FAR * );
STDAPI              OleLockRunning( LPUNKNOWN, BOOL, BOOL );
STDAPI_( HGLOBAL )  OleMetafilePictFromIconAndLabel( HICON, LPSTR, LPSTR, UINT );
STDAPI              OleNoteObjectVisible( LPUNKNOWN, BOOL );
STDAPI              OleQueryCreateFromData( LPDATAOBJECT );
STDAPI              OleQueryLinkFromData( LPDATAOBJECT );
STDAPI              OleRegEnumFormatEtc( REFCLSID, DWORD, LPENUMFORMATETC FAR * );
STDAPI              OleRegEnumVerbs( REFCLSID, LPENUMOLEVERB FAR * );
STDAPI              OleRegGetMiscStatus( REFCLSID, DWORD, DWORD FAR * );
STDAPI              OleRegGetUserType( REFCLSID, DWORD, LPSTR FAR * );
STDAPI              OleRun( LPUNKNOWN );
STDAPI              OleSave( LPPERSISTSTORAGE, LPSTORAGE, BOOL );
STDAPI              OleSaveToStream( LPPERSISTSTREAM, LPSTREAM );
STDAPI              OleSetAutoConvert( REFCLSID, REFCLSID );
STDAPI              OleSetClipboard( LPDATAOBJECT );
STDAPI              OleSetContainedObject( LPUNKNOWN, BOOL );
STDAPI              OleSetMenuDescriptor( HOLEMENU, HWND, HWND, LPOLEINPLACEFRAME, LPOLEINPLACEACTIVEOBJECT );
STDAPI              OleTranslateAccelerator( LPOLEINPLACEFRAME, LPOLEINPLACEFRAMEINFO, LPMSG );
STDAPI_( void )     OleUninitialize( void );
STDAPI              ReadClassStg( LPSTORAGE, CLSID FAR * );
STDAPI              ReadClassStm( LPSTREAM, CLSID FAR * );
STDAPI              ReadFmtUserTypeStg( LPSTORAGE, CLIPFORMAT FAR *, LPSTR FAR * );
STDAPI              RegisterDragDrop( HWND, LPDROPTARGET );
STDAPI_( void )     ReleaseStgMedium( LPSTGMEDIUM );
STDAPI              RevokeDragDrop( HWND );
STDAPI              SetConvertStg( LPSTORAGE, BOOL );
STDAPI              WriteClassStg( LPSTORAGE, REFCLSID );
STDAPI              WriteClassStm( LPSTREAM, REFCLSID );
STDAPI              WriteFmtUserTypeStg( LPSTORAGE, CLIPFORMAT, LPSTR );

#ifndef INITGUID
    #include <oleguid.h>
#endif

#endif /* _OLE2_H_ */
