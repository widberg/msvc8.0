

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 6.00.0366 */
/* Compiler settings for shdeprecated_pub.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __shdeprecated_pub_h__
#define __shdeprecated_pub_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ITravelEntry_FWD_DEFINED__
#define __ITravelEntry_FWD_DEFINED__
typedef interface ITravelEntry ITravelEntry;
#endif 	/* __ITravelEntry_FWD_DEFINED__ */


#ifndef __ITravelLog_FWD_DEFINED__
#define __ITravelLog_FWD_DEFINED__
typedef interface ITravelLog ITravelLog;
#endif 	/* __ITravelLog_FWD_DEFINED__ */


#ifndef __IExpDispSupport_FWD_DEFINED__
#define __IExpDispSupport_FWD_DEFINED__
typedef interface IExpDispSupport IExpDispSupport;
#endif 	/* __IExpDispSupport_FWD_DEFINED__ */


#ifndef __IBrowserService_FWD_DEFINED__
#define __IBrowserService_FWD_DEFINED__
typedef interface IBrowserService IBrowserService;
#endif 	/* __IBrowserService_FWD_DEFINED__ */


#ifndef __IShellService_FWD_DEFINED__
#define __IShellService_FWD_DEFINED__
typedef interface IShellService IShellService;
#endif 	/* __IShellService_FWD_DEFINED__ */


#ifndef __IBrowserService2_FWD_DEFINED__
#define __IBrowserService2_FWD_DEFINED__
typedef interface IBrowserService2 IBrowserService2;
#endif 	/* __IBrowserService2_FWD_DEFINED__ */


#ifndef __IBrowserService3_FWD_DEFINED__
#define __IBrowserService3_FWD_DEFINED__
typedef interface IBrowserService3 IBrowserService3;
#endif 	/* __IBrowserService3_FWD_DEFINED__ */


/* header files for imported files */
#include "objidl.h"
#include "ocidl.h"
#include "shtypes.h"
#include "tlogstg.h"
#include "shobjidl.h"
#include "hlink.h"
#include "exdisp.h"

#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 

/* interface __MIDL_itf_shdeprecated_pub_0000 */
/* [local] */ 

#define TLOG_BACK  -1
#define TLOG_FORE   1

#define TLMENUF_INCLUDECURRENT      0x00000001
#define TLMENUF_CHECKCURRENT        (TLMENUF_INCLUDECURRENT | 0x00000002)
#define TLMENUF_BACK                0x00000010  // Default
#define TLMENUF_FORE                0x00000020
#define TLMENUF_BACKANDFORTH        (TLMENUF_BACK | TLMENUF_FORE | TLMENUF_INCLUDECURRENT)



extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_pub_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_pub_0000_v0_0_s_ifspec;

#ifndef __ITravelEntry_INTERFACE_DEFINED__
#define __ITravelEntry_INTERFACE_DEFINED__

/* interface ITravelEntry */
/* [helpcontext][helpstring][hidden][local][object][uuid] */ 


EXTERN_C const IID IID_ITravelEntry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F46EDB3B-BC2F-11d0-9412-00AA00A3EBD3")
    ITravelEntry : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Invoke( 
            /* [in] */ IUnknown *punk) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Update( 
            /* [in] */ IUnknown *punk,
            /* [in] */ BOOL fIsLocalAnchor) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetPidl( 
            /* [out] */ LPITEMIDLIST *ppidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelEntryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITravelEntry * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITravelEntry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITravelEntry * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITravelEntry * This,
            /* [in] */ IUnknown *punk);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Update )( 
            ITravelEntry * This,
            /* [in] */ IUnknown *punk,
            /* [in] */ BOOL fIsLocalAnchor);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetPidl )( 
            ITravelEntry * This,
            /* [out] */ LPITEMIDLIST *ppidl);
        
        END_INTERFACE
    } ITravelEntryVtbl;

    interface ITravelEntry
    {
        CONST_VTBL struct ITravelEntryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelEntry_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelEntry_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelEntry_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelEntry_Invoke(This,punk)	\
    (This)->lpVtbl -> Invoke(This,punk)

#define ITravelEntry_Update(This,punk,fIsLocalAnchor)	\
    (This)->lpVtbl -> Update(This,punk,fIsLocalAnchor)

#define ITravelEntry_GetPidl(This,ppidl)	\
    (This)->lpVtbl -> GetPidl(This,ppidl)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelEntry_Invoke_Proxy( 
    ITravelEntry * This,
    /* [in] */ IUnknown *punk);


void __RPC_STUB ITravelEntry_Invoke_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelEntry_Update_Proxy( 
    ITravelEntry * This,
    /* [in] */ IUnknown *punk,
    /* [in] */ BOOL fIsLocalAnchor);


void __RPC_STUB ITravelEntry_Update_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelEntry_GetPidl_Proxy( 
    ITravelEntry * This,
    /* [out] */ LPITEMIDLIST *ppidl);


void __RPC_STUB ITravelEntry_GetPidl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelEntry_INTERFACE_DEFINED__ */


#ifndef __ITravelLog_INTERFACE_DEFINED__
#define __ITravelLog_INTERFACE_DEFINED__

/* interface ITravelLog */
/* [helpcontext][helpstring][hidden][local][object][uuid] */ 


EXTERN_C const IID IID_ITravelLog;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("66A9CB08-4802-11d2-A561-00A0C92DBFE8")
    ITravelLog : public IUnknown
    {
    public:
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE AddEntry( 
            /* [in] */ IUnknown *punk,
            /* [in] */ BOOL fIsLocalAnchor) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UpdateEntry( 
            /* [in] */ IUnknown *punk,
            /* [in] */ BOOL fIsLocalAnchor) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE UpdateExternal( 
            /* [in] */ IUnknown *punk,
            /* [in] */ IUnknown *punkHLBrowseContext) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Travel( 
            /* [in] */ IUnknown *punk,
            /* [in] */ int iOffset) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetTravelEntry( 
            /* [in] */ IUnknown *punk,
            /* [in] */ int iOffset,
            /* [out][optional] */ ITravelEntry **ppte) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE FindTravelEntry( 
            /* [in] */ IUnknown *punk,
            /* [in] */ LPCITEMIDLIST pidl,
            /* [out] */ ITravelEntry **ppte) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE GetToolTipText( 
            /* [in] */ IUnknown *punk,
            /* [in] */ int iOffset,
            /* [in] */ int idsTemplate,
            /* [size_is][out] */ LPWSTR pwzText,
            /* [in] */ DWORD cchText) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE InsertMenuEntries( 
            /* [in] */ IUnknown *punk,
            /* [in] */ HMENU hmenu,
            /* [in] */ int nPos,
            /* [in] */ int idFirst,
            /* [in] */ int idLast,
            /* [in] */ DWORD dwFlags) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ ITravelLog **pptl) = 0;
        
        virtual /* [helpcontext][helpstring] */ DWORD STDMETHODCALLTYPE CountEntries( 
            /* [in] */ IUnknown *punk) = 0;
        
        virtual /* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE Revert( void) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct ITravelLogVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITravelLog * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITravelLog * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITravelLog * This);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *AddEntry )( 
            ITravelLog * This,
            /* [in] */ IUnknown *punk,
            /* [in] */ BOOL fIsLocalAnchor);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateEntry )( 
            ITravelLog * This,
            /* [in] */ IUnknown *punk,
            /* [in] */ BOOL fIsLocalAnchor);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *UpdateExternal )( 
            ITravelLog * This,
            /* [in] */ IUnknown *punk,
            /* [in] */ IUnknown *punkHLBrowseContext);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Travel )( 
            ITravelLog * This,
            /* [in] */ IUnknown *punk,
            /* [in] */ int iOffset);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetTravelEntry )( 
            ITravelLog * This,
            /* [in] */ IUnknown *punk,
            /* [in] */ int iOffset,
            /* [out][optional] */ ITravelEntry **ppte);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *FindTravelEntry )( 
            ITravelLog * This,
            /* [in] */ IUnknown *punk,
            /* [in] */ LPCITEMIDLIST pidl,
            /* [out] */ ITravelEntry **ppte);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetToolTipText )( 
            ITravelLog * This,
            /* [in] */ IUnknown *punk,
            /* [in] */ int iOffset,
            /* [in] */ int idsTemplate,
            /* [size_is][out] */ LPWSTR pwzText,
            /* [in] */ DWORD cchText);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *InsertMenuEntries )( 
            ITravelLog * This,
            /* [in] */ IUnknown *punk,
            /* [in] */ HMENU hmenu,
            /* [in] */ int nPos,
            /* [in] */ int idFirst,
            /* [in] */ int idLast,
            /* [in] */ DWORD dwFlags);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Clone )( 
            ITravelLog * This,
            /* [out] */ ITravelLog **pptl);
        
        /* [helpcontext][helpstring] */ DWORD ( STDMETHODCALLTYPE *CountEntries )( 
            ITravelLog * This,
            /* [in] */ IUnknown *punk);
        
        /* [helpcontext][helpstring] */ HRESULT ( STDMETHODCALLTYPE *Revert )( 
            ITravelLog * This);
        
        END_INTERFACE
    } ITravelLogVtbl;

    interface ITravelLog
    {
        CONST_VTBL struct ITravelLogVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITravelLog_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define ITravelLog_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define ITravelLog_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define ITravelLog_AddEntry(This,punk,fIsLocalAnchor)	\
    (This)->lpVtbl -> AddEntry(This,punk,fIsLocalAnchor)

#define ITravelLog_UpdateEntry(This,punk,fIsLocalAnchor)	\
    (This)->lpVtbl -> UpdateEntry(This,punk,fIsLocalAnchor)

#define ITravelLog_UpdateExternal(This,punk,punkHLBrowseContext)	\
    (This)->lpVtbl -> UpdateExternal(This,punk,punkHLBrowseContext)

#define ITravelLog_Travel(This,punk,iOffset)	\
    (This)->lpVtbl -> Travel(This,punk,iOffset)

#define ITravelLog_GetTravelEntry(This,punk,iOffset,ppte)	\
    (This)->lpVtbl -> GetTravelEntry(This,punk,iOffset,ppte)

#define ITravelLog_FindTravelEntry(This,punk,pidl,ppte)	\
    (This)->lpVtbl -> FindTravelEntry(This,punk,pidl,ppte)

#define ITravelLog_GetToolTipText(This,punk,iOffset,idsTemplate,pwzText,cchText)	\
    (This)->lpVtbl -> GetToolTipText(This,punk,iOffset,idsTemplate,pwzText,cchText)

#define ITravelLog_InsertMenuEntries(This,punk,hmenu,nPos,idFirst,idLast,dwFlags)	\
    (This)->lpVtbl -> InsertMenuEntries(This,punk,hmenu,nPos,idFirst,idLast,dwFlags)

#define ITravelLog_Clone(This,pptl)	\
    (This)->lpVtbl -> Clone(This,pptl)

#define ITravelLog_CountEntries(This,punk)	\
    (This)->lpVtbl -> CountEntries(This,punk)

#define ITravelLog_Revert(This)	\
    (This)->lpVtbl -> Revert(This)

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_AddEntry_Proxy( 
    ITravelLog * This,
    /* [in] */ IUnknown *punk,
    /* [in] */ BOOL fIsLocalAnchor);


void __RPC_STUB ITravelLog_AddEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_UpdateEntry_Proxy( 
    ITravelLog * This,
    /* [in] */ IUnknown *punk,
    /* [in] */ BOOL fIsLocalAnchor);


void __RPC_STUB ITravelLog_UpdateEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_UpdateExternal_Proxy( 
    ITravelLog * This,
    /* [in] */ IUnknown *punk,
    /* [in] */ IUnknown *punkHLBrowseContext);


void __RPC_STUB ITravelLog_UpdateExternal_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_Travel_Proxy( 
    ITravelLog * This,
    /* [in] */ IUnknown *punk,
    /* [in] */ int iOffset);


void __RPC_STUB ITravelLog_Travel_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_GetTravelEntry_Proxy( 
    ITravelLog * This,
    /* [in] */ IUnknown *punk,
    /* [in] */ int iOffset,
    /* [out][optional] */ ITravelEntry **ppte);


void __RPC_STUB ITravelLog_GetTravelEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_FindTravelEntry_Proxy( 
    ITravelLog * This,
    /* [in] */ IUnknown *punk,
    /* [in] */ LPCITEMIDLIST pidl,
    /* [out] */ ITravelEntry **ppte);


void __RPC_STUB ITravelLog_FindTravelEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_GetToolTipText_Proxy( 
    ITravelLog * This,
    /* [in] */ IUnknown *punk,
    /* [in] */ int iOffset,
    /* [in] */ int idsTemplate,
    /* [size_is][out] */ LPWSTR pwzText,
    /* [in] */ DWORD cchText);


void __RPC_STUB ITravelLog_GetToolTipText_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_InsertMenuEntries_Proxy( 
    ITravelLog * This,
    /* [in] */ IUnknown *punk,
    /* [in] */ HMENU hmenu,
    /* [in] */ int nPos,
    /* [in] */ int idFirst,
    /* [in] */ int idLast,
    /* [in] */ DWORD dwFlags);


void __RPC_STUB ITravelLog_InsertMenuEntries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_Clone_Proxy( 
    ITravelLog * This,
    /* [out] */ ITravelLog **pptl);


void __RPC_STUB ITravelLog_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ DWORD STDMETHODCALLTYPE ITravelLog_CountEntries_Proxy( 
    ITravelLog * This,
    /* [in] */ IUnknown *punk);


void __RPC_STUB ITravelLog_CountEntries_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


/* [helpcontext][helpstring] */ HRESULT STDMETHODCALLTYPE ITravelLog_Revert_Proxy( 
    ITravelLog * This);


void __RPC_STUB ITravelLog_Revert_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __ITravelLog_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shdeprecated_pub_0404 */
/* [local] */ 

#ifdef __cplusplus
class CIE4ConnectionPoint : public IConnectionPoint
{
    // This is how you actually fire the events
    // Those called by shell32 are virtual
    virtual HRESULT DoInvokeIE4(BOOL *pf, void **ppv, DISPID dispid, DISPPARAMS *pdispparams) PURE;
    // This helper function does work that callers of DoInvoke often need done
    virtual HRESULT DoInvokePIDLIE4(DISPID dispid, LPCITEMIDLIST pidl, BOOL fCanCancel) PURE;
};
#else // !__cplusplus
typedef void *CIE4ConnectionPoint;

#endif// !__cplusplus


extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_pub_0404_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_pub_0404_v0_0_s_ifspec;

#ifndef __IExpDispSupport_INTERFACE_DEFINED__
#define __IExpDispSupport_INTERFACE_DEFINED__

/* interface IExpDispSupport */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IExpDispSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0D7D1D00-6FC0-11D0-A974-00C04FD705A2")
    IExpDispSupport : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE FindCIE4ConnectionPoint( 
            REFIID riid,
            CIE4ConnectionPoint **ppccp) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnTranslateAccelerator( 
            MSG *pMsg,
            DWORD grfModifiers) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnInvoke( 
            DISPID dispidMember,
            REFIID iid,
            LCID lcid,
            WORD wFlags,
            DISPPARAMS *pdispparams,
            VARIANT *pVarResult,
            EXCEPINFO *pexcepinfo,
            UINT *puArgErr) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IExpDispSupportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IExpDispSupport * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IExpDispSupport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IExpDispSupport * This);
        
        HRESULT ( STDMETHODCALLTYPE *FindCIE4ConnectionPoint )( 
            IExpDispSupport * This,
            REFIID riid,
            CIE4ConnectionPoint **ppccp);
        
        HRESULT ( STDMETHODCALLTYPE *OnTranslateAccelerator )( 
            IExpDispSupport * This,
            MSG *pMsg,
            DWORD grfModifiers);
        
        HRESULT ( STDMETHODCALLTYPE *OnInvoke )( 
            IExpDispSupport * This,
            DISPID dispidMember,
            REFIID iid,
            LCID lcid,
            WORD wFlags,
            DISPPARAMS *pdispparams,
            VARIANT *pVarResult,
            EXCEPINFO *pexcepinfo,
            UINT *puArgErr);
        
        END_INTERFACE
    } IExpDispSupportVtbl;

    interface IExpDispSupport
    {
        CONST_VTBL struct IExpDispSupportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IExpDispSupport_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IExpDispSupport_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IExpDispSupport_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IExpDispSupport_FindCIE4ConnectionPoint(This,riid,ppccp)	\
    (This)->lpVtbl -> FindCIE4ConnectionPoint(This,riid,ppccp)

#define IExpDispSupport_OnTranslateAccelerator(This,pMsg,grfModifiers)	\
    (This)->lpVtbl -> OnTranslateAccelerator(This,pMsg,grfModifiers)

#define IExpDispSupport_OnInvoke(This,dispidMember,iid,lcid,wFlags,pdispparams,pVarResult,pexcepinfo,puArgErr)	\
    (This)->lpVtbl -> OnInvoke(This,dispidMember,iid,lcid,wFlags,pdispparams,pVarResult,pexcepinfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IExpDispSupport_FindCIE4ConnectionPoint_Proxy( 
    IExpDispSupport * This,
    REFIID riid,
    CIE4ConnectionPoint **ppccp);


void __RPC_STUB IExpDispSupport_FindCIE4ConnectionPoint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IExpDispSupport_OnTranslateAccelerator_Proxy( 
    IExpDispSupport * This,
    MSG *pMsg,
    DWORD grfModifiers);


void __RPC_STUB IExpDispSupport_OnTranslateAccelerator_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IExpDispSupport_OnInvoke_Proxy( 
    IExpDispSupport * This,
    DISPID dispidMember,
    REFIID iid,
    LCID lcid,
    WORD wFlags,
    DISPPARAMS *pdispparams,
    VARIANT *pVarResult,
    EXCEPINFO *pexcepinfo,
    UINT *puArgErr);


void __RPC_STUB IExpDispSupport_OnInvoke_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IExpDispSupport_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shdeprecated_pub_0405 */
/* [local] */ 

typedef /* [v1_enum] */ 
enum tagBNSTATE
    {	BNS_NORMAL	= 0,
	BNS_BEGIN_NAVIGATE	= 1,
	BNS_NAVIGATE	= 2
    } 	BNSTATE;


enum __MIDL___MIDL_itf_shdeprecated_pub_0405_0001
    {	SBSC_HIDE	= 0,
	SBSC_SHOW	= 1,
	SBSC_TOGGLE	= 2,
	SBSC_QUERY	= 3
    } ;
//  values for IBrowserService::Get/SetFlags()
#define BSF_REGISTERASDROPTARGET   0x00000001
#define BSF_THEATERMODE            0x00000002
#define BSF_NOLOCALFILEWARNING     0x00000010
#define BSF_UISETBYAUTOMATION      0x00000100
#define BSF_RESIZABLE              0x00000200
#define BSF_CANMAXIMIZE            0x00000400
#define BSF_TOPBROWSER             0x00000800
#define BSF_NAVNOHISTORY           0x00001000
#define BSF_HTMLNAVCANCELED        0x00002000
#define BSF_DONTSHOWNAVCANCELPAGE  0x00004000
#define BSF_SETNAVIGATABLECODEPAGE 0x00008000
#define BSF_DELEGATEDNAVIGATION    0x00010000
#define BSF_TRUSTEDFORACTIVEX      0x00020000
#define HLNF_CALLERUNTRUSTED            0x00200000  // The navigate was possibly initiated by a web page by scripting code already on the system
#define HLNF_TRUSTEDFORACTIVEX          0x00400000  // The navigate should allow ActiveX prompts.
#define HLNF_DISABLEWINDOWRESTRICTIONS  0x00800000  // New window is created by url in zone that has the window restrictions security mitigation disabled
#define HLNF_TRUSTFIRSTDOWNLOAD         0x01000000  // New window is result of user initiated action.  Trust it if it immediatly trys to download.
#define HLNF_UNTRUSTEDFORDOWNLOAD       0x02000000  // Trident is navigating to an untrusted non-html file.  If we try to download it, do not.
#define SHHLNF_NOAUTOSELECT             0x04000000  // This navigate should not automatically select History ShellFolder
#define SHHLNF_WRITENOHISTORY           0x08000000  // This navigate should not go in the History ShellFolder
#define HLNF_EXTERNALNAVIGATE           0x10000000
#define HLNF_ALLOW_AUTONAVIGATE         0x20000000
#define HLNF_NEWWINDOWSMANAGED          0x80000000  // If this navigate results in a new window, it should be subject to popup manager.


extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_pub_0405_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_pub_0405_v0_0_s_ifspec;

#ifndef __IBrowserService_INTERFACE_DEFINED__
#define __IBrowserService_INTERFACE_DEFINED__

/* interface IBrowserService */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IBrowserService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("02ba3b52-0547-11d1-b833-00c04fc9b31f")
    IBrowserService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE GetParentSite( 
            /* [out] */ IOleInPlaceSite **ppipsite) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTitle( 
            IShellView *psv,
            LPCWSTR pszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTitle( 
            IShellView *psv,
            /* [size_is][out] */ LPWSTR pszName,
            DWORD cchName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetOleObject( 
            /* [out] */ IOleObject **ppobjv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetTravelLog( 
            /* [out] */ ITravelLog **pptl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ShowControlWindow( 
            UINT id,
            BOOL fShow) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IsControlWindowShown( 
            UINT id,
            /* [out] */ BOOL *pfShown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IEGetDisplayName( 
            LPCITEMIDLIST pidl,
            /* [out] */ LPWSTR pwszName,
            UINT uFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IEParseDisplayName( 
            UINT uiCP,
            LPCWSTR pwszPath,
            /* [out] */ LPITEMIDLIST *ppidlOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE DisplayParseError( 
            HRESULT hres,
            LPCWSTR pwszPath) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NavigateToPidl( 
            LPCITEMIDLIST pidl,
            DWORD grfHLNF) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetNavigateState( 
            BNSTATE bnstate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetNavigateState( 
            /* [out] */ BNSTATE *pbnstate) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE NotifyRedirect( 
            IShellView *psv,
            LPCITEMIDLIST pidl,
            /* [out] */ BOOL *pfDidBrowse) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateWindowList( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateBackForwardState( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetFlags( 
            DWORD dwFlags,
            DWORD dwFlagMask) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFlags( 
            /* [out] */ DWORD *pdwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CanNavigateNow( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPidl( 
            /* [out] */ LPITEMIDLIST *ppidl) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetReferrer( 
            LPITEMIDLIST pidl) = 0;
        
        virtual DWORD STDMETHODCALLTYPE GetBrowserIndex( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBrowserByIndex( 
            DWORD dwID,
            /* [out] */ IUnknown **ppunk) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetHistoryObject( 
            /* [out] */ IOleObject **ppole,
            /* [out] */ IStream **pstm,
            /* [out] */ IBindCtx **ppbc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetHistoryObject( 
            IOleObject *pole,
            BOOL fIsLocalAnchor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CacheOLEServer( 
            IOleObject *pole) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetSetCodePage( 
            /* [in] */ VARIANT *pvarIn,
            /* [out] */ VARIANT *pvarOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnHttpEquiv( 
            IShellView *psv,
            BOOL fDone,
            /* [in] */ VARIANT *pvarargIn,
            /* [out] */ VARIANT *pvarargOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetPalette( 
            /* [out] */ HPALETTE *hpal) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE RegisterWindow( 
            BOOL fForceRegister,
            int swc) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBrowserServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBrowserService * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBrowserService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBrowserService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentSite )( 
            IBrowserService * This,
            /* [out] */ IOleInPlaceSite **ppipsite);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            IBrowserService * This,
            IShellView *psv,
            LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            IBrowserService * This,
            IShellView *psv,
            /* [size_is][out] */ LPWSTR pszName,
            DWORD cchName);
        
        HRESULT ( STDMETHODCALLTYPE *GetOleObject )( 
            IBrowserService * This,
            /* [out] */ IOleObject **ppobjv);
        
        HRESULT ( STDMETHODCALLTYPE *GetTravelLog )( 
            IBrowserService * This,
            /* [out] */ ITravelLog **pptl);
        
        HRESULT ( STDMETHODCALLTYPE *ShowControlWindow )( 
            IBrowserService * This,
            UINT id,
            BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsControlWindowShown )( 
            IBrowserService * This,
            UINT id,
            /* [out] */ BOOL *pfShown);
        
        HRESULT ( STDMETHODCALLTYPE *IEGetDisplayName )( 
            IBrowserService * This,
            LPCITEMIDLIST pidl,
            /* [out] */ LPWSTR pwszName,
            UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *IEParseDisplayName )( 
            IBrowserService * This,
            UINT uiCP,
            LPCWSTR pwszPath,
            /* [out] */ LPITEMIDLIST *ppidlOut);
        
        HRESULT ( STDMETHODCALLTYPE *DisplayParseError )( 
            IBrowserService * This,
            HRESULT hres,
            LPCWSTR pwszPath);
        
        HRESULT ( STDMETHODCALLTYPE *NavigateToPidl )( 
            IBrowserService * This,
            LPCITEMIDLIST pidl,
            DWORD grfHLNF);
        
        HRESULT ( STDMETHODCALLTYPE *SetNavigateState )( 
            IBrowserService * This,
            BNSTATE bnstate);
        
        HRESULT ( STDMETHODCALLTYPE *GetNavigateState )( 
            IBrowserService * This,
            /* [out] */ BNSTATE *pbnstate);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyRedirect )( 
            IBrowserService * This,
            IShellView *psv,
            LPCITEMIDLIST pidl,
            /* [out] */ BOOL *pfDidBrowse);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateWindowList )( 
            IBrowserService * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateBackForwardState )( 
            IBrowserService * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IBrowserService * This,
            DWORD dwFlags,
            DWORD dwFlagMask);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IBrowserService * This,
            /* [out] */ DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *CanNavigateNow )( 
            IBrowserService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPidl )( 
            IBrowserService * This,
            /* [out] */ LPITEMIDLIST *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *SetReferrer )( 
            IBrowserService * This,
            LPITEMIDLIST pidl);
        
        DWORD ( STDMETHODCALLTYPE *GetBrowserIndex )( 
            IBrowserService * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBrowserByIndex )( 
            IBrowserService * This,
            DWORD dwID,
            /* [out] */ IUnknown **ppunk);
        
        HRESULT ( STDMETHODCALLTYPE *GetHistoryObject )( 
            IBrowserService * This,
            /* [out] */ IOleObject **ppole,
            /* [out] */ IStream **pstm,
            /* [out] */ IBindCtx **ppbc);
        
        HRESULT ( STDMETHODCALLTYPE *SetHistoryObject )( 
            IBrowserService * This,
            IOleObject *pole,
            BOOL fIsLocalAnchor);
        
        HRESULT ( STDMETHODCALLTYPE *CacheOLEServer )( 
            IBrowserService * This,
            IOleObject *pole);
        
        HRESULT ( STDMETHODCALLTYPE *GetSetCodePage )( 
            IBrowserService * This,
            /* [in] */ VARIANT *pvarIn,
            /* [out] */ VARIANT *pvarOut);
        
        HRESULT ( STDMETHODCALLTYPE *OnHttpEquiv )( 
            IBrowserService * This,
            IShellView *psv,
            BOOL fDone,
            /* [in] */ VARIANT *pvarargIn,
            /* [out] */ VARIANT *pvarargOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetPalette )( 
            IBrowserService * This,
            /* [out] */ HPALETTE *hpal);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWindow )( 
            IBrowserService * This,
            BOOL fForceRegister,
            int swc);
        
        END_INTERFACE
    } IBrowserServiceVtbl;

    interface IBrowserService
    {
        CONST_VTBL struct IBrowserServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBrowserService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBrowserService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBrowserService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBrowserService_GetParentSite(This,ppipsite)	\
    (This)->lpVtbl -> GetParentSite(This,ppipsite)

#define IBrowserService_SetTitle(This,psv,pszName)	\
    (This)->lpVtbl -> SetTitle(This,psv,pszName)

#define IBrowserService_GetTitle(This,psv,pszName,cchName)	\
    (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName)

#define IBrowserService_GetOleObject(This,ppobjv)	\
    (This)->lpVtbl -> GetOleObject(This,ppobjv)

#define IBrowserService_GetTravelLog(This,pptl)	\
    (This)->lpVtbl -> GetTravelLog(This,pptl)

#define IBrowserService_ShowControlWindow(This,id,fShow)	\
    (This)->lpVtbl -> ShowControlWindow(This,id,fShow)

#define IBrowserService_IsControlWindowShown(This,id,pfShown)	\
    (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown)

#define IBrowserService_IEGetDisplayName(This,pidl,pwszName,uFlags)	\
    (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags)

#define IBrowserService_IEParseDisplayName(This,uiCP,pwszPath,ppidlOut)	\
    (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut)

#define IBrowserService_DisplayParseError(This,hres,pwszPath)	\
    (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath)

#define IBrowserService_NavigateToPidl(This,pidl,grfHLNF)	\
    (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF)

#define IBrowserService_SetNavigateState(This,bnstate)	\
    (This)->lpVtbl -> SetNavigateState(This,bnstate)

#define IBrowserService_GetNavigateState(This,pbnstate)	\
    (This)->lpVtbl -> GetNavigateState(This,pbnstate)

#define IBrowserService_NotifyRedirect(This,psv,pidl,pfDidBrowse)	\
    (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse)

#define IBrowserService_UpdateWindowList(This)	\
    (This)->lpVtbl -> UpdateWindowList(This)

#define IBrowserService_UpdateBackForwardState(This)	\
    (This)->lpVtbl -> UpdateBackForwardState(This)

#define IBrowserService_SetFlags(This,dwFlags,dwFlagMask)	\
    (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask)

#define IBrowserService_GetFlags(This,pdwFlags)	\
    (This)->lpVtbl -> GetFlags(This,pdwFlags)

#define IBrowserService_CanNavigateNow(This)	\
    (This)->lpVtbl -> CanNavigateNow(This)

#define IBrowserService_GetPidl(This,ppidl)	\
    (This)->lpVtbl -> GetPidl(This,ppidl)

#define IBrowserService_SetReferrer(This,pidl)	\
    (This)->lpVtbl -> SetReferrer(This,pidl)

#define IBrowserService_GetBrowserIndex(This)	\
    (This)->lpVtbl -> GetBrowserIndex(This)

#define IBrowserService_GetBrowserByIndex(This,dwID,ppunk)	\
    (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk)

#define IBrowserService_GetHistoryObject(This,ppole,pstm,ppbc)	\
    (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc)

#define IBrowserService_SetHistoryObject(This,pole,fIsLocalAnchor)	\
    (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor)

#define IBrowserService_CacheOLEServer(This,pole)	\
    (This)->lpVtbl -> CacheOLEServer(This,pole)

#define IBrowserService_GetSetCodePage(This,pvarIn,pvarOut)	\
    (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut)

#define IBrowserService_OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut)	\
    (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut)

#define IBrowserService_GetPalette(This,hpal)	\
    (This)->lpVtbl -> GetPalette(This,hpal)

#define IBrowserService_RegisterWindow(This,fForceRegister,swc)	\
    (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IBrowserService_GetParentSite_Proxy( 
    IBrowserService * This,
    /* [out] */ IOleInPlaceSite **ppipsite);


void __RPC_STUB IBrowserService_GetParentSite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_SetTitle_Proxy( 
    IBrowserService * This,
    IShellView *psv,
    LPCWSTR pszName);


void __RPC_STUB IBrowserService_SetTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetTitle_Proxy( 
    IBrowserService * This,
    IShellView *psv,
    /* [size_is][out] */ LPWSTR pszName,
    DWORD cchName);


void __RPC_STUB IBrowserService_GetTitle_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetOleObject_Proxy( 
    IBrowserService * This,
    /* [out] */ IOleObject **ppobjv);


void __RPC_STUB IBrowserService_GetOleObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetTravelLog_Proxy( 
    IBrowserService * This,
    /* [out] */ ITravelLog **pptl);


void __RPC_STUB IBrowserService_GetTravelLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_ShowControlWindow_Proxy( 
    IBrowserService * This,
    UINT id,
    BOOL fShow);


void __RPC_STUB IBrowserService_ShowControlWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_IsControlWindowShown_Proxy( 
    IBrowserService * This,
    UINT id,
    /* [out] */ BOOL *pfShown);


void __RPC_STUB IBrowserService_IsControlWindowShown_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_IEGetDisplayName_Proxy( 
    IBrowserService * This,
    LPCITEMIDLIST pidl,
    /* [out] */ LPWSTR pwszName,
    UINT uFlags);


void __RPC_STUB IBrowserService_IEGetDisplayName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_IEParseDisplayName_Proxy( 
    IBrowserService * This,
    UINT uiCP,
    LPCWSTR pwszPath,
    /* [out] */ LPITEMIDLIST *ppidlOut);


void __RPC_STUB IBrowserService_IEParseDisplayName_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_DisplayParseError_Proxy( 
    IBrowserService * This,
    HRESULT hres,
    LPCWSTR pwszPath);


void __RPC_STUB IBrowserService_DisplayParseError_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_NavigateToPidl_Proxy( 
    IBrowserService * This,
    LPCITEMIDLIST pidl,
    DWORD grfHLNF);


void __RPC_STUB IBrowserService_NavigateToPidl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_SetNavigateState_Proxy( 
    IBrowserService * This,
    BNSTATE bnstate);


void __RPC_STUB IBrowserService_SetNavigateState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetNavigateState_Proxy( 
    IBrowserService * This,
    /* [out] */ BNSTATE *pbnstate);


void __RPC_STUB IBrowserService_GetNavigateState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_NotifyRedirect_Proxy( 
    IBrowserService * This,
    IShellView *psv,
    LPCITEMIDLIST pidl,
    /* [out] */ BOOL *pfDidBrowse);


void __RPC_STUB IBrowserService_NotifyRedirect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_UpdateWindowList_Proxy( 
    IBrowserService * This);


void __RPC_STUB IBrowserService_UpdateWindowList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_UpdateBackForwardState_Proxy( 
    IBrowserService * This);


void __RPC_STUB IBrowserService_UpdateBackForwardState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_SetFlags_Proxy( 
    IBrowserService * This,
    DWORD dwFlags,
    DWORD dwFlagMask);


void __RPC_STUB IBrowserService_SetFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetFlags_Proxy( 
    IBrowserService * This,
    /* [out] */ DWORD *pdwFlags);


void __RPC_STUB IBrowserService_GetFlags_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_CanNavigateNow_Proxy( 
    IBrowserService * This);


void __RPC_STUB IBrowserService_CanNavigateNow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetPidl_Proxy( 
    IBrowserService * This,
    /* [out] */ LPITEMIDLIST *ppidl);


void __RPC_STUB IBrowserService_GetPidl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_SetReferrer_Proxy( 
    IBrowserService * This,
    LPITEMIDLIST pidl);


void __RPC_STUB IBrowserService_SetReferrer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


DWORD STDMETHODCALLTYPE IBrowserService_GetBrowserIndex_Proxy( 
    IBrowserService * This);


void __RPC_STUB IBrowserService_GetBrowserIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetBrowserByIndex_Proxy( 
    IBrowserService * This,
    DWORD dwID,
    /* [out] */ IUnknown **ppunk);


void __RPC_STUB IBrowserService_GetBrowserByIndex_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetHistoryObject_Proxy( 
    IBrowserService * This,
    /* [out] */ IOleObject **ppole,
    /* [out] */ IStream **pstm,
    /* [out] */ IBindCtx **ppbc);


void __RPC_STUB IBrowserService_GetHistoryObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_SetHistoryObject_Proxy( 
    IBrowserService * This,
    IOleObject *pole,
    BOOL fIsLocalAnchor);


void __RPC_STUB IBrowserService_SetHistoryObject_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_CacheOLEServer_Proxy( 
    IBrowserService * This,
    IOleObject *pole);


void __RPC_STUB IBrowserService_CacheOLEServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetSetCodePage_Proxy( 
    IBrowserService * This,
    /* [in] */ VARIANT *pvarIn,
    /* [out] */ VARIANT *pvarOut);


void __RPC_STUB IBrowserService_GetSetCodePage_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_OnHttpEquiv_Proxy( 
    IBrowserService * This,
    IShellView *psv,
    BOOL fDone,
    /* [in] */ VARIANT *pvarargIn,
    /* [out] */ VARIANT *pvarargOut);


void __RPC_STUB IBrowserService_OnHttpEquiv_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_GetPalette_Proxy( 
    IBrowserService * This,
    /* [out] */ HPALETTE *hpal);


void __RPC_STUB IBrowserService_GetPalette_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService_RegisterWindow_Proxy( 
    IBrowserService * This,
    BOOL fForceRegister,
    int swc);


void __RPC_STUB IBrowserService_RegisterWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBrowserService_INTERFACE_DEFINED__ */


#ifndef __IShellService_INTERFACE_DEFINED__
#define __IShellService_INTERFACE_DEFINED__

/* interface IShellService */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IShellService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5836FB00-8187-11CF-A12B-00AA004AE837")
    IShellService : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetOwner( 
            IUnknown *punkOwner) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IShellServiceVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShellService * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShellService * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShellService * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetOwner )( 
            IShellService * This,
            IUnknown *punkOwner);
        
        END_INTERFACE
    } IShellServiceVtbl;

    interface IShellService
    {
        CONST_VTBL struct IShellServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShellService_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IShellService_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IShellService_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IShellService_SetOwner(This,punkOwner)	\
    (This)->lpVtbl -> SetOwner(This,punkOwner)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IShellService_SetOwner_Proxy( 
    IShellService * This,
    IUnknown *punkOwner);


void __RPC_STUB IShellService_SetOwner_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IShellService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_shdeprecated_pub_0407 */
/* [local] */ 


enum __MIDL___MIDL_itf_shdeprecated_pub_0407_0001
    {	SECURELOCK_NOCHANGE	= -1,
	SECURELOCK_SET_UNSECURE	= 0,
	SECURELOCK_SET_MIXED	= SECURELOCK_SET_UNSECURE + 1,
	SECURELOCK_SET_SECUREUNKNOWNBIT	= SECURELOCK_SET_MIXED + 1,
	SECURELOCK_SET_SECURE40BIT	= SECURELOCK_SET_SECUREUNKNOWNBIT + 1,
	SECURELOCK_SET_SECURE56BIT	= SECURELOCK_SET_SECURE40BIT + 1,
	SECURELOCK_SET_FORTEZZA	= SECURELOCK_SET_SECURE56BIT + 1,
	SECURELOCK_SET_SECURE128BIT	= SECURELOCK_SET_FORTEZZA + 1,
	SECURELOCK_FIRSTSUGGEST	= SECURELOCK_SET_SECURE128BIT + 1,
	SECURELOCK_SUGGEST_UNSECURE	= SECURELOCK_FIRSTSUGGEST,
	SECURELOCK_SUGGEST_MIXED	= SECURELOCK_SUGGEST_UNSECURE + 1,
	SECURELOCK_SUGGEST_SECUREUNKNOWNBIT	= SECURELOCK_SUGGEST_MIXED + 1,
	SECURELOCK_SUGGEST_SECURE40BIT	= SECURELOCK_SUGGEST_SECUREUNKNOWNBIT + 1,
	SECURELOCK_SUGGEST_SECURE56BIT	= SECURELOCK_SUGGEST_SECURE40BIT + 1,
	SECURELOCK_SUGGEST_FORTEZZA	= SECURELOCK_SUGGEST_SECURE56BIT + 1,
	SECURELOCK_SUGGEST_SECURE128BIT	= SECURELOCK_SUGGEST_FORTEZZA + 1
    } ;
#include <pshpack8.h>
typedef /* [public][public][public] */ struct __MIDL___MIDL_itf_shdeprecated_pub_0407_0002
    {
    HWND _hwnd;
    ITravelLog *_ptl;
    IHlinkFrame *_phlf;
    IWebBrowser2 *_pautoWB2;
    IExpDispSupport *_pautoEDS;
    IShellService *_pautoSS;
    int _eSecureLockIcon;
    DWORD _fCreatingViewWindow	: 1;
    UINT _uActivateState;
    LPCITEMIDLIST _pidlNewShellView;
    IOleCommandTarget *_pctView;
    LPITEMIDLIST _pidlCur;
    IShellView *_psv;
    IShellFolder *_psf;
    HWND _hwndView;
    LPWSTR _pszTitleCur;
    LPITEMIDLIST _pidlPending;
    IShellView *_psvPending;
    IShellFolder *_psfPending;
    HWND _hwndViewPending;
    LPWSTR _pszTitlePending;
    BOOL _fIsViewMSHTML;
    BOOL _fPrivacyImpacted;
    } 	BASEBROWSERDATA;

typedef struct __MIDL___MIDL_itf_shdeprecated_pub_0407_0002 *LPBASEBROWSERDATA;

typedef const BASEBROWSERDATA *LPCBASEBROWSERDATA;

#define VIEW_PRIORITY_RESTRICTED    0x00000070  // a shell restriction is in place that forces this view to be the one we use
#define VIEW_PRIORITY_CACHEHIT      0x00000050  // we have registry info for the view, so the user has been there before
#define VIEW_PRIORITY_STALECACHEHIT 0x00000045  // we have stale registry info for the view, so we fall back to the 'all folders like this' default
#define VIEW_PRIORITY_USEASDEFAULT  0x00000043  // 'Use As Default' is more important than shellext, but less than a stale cache
#define VIEW_PRIORITY_SHELLEXT      0x00000040  // next we let the shell extension have its say
#define VIEW_PRIORITY_CACHEMISS     0x00000030  // if we have a cache miss, then we fall back to the 'all folders like this' default
#define VIEW_PRIORITY_INHERIT       0x00000020  // then try to inherit the view from the previous window
#define VIEW_PRIORITY_SHELLEXT_ASBACKUP 0x0015  // If classic view state is enabled we want the shell to default to an inheritted view
#define VIEW_PRIORITY_DESPERATE     0x00000010  // just pick the last view that the window supports
#define VIEW_PRIORITY_NONE          0x00000000  // dont have a view yet
typedef struct tagFolderSetData
    {
    FOLDERSETTINGS _fs;
    SHELLVIEWID _vidRestore;
    DWORD _dwViewPriority;
    } 	FOLDERSETDATA;

typedef struct tagFolderSetData *LPFOLDERSETDATA;

#if 0 //  needs to be defined by other headers
typedef void *HMONITOR;

#endif
#if !defined(HMONITOR_DECLARED) && (WINVER < 0x0500)
    DECLARE_HANDLE(HMONITOR);
#define HMONITOR_DECLARED
#endif
typedef struct SToolbarItem
    {
    IDockingWindow *ptbar;
    BORDERWIDTHS rcBorderTool;
    LPWSTR pwszItem;
    BOOL fShow;
    HMONITOR hMon;
    } 	TOOLBARITEM;

typedef struct SToolbarItem *LPTOOLBARITEM;

#define ITB_VIEW        ((UINT)-1)      // view
#include <poppack.h>


extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_pub_0407_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_pub_0407_v0_0_s_ifspec;

#ifndef __IBrowserService2_INTERFACE_DEFINED__
#define __IBrowserService2_INTERFACE_DEFINED__

/* interface IBrowserService2 */
/* [local][object][uuid] */ 


EXTERN_C const IID IID_IBrowserService2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("68BD21CC-438B-11d2-A560-00A0C92DBFE8")
    IBrowserService2 : public IBrowserService
    {
    public:
        virtual LRESULT STDMETHODCALLTYPE WndProcBS( 
            HWND hwnd,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAsDefFolderSettings( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewRect( 
            RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSize( 
            WPARAM wParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnCreate( 
            struct tagCREATESTRUCTW *pcs) = 0;
        
        virtual LRESULT STDMETHODCALLTYPE OnCommand( 
            WPARAM wParam,
            LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnDestroy( void) = 0;
        
        virtual LRESULT STDMETHODCALLTYPE OnNotify( 
            struct tagNMHDR *pnm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnFrameWindowActivateBS( 
            BOOL fActive) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ReleaseShellView( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE ActivatePendingView( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateViewWindow( 
            IShellView *psvNew,
            IShellView *psvOld,
            LPRECT prcView,
            HWND *phwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CreateBrowserPropSheetExt( 
            REFIID riid,
            void **ppv) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetViewWindow( 
            HWND *phwndView) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetBaseBrowserData( 
            LPCBASEBROWSERDATA *pbbd) = 0;
        
        virtual LPBASEBROWSERDATA STDMETHODCALLTYPE PutBaseBrowserData( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeTravelLog( 
            ITravelLog *ptl,
            DWORD dw) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetTopBrowser( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Offline( 
            int iCmd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE AllowViewResize( 
            BOOL f) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetActivateState( 
            UINT u) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE UpdateSecureLockIcon( 
            int eSecureLock) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeDownloadManager( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE InitializeTransitionSite( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _Initialize( 
            HWND hwnd,
            IUnknown *pauto) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _CancelPendingNavigationAsync( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _CancelPendingView( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _MaySaveChanges( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _PauseOrResumeView( 
            BOOL fPaused) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _DisableModeless( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _NavigateToPidl( 
            LPCITEMIDLIST pidl,
            DWORD grfHLNF,
            DWORD dwFlags) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _TryShell2Rename( 
            IShellView *psv,
            LPCITEMIDLIST pidlNew) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _SwitchActivationNow( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _ExecChildren( 
            IUnknown *punkBar,
            BOOL fBroadcast,
            const GUID *pguidCmdGroup,
            DWORD nCmdID,
            DWORD nCmdexecopt,
            VARIANTARG *pvarargIn,
            VARIANTARG *pvarargOut) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _SendChildren( 
            HWND hwndBar,
            BOOL fBroadcast,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE GetFolderSetData( 
            struct tagFolderSetData *pfsd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _OnFocusChange( 
            UINT itb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE v_ShowHideChildWindows( 
            BOOL fChildOnly) = 0;
        
        virtual UINT STDMETHODCALLTYPE _get_itbLastFocus( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _put_itbLastFocus( 
            UINT itbLastFocus) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _UIActivateView( 
            UINT uState) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _GetViewBorderRect( 
            RECT *prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _UpdateViewRectSize( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _ResizeNextBorder( 
            UINT itb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _ResizeView( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _GetEffectiveClientArea( 
            LPRECT lprectBorder,
            HMONITOR hmon) = 0;
        
        virtual IStream *STDMETHODCALLTYPE v_GetViewStream( 
            LPCITEMIDLIST pidl,
            DWORD grfMode,
            LPCWSTR pwszName) = 0;
        
        virtual LRESULT STDMETHODCALLTYPE ForwardViewMsg( 
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE SetAcceleratorMenu( 
            HACCEL hacc) = 0;
        
        virtual int STDMETHODCALLTYPE _GetToolbarCount( void) = 0;
        
        virtual LPTOOLBARITEM STDMETHODCALLTYPE _GetToolbarItem( 
            int itb) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _SaveToolbars( 
            IStream *pstm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _LoadToolbars( 
            IStream *pstm) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _CloseAndReleaseToolbars( 
            BOOL fClose) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE v_MayGetNextToolbarFocus( 
            LPMSG lpMsg,
            UINT itbNext,
            int citb,
            LPTOOLBARITEM *pptbi,
            HWND *phwnd) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _ResizeNextBorderHelper( 
            UINT itb,
            BOOL bUseHmonitor) = 0;
        
        virtual UINT STDMETHODCALLTYPE _FindTBar( 
            IUnknown *punkSrc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _SetFocus( 
            LPTOOLBARITEM ptbi,
            HWND hwnd,
            LPMSG lpMsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE v_MayTranslateAccelerator( 
            MSG *pmsg) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE _GetBorderDWHelper( 
            IUnknown *punkSrc,
            LPRECT lprectBorder,
            BOOL bUseHmonitor) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE v_CheckZoneCrossing( 
            LPCITEMIDLIST pidl) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBrowserService2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBrowserService2 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBrowserService2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentSite )( 
            IBrowserService2 * This,
            /* [out] */ IOleInPlaceSite **ppipsite);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            IBrowserService2 * This,
            IShellView *psv,
            LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            IBrowserService2 * This,
            IShellView *psv,
            /* [size_is][out] */ LPWSTR pszName,
            DWORD cchName);
        
        HRESULT ( STDMETHODCALLTYPE *GetOleObject )( 
            IBrowserService2 * This,
            /* [out] */ IOleObject **ppobjv);
        
        HRESULT ( STDMETHODCALLTYPE *GetTravelLog )( 
            IBrowserService2 * This,
            /* [out] */ ITravelLog **pptl);
        
        HRESULT ( STDMETHODCALLTYPE *ShowControlWindow )( 
            IBrowserService2 * This,
            UINT id,
            BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsControlWindowShown )( 
            IBrowserService2 * This,
            UINT id,
            /* [out] */ BOOL *pfShown);
        
        HRESULT ( STDMETHODCALLTYPE *IEGetDisplayName )( 
            IBrowserService2 * This,
            LPCITEMIDLIST pidl,
            /* [out] */ LPWSTR pwszName,
            UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *IEParseDisplayName )( 
            IBrowserService2 * This,
            UINT uiCP,
            LPCWSTR pwszPath,
            /* [out] */ LPITEMIDLIST *ppidlOut);
        
        HRESULT ( STDMETHODCALLTYPE *DisplayParseError )( 
            IBrowserService2 * This,
            HRESULT hres,
            LPCWSTR pwszPath);
        
        HRESULT ( STDMETHODCALLTYPE *NavigateToPidl )( 
            IBrowserService2 * This,
            LPCITEMIDLIST pidl,
            DWORD grfHLNF);
        
        HRESULT ( STDMETHODCALLTYPE *SetNavigateState )( 
            IBrowserService2 * This,
            BNSTATE bnstate);
        
        HRESULT ( STDMETHODCALLTYPE *GetNavigateState )( 
            IBrowserService2 * This,
            /* [out] */ BNSTATE *pbnstate);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyRedirect )( 
            IBrowserService2 * This,
            IShellView *psv,
            LPCITEMIDLIST pidl,
            /* [out] */ BOOL *pfDidBrowse);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateWindowList )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateBackForwardState )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IBrowserService2 * This,
            DWORD dwFlags,
            DWORD dwFlagMask);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IBrowserService2 * This,
            /* [out] */ DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *CanNavigateNow )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPidl )( 
            IBrowserService2 * This,
            /* [out] */ LPITEMIDLIST *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *SetReferrer )( 
            IBrowserService2 * This,
            LPITEMIDLIST pidl);
        
        DWORD ( STDMETHODCALLTYPE *GetBrowserIndex )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBrowserByIndex )( 
            IBrowserService2 * This,
            DWORD dwID,
            /* [out] */ IUnknown **ppunk);
        
        HRESULT ( STDMETHODCALLTYPE *GetHistoryObject )( 
            IBrowserService2 * This,
            /* [out] */ IOleObject **ppole,
            /* [out] */ IStream **pstm,
            /* [out] */ IBindCtx **ppbc);
        
        HRESULT ( STDMETHODCALLTYPE *SetHistoryObject )( 
            IBrowserService2 * This,
            IOleObject *pole,
            BOOL fIsLocalAnchor);
        
        HRESULT ( STDMETHODCALLTYPE *CacheOLEServer )( 
            IBrowserService2 * This,
            IOleObject *pole);
        
        HRESULT ( STDMETHODCALLTYPE *GetSetCodePage )( 
            IBrowserService2 * This,
            /* [in] */ VARIANT *pvarIn,
            /* [out] */ VARIANT *pvarOut);
        
        HRESULT ( STDMETHODCALLTYPE *OnHttpEquiv )( 
            IBrowserService2 * This,
            IShellView *psv,
            BOOL fDone,
            /* [in] */ VARIANT *pvarargIn,
            /* [out] */ VARIANT *pvarargOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetPalette )( 
            IBrowserService2 * This,
            /* [out] */ HPALETTE *hpal);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWindow )( 
            IBrowserService2 * This,
            BOOL fForceRegister,
            int swc);
        
        LRESULT ( STDMETHODCALLTYPE *WndProcBS )( 
            IBrowserService2 * This,
            HWND hwnd,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *SetAsDefFolderSettings )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewRect )( 
            IBrowserService2 * This,
            RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *OnSize )( 
            IBrowserService2 * This,
            WPARAM wParam);
        
        HRESULT ( STDMETHODCALLTYPE *OnCreate )( 
            IBrowserService2 * This,
            struct tagCREATESTRUCTW *pcs);
        
        LRESULT ( STDMETHODCALLTYPE *OnCommand )( 
            IBrowserService2 * This,
            WPARAM wParam,
            LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *OnDestroy )( 
            IBrowserService2 * This);
        
        LRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            IBrowserService2 * This,
            struct tagNMHDR *pnm);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetFocus )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameWindowActivateBS )( 
            IBrowserService2 * This,
            BOOL fActive);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseShellView )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ActivatePendingView )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )( 
            IBrowserService2 * This,
            IShellView *psvNew,
            IShellView *psvOld,
            LPRECT prcView,
            HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBrowserPropSheetExt )( 
            IBrowserService2 * This,
            REFIID riid,
            void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewWindow )( 
            IBrowserService2 * This,
            HWND *phwndView);
        
        HRESULT ( STDMETHODCALLTYPE *GetBaseBrowserData )( 
            IBrowserService2 * This,
            LPCBASEBROWSERDATA *pbbd);
        
        LPBASEBROWSERDATA ( STDMETHODCALLTYPE *PutBaseBrowserData )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeTravelLog )( 
            IBrowserService2 * This,
            ITravelLog *ptl,
            DWORD dw);
        
        HRESULT ( STDMETHODCALLTYPE *SetTopBrowser )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Offline )( 
            IBrowserService2 * This,
            int iCmd);
        
        HRESULT ( STDMETHODCALLTYPE *AllowViewResize )( 
            IBrowserService2 * This,
            BOOL f);
        
        HRESULT ( STDMETHODCALLTYPE *SetActivateState )( 
            IBrowserService2 * This,
            UINT u);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateSecureLockIcon )( 
            IBrowserService2 * This,
            int eSecureLock);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDownloadManager )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeTransitionSite )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_Initialize )( 
            IBrowserService2 * This,
            HWND hwnd,
            IUnknown *pauto);
        
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingNavigationAsync )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingView )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_MaySaveChanges )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_PauseOrResumeView )( 
            IBrowserService2 * This,
            BOOL fPaused);
        
        HRESULT ( STDMETHODCALLTYPE *_DisableModeless )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_NavigateToPidl )( 
            IBrowserService2 * This,
            LPCITEMIDLIST pidl,
            DWORD grfHLNF,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *_TryShell2Rename )( 
            IBrowserService2 * This,
            IShellView *psv,
            LPCITEMIDLIST pidlNew);
        
        HRESULT ( STDMETHODCALLTYPE *_SwitchActivationNow )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_ExecChildren )( 
            IBrowserService2 * This,
            IUnknown *punkBar,
            BOOL fBroadcast,
            const GUID *pguidCmdGroup,
            DWORD nCmdID,
            DWORD nCmdexecopt,
            VARIANTARG *pvarargIn,
            VARIANTARG *pvarargOut);
        
        HRESULT ( STDMETHODCALLTYPE *_SendChildren )( 
            IBrowserService2 * This,
            HWND hwndBar,
            BOOL fBroadcast,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderSetData )( 
            IBrowserService2 * This,
            struct tagFolderSetData *pfsd);
        
        HRESULT ( STDMETHODCALLTYPE *_OnFocusChange )( 
            IBrowserService2 * This,
            UINT itb);
        
        HRESULT ( STDMETHODCALLTYPE *v_ShowHideChildWindows )( 
            IBrowserService2 * This,
            BOOL fChildOnly);
        
        UINT ( STDMETHODCALLTYPE *_get_itbLastFocus )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_put_itbLastFocus )( 
            IBrowserService2 * This,
            UINT itbLastFocus);
        
        HRESULT ( STDMETHODCALLTYPE *_UIActivateView )( 
            IBrowserService2 * This,
            UINT uState);
        
        HRESULT ( STDMETHODCALLTYPE *_GetViewBorderRect )( 
            IBrowserService2 * This,
            RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *_UpdateViewRectSize )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorder )( 
            IBrowserService2 * This,
            UINT itb);
        
        HRESULT ( STDMETHODCALLTYPE *_ResizeView )( 
            IBrowserService2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_GetEffectiveClientArea )( 
            IBrowserService2 * This,
            LPRECT lprectBorder,
            HMONITOR hmon);
        
        IStream *( STDMETHODCALLTYPE *v_GetViewStream )( 
            IBrowserService2 * This,
            LPCITEMIDLIST pidl,
            DWORD grfMode,
            LPCWSTR pwszName);
        
        LRESULT ( STDMETHODCALLTYPE *ForwardViewMsg )( 
            IBrowserService2 * This,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *SetAcceleratorMenu )( 
            IBrowserService2 * This,
            HACCEL hacc);
        
        int ( STDMETHODCALLTYPE *_GetToolbarCount )( 
            IBrowserService2 * This);
        
        LPTOOLBARITEM ( STDMETHODCALLTYPE *_GetToolbarItem )( 
            IBrowserService2 * This,
            int itb);
        
        HRESULT ( STDMETHODCALLTYPE *_SaveToolbars )( 
            IBrowserService2 * This,
            IStream *pstm);
        
        HRESULT ( STDMETHODCALLTYPE *_LoadToolbars )( 
            IBrowserService2 * This,
            IStream *pstm);
        
        HRESULT ( STDMETHODCALLTYPE *_CloseAndReleaseToolbars )( 
            IBrowserService2 * This,
            BOOL fClose);
        
        HRESULT ( STDMETHODCALLTYPE *v_MayGetNextToolbarFocus )( 
            IBrowserService2 * This,
            LPMSG lpMsg,
            UINT itbNext,
            int citb,
            LPTOOLBARITEM *pptbi,
            HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorderHelper )( 
            IBrowserService2 * This,
            UINT itb,
            BOOL bUseHmonitor);
        
        UINT ( STDMETHODCALLTYPE *_FindTBar )( 
            IBrowserService2 * This,
            IUnknown *punkSrc);
        
        HRESULT ( STDMETHODCALLTYPE *_SetFocus )( 
            IBrowserService2 * This,
            LPTOOLBARITEM ptbi,
            HWND hwnd,
            LPMSG lpMsg);
        
        HRESULT ( STDMETHODCALLTYPE *v_MayTranslateAccelerator )( 
            IBrowserService2 * This,
            MSG *pmsg);
        
        HRESULT ( STDMETHODCALLTYPE *_GetBorderDWHelper )( 
            IBrowserService2 * This,
            IUnknown *punkSrc,
            LPRECT lprectBorder,
            BOOL bUseHmonitor);
        
        HRESULT ( STDMETHODCALLTYPE *v_CheckZoneCrossing )( 
            IBrowserService2 * This,
            LPCITEMIDLIST pidl);
        
        END_INTERFACE
    } IBrowserService2Vtbl;

    interface IBrowserService2
    {
        CONST_VTBL struct IBrowserService2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBrowserService2_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBrowserService2_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBrowserService2_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBrowserService2_GetParentSite(This,ppipsite)	\
    (This)->lpVtbl -> GetParentSite(This,ppipsite)

#define IBrowserService2_SetTitle(This,psv,pszName)	\
    (This)->lpVtbl -> SetTitle(This,psv,pszName)

#define IBrowserService2_GetTitle(This,psv,pszName,cchName)	\
    (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName)

#define IBrowserService2_GetOleObject(This,ppobjv)	\
    (This)->lpVtbl -> GetOleObject(This,ppobjv)

#define IBrowserService2_GetTravelLog(This,pptl)	\
    (This)->lpVtbl -> GetTravelLog(This,pptl)

#define IBrowserService2_ShowControlWindow(This,id,fShow)	\
    (This)->lpVtbl -> ShowControlWindow(This,id,fShow)

#define IBrowserService2_IsControlWindowShown(This,id,pfShown)	\
    (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown)

#define IBrowserService2_IEGetDisplayName(This,pidl,pwszName,uFlags)	\
    (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags)

#define IBrowserService2_IEParseDisplayName(This,uiCP,pwszPath,ppidlOut)	\
    (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut)

#define IBrowserService2_DisplayParseError(This,hres,pwszPath)	\
    (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath)

#define IBrowserService2_NavigateToPidl(This,pidl,grfHLNF)	\
    (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF)

#define IBrowserService2_SetNavigateState(This,bnstate)	\
    (This)->lpVtbl -> SetNavigateState(This,bnstate)

#define IBrowserService2_GetNavigateState(This,pbnstate)	\
    (This)->lpVtbl -> GetNavigateState(This,pbnstate)

#define IBrowserService2_NotifyRedirect(This,psv,pidl,pfDidBrowse)	\
    (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse)

#define IBrowserService2_UpdateWindowList(This)	\
    (This)->lpVtbl -> UpdateWindowList(This)

#define IBrowserService2_UpdateBackForwardState(This)	\
    (This)->lpVtbl -> UpdateBackForwardState(This)

#define IBrowserService2_SetFlags(This,dwFlags,dwFlagMask)	\
    (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask)

#define IBrowserService2_GetFlags(This,pdwFlags)	\
    (This)->lpVtbl -> GetFlags(This,pdwFlags)

#define IBrowserService2_CanNavigateNow(This)	\
    (This)->lpVtbl -> CanNavigateNow(This)

#define IBrowserService2_GetPidl(This,ppidl)	\
    (This)->lpVtbl -> GetPidl(This,ppidl)

#define IBrowserService2_SetReferrer(This,pidl)	\
    (This)->lpVtbl -> SetReferrer(This,pidl)

#define IBrowserService2_GetBrowserIndex(This)	\
    (This)->lpVtbl -> GetBrowserIndex(This)

#define IBrowserService2_GetBrowserByIndex(This,dwID,ppunk)	\
    (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk)

#define IBrowserService2_GetHistoryObject(This,ppole,pstm,ppbc)	\
    (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc)

#define IBrowserService2_SetHistoryObject(This,pole,fIsLocalAnchor)	\
    (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor)

#define IBrowserService2_CacheOLEServer(This,pole)	\
    (This)->lpVtbl -> CacheOLEServer(This,pole)

#define IBrowserService2_GetSetCodePage(This,pvarIn,pvarOut)	\
    (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut)

#define IBrowserService2_OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut)	\
    (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut)

#define IBrowserService2_GetPalette(This,hpal)	\
    (This)->lpVtbl -> GetPalette(This,hpal)

#define IBrowserService2_RegisterWindow(This,fForceRegister,swc)	\
    (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc)


#define IBrowserService2_WndProcBS(This,hwnd,uMsg,wParam,lParam)	\
    (This)->lpVtbl -> WndProcBS(This,hwnd,uMsg,wParam,lParam)

#define IBrowserService2_SetAsDefFolderSettings(This)	\
    (This)->lpVtbl -> SetAsDefFolderSettings(This)

#define IBrowserService2_GetViewRect(This,prc)	\
    (This)->lpVtbl -> GetViewRect(This,prc)

#define IBrowserService2_OnSize(This,wParam)	\
    (This)->lpVtbl -> OnSize(This,wParam)

#define IBrowserService2_OnCreate(This,pcs)	\
    (This)->lpVtbl -> OnCreate(This,pcs)

#define IBrowserService2_OnCommand(This,wParam,lParam)	\
    (This)->lpVtbl -> OnCommand(This,wParam,lParam)

#define IBrowserService2_OnDestroy(This)	\
    (This)->lpVtbl -> OnDestroy(This)

#define IBrowserService2_OnNotify(This,pnm)	\
    (This)->lpVtbl -> OnNotify(This,pnm)

#define IBrowserService2_OnSetFocus(This)	\
    (This)->lpVtbl -> OnSetFocus(This)

#define IBrowserService2_OnFrameWindowActivateBS(This,fActive)	\
    (This)->lpVtbl -> OnFrameWindowActivateBS(This,fActive)

#define IBrowserService2_ReleaseShellView(This)	\
    (This)->lpVtbl -> ReleaseShellView(This)

#define IBrowserService2_ActivatePendingView(This)	\
    (This)->lpVtbl -> ActivatePendingView(This)

#define IBrowserService2_CreateViewWindow(This,psvNew,psvOld,prcView,phwnd)	\
    (This)->lpVtbl -> CreateViewWindow(This,psvNew,psvOld,prcView,phwnd)

#define IBrowserService2_CreateBrowserPropSheetExt(This,riid,ppv)	\
    (This)->lpVtbl -> CreateBrowserPropSheetExt(This,riid,ppv)

#define IBrowserService2_GetViewWindow(This,phwndView)	\
    (This)->lpVtbl -> GetViewWindow(This,phwndView)

#define IBrowserService2_GetBaseBrowserData(This,pbbd)	\
    (This)->lpVtbl -> GetBaseBrowserData(This,pbbd)

#define IBrowserService2_PutBaseBrowserData(This)	\
    (This)->lpVtbl -> PutBaseBrowserData(This)

#define IBrowserService2_InitializeTravelLog(This,ptl,dw)	\
    (This)->lpVtbl -> InitializeTravelLog(This,ptl,dw)

#define IBrowserService2_SetTopBrowser(This)	\
    (This)->lpVtbl -> SetTopBrowser(This)

#define IBrowserService2_Offline(This,iCmd)	\
    (This)->lpVtbl -> Offline(This,iCmd)

#define IBrowserService2_AllowViewResize(This,f)	\
    (This)->lpVtbl -> AllowViewResize(This,f)

#define IBrowserService2_SetActivateState(This,u)	\
    (This)->lpVtbl -> SetActivateState(This,u)

#define IBrowserService2_UpdateSecureLockIcon(This,eSecureLock)	\
    (This)->lpVtbl -> UpdateSecureLockIcon(This,eSecureLock)

#define IBrowserService2_InitializeDownloadManager(This)	\
    (This)->lpVtbl -> InitializeDownloadManager(This)

#define IBrowserService2_InitializeTransitionSite(This)	\
    (This)->lpVtbl -> InitializeTransitionSite(This)

#define IBrowserService2__Initialize(This,hwnd,pauto)	\
    (This)->lpVtbl -> _Initialize(This,hwnd,pauto)

#define IBrowserService2__CancelPendingNavigationAsync(This)	\
    (This)->lpVtbl -> _CancelPendingNavigationAsync(This)

#define IBrowserService2__CancelPendingView(This)	\
    (This)->lpVtbl -> _CancelPendingView(This)

#define IBrowserService2__MaySaveChanges(This)	\
    (This)->lpVtbl -> _MaySaveChanges(This)

#define IBrowserService2__PauseOrResumeView(This,fPaused)	\
    (This)->lpVtbl -> _PauseOrResumeView(This,fPaused)

#define IBrowserService2__DisableModeless(This)	\
    (This)->lpVtbl -> _DisableModeless(This)

#define IBrowserService2__NavigateToPidl(This,pidl,grfHLNF,dwFlags)	\
    (This)->lpVtbl -> _NavigateToPidl(This,pidl,grfHLNF,dwFlags)

#define IBrowserService2__TryShell2Rename(This,psv,pidlNew)	\
    (This)->lpVtbl -> _TryShell2Rename(This,psv,pidlNew)

#define IBrowserService2__SwitchActivationNow(This)	\
    (This)->lpVtbl -> _SwitchActivationNow(This)

#define IBrowserService2__ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut)	\
    (This)->lpVtbl -> _ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut)

#define IBrowserService2__SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam)	\
    (This)->lpVtbl -> _SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam)

#define IBrowserService2_GetFolderSetData(This,pfsd)	\
    (This)->lpVtbl -> GetFolderSetData(This,pfsd)

#define IBrowserService2__OnFocusChange(This,itb)	\
    (This)->lpVtbl -> _OnFocusChange(This,itb)

#define IBrowserService2_v_ShowHideChildWindows(This,fChildOnly)	\
    (This)->lpVtbl -> v_ShowHideChildWindows(This,fChildOnly)

#define IBrowserService2__get_itbLastFocus(This)	\
    (This)->lpVtbl -> _get_itbLastFocus(This)

#define IBrowserService2__put_itbLastFocus(This,itbLastFocus)	\
    (This)->lpVtbl -> _put_itbLastFocus(This,itbLastFocus)

#define IBrowserService2__UIActivateView(This,uState)	\
    (This)->lpVtbl -> _UIActivateView(This,uState)

#define IBrowserService2__GetViewBorderRect(This,prc)	\
    (This)->lpVtbl -> _GetViewBorderRect(This,prc)

#define IBrowserService2__UpdateViewRectSize(This)	\
    (This)->lpVtbl -> _UpdateViewRectSize(This)

#define IBrowserService2__ResizeNextBorder(This,itb)	\
    (This)->lpVtbl -> _ResizeNextBorder(This,itb)

#define IBrowserService2__ResizeView(This)	\
    (This)->lpVtbl -> _ResizeView(This)

#define IBrowserService2__GetEffectiveClientArea(This,lprectBorder,hmon)	\
    (This)->lpVtbl -> _GetEffectiveClientArea(This,lprectBorder,hmon)

#define IBrowserService2_v_GetViewStream(This,pidl,grfMode,pwszName)	\
    (This)->lpVtbl -> v_GetViewStream(This,pidl,grfMode,pwszName)

#define IBrowserService2_ForwardViewMsg(This,uMsg,wParam,lParam)	\
    (This)->lpVtbl -> ForwardViewMsg(This,uMsg,wParam,lParam)

#define IBrowserService2_SetAcceleratorMenu(This,hacc)	\
    (This)->lpVtbl -> SetAcceleratorMenu(This,hacc)

#define IBrowserService2__GetToolbarCount(This)	\
    (This)->lpVtbl -> _GetToolbarCount(This)

#define IBrowserService2__GetToolbarItem(This,itb)	\
    (This)->lpVtbl -> _GetToolbarItem(This,itb)

#define IBrowserService2__SaveToolbars(This,pstm)	\
    (This)->lpVtbl -> _SaveToolbars(This,pstm)

#define IBrowserService2__LoadToolbars(This,pstm)	\
    (This)->lpVtbl -> _LoadToolbars(This,pstm)

#define IBrowserService2__CloseAndReleaseToolbars(This,fClose)	\
    (This)->lpVtbl -> _CloseAndReleaseToolbars(This,fClose)

#define IBrowserService2_v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd)	\
    (This)->lpVtbl -> v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd)

#define IBrowserService2__ResizeNextBorderHelper(This,itb,bUseHmonitor)	\
    (This)->lpVtbl -> _ResizeNextBorderHelper(This,itb,bUseHmonitor)

#define IBrowserService2__FindTBar(This,punkSrc)	\
    (This)->lpVtbl -> _FindTBar(This,punkSrc)

#define IBrowserService2__SetFocus(This,ptbi,hwnd,lpMsg)	\
    (This)->lpVtbl -> _SetFocus(This,ptbi,hwnd,lpMsg)

#define IBrowserService2_v_MayTranslateAccelerator(This,pmsg)	\
    (This)->lpVtbl -> v_MayTranslateAccelerator(This,pmsg)

#define IBrowserService2__GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor)	\
    (This)->lpVtbl -> _GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor)

#define IBrowserService2_v_CheckZoneCrossing(This,pidl)	\
    (This)->lpVtbl -> v_CheckZoneCrossing(This,pidl)

#endif /* COBJMACROS */


#endif 	/* C style interface */



LRESULT STDMETHODCALLTYPE IBrowserService2_WndProcBS_Proxy( 
    IBrowserService2 * This,
    HWND hwnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);


void __RPC_STUB IBrowserService2_WndProcBS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_SetAsDefFolderSettings_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2_SetAsDefFolderSettings_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_GetViewRect_Proxy( 
    IBrowserService2 * This,
    RECT *prc);


void __RPC_STUB IBrowserService2_GetViewRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_OnSize_Proxy( 
    IBrowserService2 * This,
    WPARAM wParam);


void __RPC_STUB IBrowserService2_OnSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_OnCreate_Proxy( 
    IBrowserService2 * This,
    struct tagCREATESTRUCTW *pcs);


void __RPC_STUB IBrowserService2_OnCreate_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


LRESULT STDMETHODCALLTYPE IBrowserService2_OnCommand_Proxy( 
    IBrowserService2 * This,
    WPARAM wParam,
    LPARAM lParam);


void __RPC_STUB IBrowserService2_OnCommand_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_OnDestroy_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2_OnDestroy_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


LRESULT STDMETHODCALLTYPE IBrowserService2_OnNotify_Proxy( 
    IBrowserService2 * This,
    struct tagNMHDR *pnm);


void __RPC_STUB IBrowserService2_OnNotify_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_OnSetFocus_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2_OnSetFocus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_OnFrameWindowActivateBS_Proxy( 
    IBrowserService2 * This,
    BOOL fActive);


void __RPC_STUB IBrowserService2_OnFrameWindowActivateBS_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_ReleaseShellView_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2_ReleaseShellView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_ActivatePendingView_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2_ActivatePendingView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_CreateViewWindow_Proxy( 
    IBrowserService2 * This,
    IShellView *psvNew,
    IShellView *psvOld,
    LPRECT prcView,
    HWND *phwnd);


void __RPC_STUB IBrowserService2_CreateViewWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_CreateBrowserPropSheetExt_Proxy( 
    IBrowserService2 * This,
    REFIID riid,
    void **ppv);


void __RPC_STUB IBrowserService2_CreateBrowserPropSheetExt_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_GetViewWindow_Proxy( 
    IBrowserService2 * This,
    HWND *phwndView);


void __RPC_STUB IBrowserService2_GetViewWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_GetBaseBrowserData_Proxy( 
    IBrowserService2 * This,
    LPCBASEBROWSERDATA *pbbd);


void __RPC_STUB IBrowserService2_GetBaseBrowserData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


LPBASEBROWSERDATA STDMETHODCALLTYPE IBrowserService2_PutBaseBrowserData_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2_PutBaseBrowserData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_InitializeTravelLog_Proxy( 
    IBrowserService2 * This,
    ITravelLog *ptl,
    DWORD dw);


void __RPC_STUB IBrowserService2_InitializeTravelLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_SetTopBrowser_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2_SetTopBrowser_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_Offline_Proxy( 
    IBrowserService2 * This,
    int iCmd);


void __RPC_STUB IBrowserService2_Offline_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_AllowViewResize_Proxy( 
    IBrowserService2 * This,
    BOOL f);


void __RPC_STUB IBrowserService2_AllowViewResize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_SetActivateState_Proxy( 
    IBrowserService2 * This,
    UINT u);


void __RPC_STUB IBrowserService2_SetActivateState_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_UpdateSecureLockIcon_Proxy( 
    IBrowserService2 * This,
    int eSecureLock);


void __RPC_STUB IBrowserService2_UpdateSecureLockIcon_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_InitializeDownloadManager_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2_InitializeDownloadManager_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_InitializeTransitionSite_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2_InitializeTransitionSite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__Initialize_Proxy( 
    IBrowserService2 * This,
    HWND hwnd,
    IUnknown *pauto);


void __RPC_STUB IBrowserService2__Initialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__CancelPendingNavigationAsync_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2__CancelPendingNavigationAsync_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__CancelPendingView_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2__CancelPendingView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__MaySaveChanges_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2__MaySaveChanges_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__PauseOrResumeView_Proxy( 
    IBrowserService2 * This,
    BOOL fPaused);


void __RPC_STUB IBrowserService2__PauseOrResumeView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__DisableModeless_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2__DisableModeless_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__NavigateToPidl_Proxy( 
    IBrowserService2 * This,
    LPCITEMIDLIST pidl,
    DWORD grfHLNF,
    DWORD dwFlags);


void __RPC_STUB IBrowserService2__NavigateToPidl_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__TryShell2Rename_Proxy( 
    IBrowserService2 * This,
    IShellView *psv,
    LPCITEMIDLIST pidlNew);


void __RPC_STUB IBrowserService2__TryShell2Rename_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__SwitchActivationNow_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2__SwitchActivationNow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__ExecChildren_Proxy( 
    IBrowserService2 * This,
    IUnknown *punkBar,
    BOOL fBroadcast,
    const GUID *pguidCmdGroup,
    DWORD nCmdID,
    DWORD nCmdexecopt,
    VARIANTARG *pvarargIn,
    VARIANTARG *pvarargOut);


void __RPC_STUB IBrowserService2__ExecChildren_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__SendChildren_Proxy( 
    IBrowserService2 * This,
    HWND hwndBar,
    BOOL fBroadcast,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);


void __RPC_STUB IBrowserService2__SendChildren_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_GetFolderSetData_Proxy( 
    IBrowserService2 * This,
    struct tagFolderSetData *pfsd);


void __RPC_STUB IBrowserService2_GetFolderSetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__OnFocusChange_Proxy( 
    IBrowserService2 * This,
    UINT itb);


void __RPC_STUB IBrowserService2__OnFocusChange_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_v_ShowHideChildWindows_Proxy( 
    IBrowserService2 * This,
    BOOL fChildOnly);


void __RPC_STUB IBrowserService2_v_ShowHideChildWindows_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


UINT STDMETHODCALLTYPE IBrowserService2__get_itbLastFocus_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2__get_itbLastFocus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__put_itbLastFocus_Proxy( 
    IBrowserService2 * This,
    UINT itbLastFocus);


void __RPC_STUB IBrowserService2__put_itbLastFocus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__UIActivateView_Proxy( 
    IBrowserService2 * This,
    UINT uState);


void __RPC_STUB IBrowserService2__UIActivateView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__GetViewBorderRect_Proxy( 
    IBrowserService2 * This,
    RECT *prc);


void __RPC_STUB IBrowserService2__GetViewBorderRect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__UpdateViewRectSize_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2__UpdateViewRectSize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__ResizeNextBorder_Proxy( 
    IBrowserService2 * This,
    UINT itb);


void __RPC_STUB IBrowserService2__ResizeNextBorder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__ResizeView_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2__ResizeView_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__GetEffectiveClientArea_Proxy( 
    IBrowserService2 * This,
    LPRECT lprectBorder,
    HMONITOR hmon);


void __RPC_STUB IBrowserService2__GetEffectiveClientArea_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


IStream *STDMETHODCALLTYPE IBrowserService2_v_GetViewStream_Proxy( 
    IBrowserService2 * This,
    LPCITEMIDLIST pidl,
    DWORD grfMode,
    LPCWSTR pwszName);


void __RPC_STUB IBrowserService2_v_GetViewStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


LRESULT STDMETHODCALLTYPE IBrowserService2_ForwardViewMsg_Proxy( 
    IBrowserService2 * This,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);


void __RPC_STUB IBrowserService2_ForwardViewMsg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_SetAcceleratorMenu_Proxy( 
    IBrowserService2 * This,
    HACCEL hacc);


void __RPC_STUB IBrowserService2_SetAcceleratorMenu_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


int STDMETHODCALLTYPE IBrowserService2__GetToolbarCount_Proxy( 
    IBrowserService2 * This);


void __RPC_STUB IBrowserService2__GetToolbarCount_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


LPTOOLBARITEM STDMETHODCALLTYPE IBrowserService2__GetToolbarItem_Proxy( 
    IBrowserService2 * This,
    int itb);


void __RPC_STUB IBrowserService2__GetToolbarItem_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__SaveToolbars_Proxy( 
    IBrowserService2 * This,
    IStream *pstm);


void __RPC_STUB IBrowserService2__SaveToolbars_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__LoadToolbars_Proxy( 
    IBrowserService2 * This,
    IStream *pstm);


void __RPC_STUB IBrowserService2__LoadToolbars_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__CloseAndReleaseToolbars_Proxy( 
    IBrowserService2 * This,
    BOOL fClose);


void __RPC_STUB IBrowserService2__CloseAndReleaseToolbars_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_v_MayGetNextToolbarFocus_Proxy( 
    IBrowserService2 * This,
    LPMSG lpMsg,
    UINT itbNext,
    int citb,
    LPTOOLBARITEM *pptbi,
    HWND *phwnd);


void __RPC_STUB IBrowserService2_v_MayGetNextToolbarFocus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__ResizeNextBorderHelper_Proxy( 
    IBrowserService2 * This,
    UINT itb,
    BOOL bUseHmonitor);


void __RPC_STUB IBrowserService2__ResizeNextBorderHelper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


UINT STDMETHODCALLTYPE IBrowserService2__FindTBar_Proxy( 
    IBrowserService2 * This,
    IUnknown *punkSrc);


void __RPC_STUB IBrowserService2__FindTBar_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__SetFocus_Proxy( 
    IBrowserService2 * This,
    LPTOOLBARITEM ptbi,
    HWND hwnd,
    LPMSG lpMsg);


void __RPC_STUB IBrowserService2__SetFocus_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_v_MayTranslateAccelerator_Proxy( 
    IBrowserService2 * This,
    MSG *pmsg);


void __RPC_STUB IBrowserService2_v_MayTranslateAccelerator_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2__GetBorderDWHelper_Proxy( 
    IBrowserService2 * This,
    IUnknown *punkSrc,
    LPRECT lprectBorder,
    BOOL bUseHmonitor);


void __RPC_STUB IBrowserService2__GetBorderDWHelper_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService2_v_CheckZoneCrossing_Proxy( 
    IBrowserService2 * This,
    LPCITEMIDLIST pidl);


void __RPC_STUB IBrowserService2_v_CheckZoneCrossing_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBrowserService2_INTERFACE_DEFINED__ */


#ifndef __IBrowserService3_INTERFACE_DEFINED__
#define __IBrowserService3_INTERFACE_DEFINED__

/* interface IBrowserService3 */
/* [local][object][uuid] */ 

typedef /* [public] */ 
enum __MIDL_IBrowserService3_0001
    {	IEPDN_BINDINGUI	= 0x1
    } 	IEPDNFLAGS;


EXTERN_C const IID IID_IBrowserService3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27D7CE21-762D-48F3-86F3-40E2FD3749C4")
    IBrowserService3 : public IBrowserService2
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE _PositionViewWindow( 
            HWND hwnd,
            LPRECT prc) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE IEParseDisplayNameEx( 
            UINT uiCP,
            LPCWSTR pwszPath,
            DWORD dwFlags,
            LPITEMIDLIST *ppidlOut) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IBrowserService3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IBrowserService3 * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IBrowserService3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetParentSite )( 
            IBrowserService3 * This,
            /* [out] */ IOleInPlaceSite **ppipsite);
        
        HRESULT ( STDMETHODCALLTYPE *SetTitle )( 
            IBrowserService3 * This,
            IShellView *psv,
            LPCWSTR pszName);
        
        HRESULT ( STDMETHODCALLTYPE *GetTitle )( 
            IBrowserService3 * This,
            IShellView *psv,
            /* [size_is][out] */ LPWSTR pszName,
            DWORD cchName);
        
        HRESULT ( STDMETHODCALLTYPE *GetOleObject )( 
            IBrowserService3 * This,
            /* [out] */ IOleObject **ppobjv);
        
        HRESULT ( STDMETHODCALLTYPE *GetTravelLog )( 
            IBrowserService3 * This,
            /* [out] */ ITravelLog **pptl);
        
        HRESULT ( STDMETHODCALLTYPE *ShowControlWindow )( 
            IBrowserService3 * This,
            UINT id,
            BOOL fShow);
        
        HRESULT ( STDMETHODCALLTYPE *IsControlWindowShown )( 
            IBrowserService3 * This,
            UINT id,
            /* [out] */ BOOL *pfShown);
        
        HRESULT ( STDMETHODCALLTYPE *IEGetDisplayName )( 
            IBrowserService3 * This,
            LPCITEMIDLIST pidl,
            /* [out] */ LPWSTR pwszName,
            UINT uFlags);
        
        HRESULT ( STDMETHODCALLTYPE *IEParseDisplayName )( 
            IBrowserService3 * This,
            UINT uiCP,
            LPCWSTR pwszPath,
            /* [out] */ LPITEMIDLIST *ppidlOut);
        
        HRESULT ( STDMETHODCALLTYPE *DisplayParseError )( 
            IBrowserService3 * This,
            HRESULT hres,
            LPCWSTR pwszPath);
        
        HRESULT ( STDMETHODCALLTYPE *NavigateToPidl )( 
            IBrowserService3 * This,
            LPCITEMIDLIST pidl,
            DWORD grfHLNF);
        
        HRESULT ( STDMETHODCALLTYPE *SetNavigateState )( 
            IBrowserService3 * This,
            BNSTATE bnstate);
        
        HRESULT ( STDMETHODCALLTYPE *GetNavigateState )( 
            IBrowserService3 * This,
            /* [out] */ BNSTATE *pbnstate);
        
        HRESULT ( STDMETHODCALLTYPE *NotifyRedirect )( 
            IBrowserService3 * This,
            IShellView *psv,
            LPCITEMIDLIST pidl,
            /* [out] */ BOOL *pfDidBrowse);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateWindowList )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateBackForwardState )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *SetFlags )( 
            IBrowserService3 * This,
            DWORD dwFlags,
            DWORD dwFlagMask);
        
        HRESULT ( STDMETHODCALLTYPE *GetFlags )( 
            IBrowserService3 * This,
            /* [out] */ DWORD *pdwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *CanNavigateNow )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetPidl )( 
            IBrowserService3 * This,
            /* [out] */ LPITEMIDLIST *ppidl);
        
        HRESULT ( STDMETHODCALLTYPE *SetReferrer )( 
            IBrowserService3 * This,
            LPITEMIDLIST pidl);
        
        DWORD ( STDMETHODCALLTYPE *GetBrowserIndex )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetBrowserByIndex )( 
            IBrowserService3 * This,
            DWORD dwID,
            /* [out] */ IUnknown **ppunk);
        
        HRESULT ( STDMETHODCALLTYPE *GetHistoryObject )( 
            IBrowserService3 * This,
            /* [out] */ IOleObject **ppole,
            /* [out] */ IStream **pstm,
            /* [out] */ IBindCtx **ppbc);
        
        HRESULT ( STDMETHODCALLTYPE *SetHistoryObject )( 
            IBrowserService3 * This,
            IOleObject *pole,
            BOOL fIsLocalAnchor);
        
        HRESULT ( STDMETHODCALLTYPE *CacheOLEServer )( 
            IBrowserService3 * This,
            IOleObject *pole);
        
        HRESULT ( STDMETHODCALLTYPE *GetSetCodePage )( 
            IBrowserService3 * This,
            /* [in] */ VARIANT *pvarIn,
            /* [out] */ VARIANT *pvarOut);
        
        HRESULT ( STDMETHODCALLTYPE *OnHttpEquiv )( 
            IBrowserService3 * This,
            IShellView *psv,
            BOOL fDone,
            /* [in] */ VARIANT *pvarargIn,
            /* [out] */ VARIANT *pvarargOut);
        
        HRESULT ( STDMETHODCALLTYPE *GetPalette )( 
            IBrowserService3 * This,
            /* [out] */ HPALETTE *hpal);
        
        HRESULT ( STDMETHODCALLTYPE *RegisterWindow )( 
            IBrowserService3 * This,
            BOOL fForceRegister,
            int swc);
        
        LRESULT ( STDMETHODCALLTYPE *WndProcBS )( 
            IBrowserService3 * This,
            HWND hwnd,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *SetAsDefFolderSettings )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewRect )( 
            IBrowserService3 * This,
            RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *OnSize )( 
            IBrowserService3 * This,
            WPARAM wParam);
        
        HRESULT ( STDMETHODCALLTYPE *OnCreate )( 
            IBrowserService3 * This,
            struct tagCREATESTRUCTW *pcs);
        
        LRESULT ( STDMETHODCALLTYPE *OnCommand )( 
            IBrowserService3 * This,
            WPARAM wParam,
            LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *OnDestroy )( 
            IBrowserService3 * This);
        
        LRESULT ( STDMETHODCALLTYPE *OnNotify )( 
            IBrowserService3 * This,
            struct tagNMHDR *pnm);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetFocus )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnFrameWindowActivateBS )( 
            IBrowserService3 * This,
            BOOL fActive);
        
        HRESULT ( STDMETHODCALLTYPE *ReleaseShellView )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *ActivatePendingView )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )( 
            IBrowserService3 * This,
            IShellView *psvNew,
            IShellView *psvOld,
            LPRECT prcView,
            HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *CreateBrowserPropSheetExt )( 
            IBrowserService3 * This,
            REFIID riid,
            void **ppv);
        
        HRESULT ( STDMETHODCALLTYPE *GetViewWindow )( 
            IBrowserService3 * This,
            HWND *phwndView);
        
        HRESULT ( STDMETHODCALLTYPE *GetBaseBrowserData )( 
            IBrowserService3 * This,
            LPCBASEBROWSERDATA *pbbd);
        
        LPBASEBROWSERDATA ( STDMETHODCALLTYPE *PutBaseBrowserData )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeTravelLog )( 
            IBrowserService3 * This,
            ITravelLog *ptl,
            DWORD dw);
        
        HRESULT ( STDMETHODCALLTYPE *SetTopBrowser )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Offline )( 
            IBrowserService3 * This,
            int iCmd);
        
        HRESULT ( STDMETHODCALLTYPE *AllowViewResize )( 
            IBrowserService3 * This,
            BOOL f);
        
        HRESULT ( STDMETHODCALLTYPE *SetActivateState )( 
            IBrowserService3 * This,
            UINT u);
        
        HRESULT ( STDMETHODCALLTYPE *UpdateSecureLockIcon )( 
            IBrowserService3 * This,
            int eSecureLock);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeDownloadManager )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeTransitionSite )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_Initialize )( 
            IBrowserService3 * This,
            HWND hwnd,
            IUnknown *pauto);
        
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingNavigationAsync )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingView )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_MaySaveChanges )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_PauseOrResumeView )( 
            IBrowserService3 * This,
            BOOL fPaused);
        
        HRESULT ( STDMETHODCALLTYPE *_DisableModeless )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_NavigateToPidl )( 
            IBrowserService3 * This,
            LPCITEMIDLIST pidl,
            DWORD grfHLNF,
            DWORD dwFlags);
        
        HRESULT ( STDMETHODCALLTYPE *_TryShell2Rename )( 
            IBrowserService3 * This,
            IShellView *psv,
            LPCITEMIDLIST pidlNew);
        
        HRESULT ( STDMETHODCALLTYPE *_SwitchActivationNow )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_ExecChildren )( 
            IBrowserService3 * This,
            IUnknown *punkBar,
            BOOL fBroadcast,
            const GUID *pguidCmdGroup,
            DWORD nCmdID,
            DWORD nCmdexecopt,
            VARIANTARG *pvarargIn,
            VARIANTARG *pvarargOut);
        
        HRESULT ( STDMETHODCALLTYPE *_SendChildren )( 
            IBrowserService3 * This,
            HWND hwndBar,
            BOOL fBroadcast,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *GetFolderSetData )( 
            IBrowserService3 * This,
            struct tagFolderSetData *pfsd);
        
        HRESULT ( STDMETHODCALLTYPE *_OnFocusChange )( 
            IBrowserService3 * This,
            UINT itb);
        
        HRESULT ( STDMETHODCALLTYPE *v_ShowHideChildWindows )( 
            IBrowserService3 * This,
            BOOL fChildOnly);
        
        UINT ( STDMETHODCALLTYPE *_get_itbLastFocus )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_put_itbLastFocus )( 
            IBrowserService3 * This,
            UINT itbLastFocus);
        
        HRESULT ( STDMETHODCALLTYPE *_UIActivateView )( 
            IBrowserService3 * This,
            UINT uState);
        
        HRESULT ( STDMETHODCALLTYPE *_GetViewBorderRect )( 
            IBrowserService3 * This,
            RECT *prc);
        
        HRESULT ( STDMETHODCALLTYPE *_UpdateViewRectSize )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorder )( 
            IBrowserService3 * This,
            UINT itb);
        
        HRESULT ( STDMETHODCALLTYPE *_ResizeView )( 
            IBrowserService3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *_GetEffectiveClientArea )( 
            IBrowserService3 * This,
            LPRECT lprectBorder,
            HMONITOR hmon);
        
        IStream *( STDMETHODCALLTYPE *v_GetViewStream )( 
            IBrowserService3 * This,
            LPCITEMIDLIST pidl,
            DWORD grfMode,
            LPCWSTR pwszName);
        
        LRESULT ( STDMETHODCALLTYPE *ForwardViewMsg )( 
            IBrowserService3 * This,
            UINT uMsg,
            WPARAM wParam,
            LPARAM lParam);
        
        HRESULT ( STDMETHODCALLTYPE *SetAcceleratorMenu )( 
            IBrowserService3 * This,
            HACCEL hacc);
        
        int ( STDMETHODCALLTYPE *_GetToolbarCount )( 
            IBrowserService3 * This);
        
        LPTOOLBARITEM ( STDMETHODCALLTYPE *_GetToolbarItem )( 
            IBrowserService3 * This,
            int itb);
        
        HRESULT ( STDMETHODCALLTYPE *_SaveToolbars )( 
            IBrowserService3 * This,
            IStream *pstm);
        
        HRESULT ( STDMETHODCALLTYPE *_LoadToolbars )( 
            IBrowserService3 * This,
            IStream *pstm);
        
        HRESULT ( STDMETHODCALLTYPE *_CloseAndReleaseToolbars )( 
            IBrowserService3 * This,
            BOOL fClose);
        
        HRESULT ( STDMETHODCALLTYPE *v_MayGetNextToolbarFocus )( 
            IBrowserService3 * This,
            LPMSG lpMsg,
            UINT itbNext,
            int citb,
            LPTOOLBARITEM *pptbi,
            HWND *phwnd);
        
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorderHelper )( 
            IBrowserService3 * This,
            UINT itb,
            BOOL bUseHmonitor);
        
        UINT ( STDMETHODCALLTYPE *_FindTBar )( 
            IBrowserService3 * This,
            IUnknown *punkSrc);
        
        HRESULT ( STDMETHODCALLTYPE *_SetFocus )( 
            IBrowserService3 * This,
            LPTOOLBARITEM ptbi,
            HWND hwnd,
            LPMSG lpMsg);
        
        HRESULT ( STDMETHODCALLTYPE *v_MayTranslateAccelerator )( 
            IBrowserService3 * This,
            MSG *pmsg);
        
        HRESULT ( STDMETHODCALLTYPE *_GetBorderDWHelper )( 
            IBrowserService3 * This,
            IUnknown *punkSrc,
            LPRECT lprectBorder,
            BOOL bUseHmonitor);
        
        HRESULT ( STDMETHODCALLTYPE *v_CheckZoneCrossing )( 
            IBrowserService3 * This,
            LPCITEMIDLIST pidl);
        
        HRESULT ( STDMETHODCALLTYPE *_PositionViewWindow )( 
            IBrowserService3 * This,
            HWND hwnd,
            LPRECT prc);
        
        HRESULT ( STDMETHODCALLTYPE *IEParseDisplayNameEx )( 
            IBrowserService3 * This,
            UINT uiCP,
            LPCWSTR pwszPath,
            DWORD dwFlags,
            LPITEMIDLIST *ppidlOut);
        
        END_INTERFACE
    } IBrowserService3Vtbl;

    interface IBrowserService3
    {
        CONST_VTBL struct IBrowserService3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IBrowserService3_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define IBrowserService3_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define IBrowserService3_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define IBrowserService3_GetParentSite(This,ppipsite)	\
    (This)->lpVtbl -> GetParentSite(This,ppipsite)

#define IBrowserService3_SetTitle(This,psv,pszName)	\
    (This)->lpVtbl -> SetTitle(This,psv,pszName)

#define IBrowserService3_GetTitle(This,psv,pszName,cchName)	\
    (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName)

#define IBrowserService3_GetOleObject(This,ppobjv)	\
    (This)->lpVtbl -> GetOleObject(This,ppobjv)

#define IBrowserService3_GetTravelLog(This,pptl)	\
    (This)->lpVtbl -> GetTravelLog(This,pptl)

#define IBrowserService3_ShowControlWindow(This,id,fShow)	\
    (This)->lpVtbl -> ShowControlWindow(This,id,fShow)

#define IBrowserService3_IsControlWindowShown(This,id,pfShown)	\
    (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown)

#define IBrowserService3_IEGetDisplayName(This,pidl,pwszName,uFlags)	\
    (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags)

#define IBrowserService3_IEParseDisplayName(This,uiCP,pwszPath,ppidlOut)	\
    (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut)

#define IBrowserService3_DisplayParseError(This,hres,pwszPath)	\
    (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath)

#define IBrowserService3_NavigateToPidl(This,pidl,grfHLNF)	\
    (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF)

#define IBrowserService3_SetNavigateState(This,bnstate)	\
    (This)->lpVtbl -> SetNavigateState(This,bnstate)

#define IBrowserService3_GetNavigateState(This,pbnstate)	\
    (This)->lpVtbl -> GetNavigateState(This,pbnstate)

#define IBrowserService3_NotifyRedirect(This,psv,pidl,pfDidBrowse)	\
    (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse)

#define IBrowserService3_UpdateWindowList(This)	\
    (This)->lpVtbl -> UpdateWindowList(This)

#define IBrowserService3_UpdateBackForwardState(This)	\
    (This)->lpVtbl -> UpdateBackForwardState(This)

#define IBrowserService3_SetFlags(This,dwFlags,dwFlagMask)	\
    (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask)

#define IBrowserService3_GetFlags(This,pdwFlags)	\
    (This)->lpVtbl -> GetFlags(This,pdwFlags)

#define IBrowserService3_CanNavigateNow(This)	\
    (This)->lpVtbl -> CanNavigateNow(This)

#define IBrowserService3_GetPidl(This,ppidl)	\
    (This)->lpVtbl -> GetPidl(This,ppidl)

#define IBrowserService3_SetReferrer(This,pidl)	\
    (This)->lpVtbl -> SetReferrer(This,pidl)

#define IBrowserService3_GetBrowserIndex(This)	\
    (This)->lpVtbl -> GetBrowserIndex(This)

#define IBrowserService3_GetBrowserByIndex(This,dwID,ppunk)	\
    (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk)

#define IBrowserService3_GetHistoryObject(This,ppole,pstm,ppbc)	\
    (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc)

#define IBrowserService3_SetHistoryObject(This,pole,fIsLocalAnchor)	\
    (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor)

#define IBrowserService3_CacheOLEServer(This,pole)	\
    (This)->lpVtbl -> CacheOLEServer(This,pole)

#define IBrowserService3_GetSetCodePage(This,pvarIn,pvarOut)	\
    (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut)

#define IBrowserService3_OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut)	\
    (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut)

#define IBrowserService3_GetPalette(This,hpal)	\
    (This)->lpVtbl -> GetPalette(This,hpal)

#define IBrowserService3_RegisterWindow(This,fForceRegister,swc)	\
    (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc)


#define IBrowserService3_WndProcBS(This,hwnd,uMsg,wParam,lParam)	\
    (This)->lpVtbl -> WndProcBS(This,hwnd,uMsg,wParam,lParam)

#define IBrowserService3_SetAsDefFolderSettings(This)	\
    (This)->lpVtbl -> SetAsDefFolderSettings(This)

#define IBrowserService3_GetViewRect(This,prc)	\
    (This)->lpVtbl -> GetViewRect(This,prc)

#define IBrowserService3_OnSize(This,wParam)	\
    (This)->lpVtbl -> OnSize(This,wParam)

#define IBrowserService3_OnCreate(This,pcs)	\
    (This)->lpVtbl -> OnCreate(This,pcs)

#define IBrowserService3_OnCommand(This,wParam,lParam)	\
    (This)->lpVtbl -> OnCommand(This,wParam,lParam)

#define IBrowserService3_OnDestroy(This)	\
    (This)->lpVtbl -> OnDestroy(This)

#define IBrowserService3_OnNotify(This,pnm)	\
    (This)->lpVtbl -> OnNotify(This,pnm)

#define IBrowserService3_OnSetFocus(This)	\
    (This)->lpVtbl -> OnSetFocus(This)

#define IBrowserService3_OnFrameWindowActivateBS(This,fActive)	\
    (This)->lpVtbl -> OnFrameWindowActivateBS(This,fActive)

#define IBrowserService3_ReleaseShellView(This)	\
    (This)->lpVtbl -> ReleaseShellView(This)

#define IBrowserService3_ActivatePendingView(This)	\
    (This)->lpVtbl -> ActivatePendingView(This)

#define IBrowserService3_CreateViewWindow(This,psvNew,psvOld,prcView,phwnd)	\
    (This)->lpVtbl -> CreateViewWindow(This,psvNew,psvOld,prcView,phwnd)

#define IBrowserService3_CreateBrowserPropSheetExt(This,riid,ppv)	\
    (This)->lpVtbl -> CreateBrowserPropSheetExt(This,riid,ppv)

#define IBrowserService3_GetViewWindow(This,phwndView)	\
    (This)->lpVtbl -> GetViewWindow(This,phwndView)

#define IBrowserService3_GetBaseBrowserData(This,pbbd)	\
    (This)->lpVtbl -> GetBaseBrowserData(This,pbbd)

#define IBrowserService3_PutBaseBrowserData(This)	\
    (This)->lpVtbl -> PutBaseBrowserData(This)

#define IBrowserService3_InitializeTravelLog(This,ptl,dw)	\
    (This)->lpVtbl -> InitializeTravelLog(This,ptl,dw)

#define IBrowserService3_SetTopBrowser(This)	\
    (This)->lpVtbl -> SetTopBrowser(This)

#define IBrowserService3_Offline(This,iCmd)	\
    (This)->lpVtbl -> Offline(This,iCmd)

#define IBrowserService3_AllowViewResize(This,f)	\
    (This)->lpVtbl -> AllowViewResize(This,f)

#define IBrowserService3_SetActivateState(This,u)	\
    (This)->lpVtbl -> SetActivateState(This,u)

#define IBrowserService3_UpdateSecureLockIcon(This,eSecureLock)	\
    (This)->lpVtbl -> UpdateSecureLockIcon(This,eSecureLock)

#define IBrowserService3_InitializeDownloadManager(This)	\
    (This)->lpVtbl -> InitializeDownloadManager(This)

#define IBrowserService3_InitializeTransitionSite(This)	\
    (This)->lpVtbl -> InitializeTransitionSite(This)

#define IBrowserService3__Initialize(This,hwnd,pauto)	\
    (This)->lpVtbl -> _Initialize(This,hwnd,pauto)

#define IBrowserService3__CancelPendingNavigationAsync(This)	\
    (This)->lpVtbl -> _CancelPendingNavigationAsync(This)

#define IBrowserService3__CancelPendingView(This)	\
    (This)->lpVtbl -> _CancelPendingView(This)

#define IBrowserService3__MaySaveChanges(This)	\
    (This)->lpVtbl -> _MaySaveChanges(This)

#define IBrowserService3__PauseOrResumeView(This,fPaused)	\
    (This)->lpVtbl -> _PauseOrResumeView(This,fPaused)

#define IBrowserService3__DisableModeless(This)	\
    (This)->lpVtbl -> _DisableModeless(This)

#define IBrowserService3__NavigateToPidl(This,pidl,grfHLNF,dwFlags)	\
    (This)->lpVtbl -> _NavigateToPidl(This,pidl,grfHLNF,dwFlags)

#define IBrowserService3__TryShell2Rename(This,psv,pidlNew)	\
    (This)->lpVtbl -> _TryShell2Rename(This,psv,pidlNew)

#define IBrowserService3__SwitchActivationNow(This)	\
    (This)->lpVtbl -> _SwitchActivationNow(This)

#define IBrowserService3__ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut)	\
    (This)->lpVtbl -> _ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut)

#define IBrowserService3__SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam)	\
    (This)->lpVtbl -> _SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam)

#define IBrowserService3_GetFolderSetData(This,pfsd)	\
    (This)->lpVtbl -> GetFolderSetData(This,pfsd)

#define IBrowserService3__OnFocusChange(This,itb)	\
    (This)->lpVtbl -> _OnFocusChange(This,itb)

#define IBrowserService3_v_ShowHideChildWindows(This,fChildOnly)	\
    (This)->lpVtbl -> v_ShowHideChildWindows(This,fChildOnly)

#define IBrowserService3__get_itbLastFocus(This)	\
    (This)->lpVtbl -> _get_itbLastFocus(This)

#define IBrowserService3__put_itbLastFocus(This,itbLastFocus)	\
    (This)->lpVtbl -> _put_itbLastFocus(This,itbLastFocus)

#define IBrowserService3__UIActivateView(This,uState)	\
    (This)->lpVtbl -> _UIActivateView(This,uState)

#define IBrowserService3__GetViewBorderRect(This,prc)	\
    (This)->lpVtbl -> _GetViewBorderRect(This,prc)

#define IBrowserService3__UpdateViewRectSize(This)	\
    (This)->lpVtbl -> _UpdateViewRectSize(This)

#define IBrowserService3__ResizeNextBorder(This,itb)	\
    (This)->lpVtbl -> _ResizeNextBorder(This,itb)

#define IBrowserService3__ResizeView(This)	\
    (This)->lpVtbl -> _ResizeView(This)

#define IBrowserService3__GetEffectiveClientArea(This,lprectBorder,hmon)	\
    (This)->lpVtbl -> _GetEffectiveClientArea(This,lprectBorder,hmon)

#define IBrowserService3_v_GetViewStream(This,pidl,grfMode,pwszName)	\
    (This)->lpVtbl -> v_GetViewStream(This,pidl,grfMode,pwszName)

#define IBrowserService3_ForwardViewMsg(This,uMsg,wParam,lParam)	\
    (This)->lpVtbl -> ForwardViewMsg(This,uMsg,wParam,lParam)

#define IBrowserService3_SetAcceleratorMenu(This,hacc)	\
    (This)->lpVtbl -> SetAcceleratorMenu(This,hacc)

#define IBrowserService3__GetToolbarCount(This)	\
    (This)->lpVtbl -> _GetToolbarCount(This)

#define IBrowserService3__GetToolbarItem(This,itb)	\
    (This)->lpVtbl -> _GetToolbarItem(This,itb)

#define IBrowserService3__SaveToolbars(This,pstm)	\
    (This)->lpVtbl -> _SaveToolbars(This,pstm)

#define IBrowserService3__LoadToolbars(This,pstm)	\
    (This)->lpVtbl -> _LoadToolbars(This,pstm)

#define IBrowserService3__CloseAndReleaseToolbars(This,fClose)	\
    (This)->lpVtbl -> _CloseAndReleaseToolbars(This,fClose)

#define IBrowserService3_v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd)	\
    (This)->lpVtbl -> v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd)

#define IBrowserService3__ResizeNextBorderHelper(This,itb,bUseHmonitor)	\
    (This)->lpVtbl -> _ResizeNextBorderHelper(This,itb,bUseHmonitor)

#define IBrowserService3__FindTBar(This,punkSrc)	\
    (This)->lpVtbl -> _FindTBar(This,punkSrc)

#define IBrowserService3__SetFocus(This,ptbi,hwnd,lpMsg)	\
    (This)->lpVtbl -> _SetFocus(This,ptbi,hwnd,lpMsg)

#define IBrowserService3_v_MayTranslateAccelerator(This,pmsg)	\
    (This)->lpVtbl -> v_MayTranslateAccelerator(This,pmsg)

#define IBrowserService3__GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor)	\
    (This)->lpVtbl -> _GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor)

#define IBrowserService3_v_CheckZoneCrossing(This,pidl)	\
    (This)->lpVtbl -> v_CheckZoneCrossing(This,pidl)


#define IBrowserService3__PositionViewWindow(This,hwnd,prc)	\
    (This)->lpVtbl -> _PositionViewWindow(This,hwnd,prc)

#define IBrowserService3_IEParseDisplayNameEx(This,uiCP,pwszPath,dwFlags,ppidlOut)	\
    (This)->lpVtbl -> IEParseDisplayNameEx(This,uiCP,pwszPath,dwFlags,ppidlOut)

#endif /* COBJMACROS */


#endif 	/* C style interface */



HRESULT STDMETHODCALLTYPE IBrowserService3__PositionViewWindow_Proxy( 
    IBrowserService3 * This,
    HWND hwnd,
    LPRECT prc);


void __RPC_STUB IBrowserService3__PositionViewWindow_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);


HRESULT STDMETHODCALLTYPE IBrowserService3_IEParseDisplayNameEx_Proxy( 
    IBrowserService3 * This,
    UINT uiCP,
    LPCWSTR pwszPath,
    DWORD dwFlags,
    LPITEMIDLIST *ppidlOut);


void __RPC_STUB IBrowserService3_IEParseDisplayNameEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IBrowserService3_INTERFACE_DEFINED__ */


/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


