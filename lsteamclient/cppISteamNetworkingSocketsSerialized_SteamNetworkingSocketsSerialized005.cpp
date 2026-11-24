/* This file is auto-generated, do not edit. */
#include "unix_private.h"

#if 0
#pragma makedep unix
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PRendezvous( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PRendezvous_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PRendezvous_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    iface->SendP2PRendezvous( params->steamIDRemote, params->unConnectionIDSrc, params->pMsgRendezvous, params->cbRendezvous );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PRendezvous( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PRendezvous_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PRendezvous_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    iface->SendP2PRendezvous( params->steamIDRemote, params->unConnectionIDSrc, params->pMsgRendezvous, params->cbRendezvous );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PConnectionFailure( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PConnectionFailure_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PConnectionFailure_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    iface->SendP2PConnectionFailure( params->steamIDRemote, params->unConnectionIDDest, params->nReason, params->pszReason );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PConnectionFailure( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PConnectionFailure_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_SendP2PConnectionFailure_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    iface->SendP2PConnectionFailure( params->steamIDRemote, params->unConnectionIDDest, params->nReason, params->pszReason );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCertAsync( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCertAsync_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCertAsync_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetCertAsync(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCertAsync( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCertAsync_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCertAsync_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetCertAsync(  );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetNetworkConfigJSON( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetNetworkConfigJSON_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetNetworkConfigJSON_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetNetworkConfigJSON( params->buf, params->cbBuf, params->pszLauncherPartner );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetNetworkConfigJSON( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetNetworkConfigJSON_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetNetworkConfigJSON_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetNetworkConfigJSON( params->buf, params->cbBuf, params->pszLauncherPartner );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_CacheRelayTicket( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_CacheRelayTicket_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_CacheRelayTicket_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    iface->CacheRelayTicket( params->pTicket, params->cbTicket );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_CacheRelayTicket( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_CacheRelayTicket_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_CacheRelayTicket_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    iface->CacheRelayTicket( params->pTicket, params->cbTicket );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicketCount( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicketCount_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicketCount_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetCachedRelayTicketCount(  );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicketCount( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicketCount_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicketCount_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetCachedRelayTicketCount(  );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicket( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicket_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicket_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetCachedRelayTicket( params->idxTicket, params->buf, params->cbBuf );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicket( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicket_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetCachedRelayTicket_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetCachedRelayTicket( params->idxTicket, params->buf, params->cbBuf );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_PostConnectionStateMsg( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_PostConnectionStateMsg_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_PostConnectionStateMsg_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    iface->PostConnectionStateMsg( params->pMsg, params->cbMsg );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_PostConnectionStateMsg( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_PostConnectionStateMsg_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_PostConnectionStateMsg_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    iface->PostConnectionStateMsg( params->pMsg, params->cbMsg );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetSTUNServer( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetSTUNServer_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetSTUNServer_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetSTUNServer( params->iServer, params->buf, params->cbBuf );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetSTUNServer( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetSTUNServer_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_GetSTUNServer_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->GetSTUNServer( params->iServer, params->buf, params->cbBuf );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_AllowDirectConnectToPeer( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_AllowDirectConnectToPeer_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_AllowDirectConnectToPeer_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->AllowDirectConnectToPeer( params->identityRemote );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_AllowDirectConnectToPeer( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_AllowDirectConnectToPeer_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_AllowDirectConnectToPeer_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->AllowDirectConnectToPeer( params->identityRemote );
    return 0;
}
#endif

NTSTATUS ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_BeginAsyncRequestFakeIP( void *args )
{
    struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_BeginAsyncRequestFakeIP_params *params = (struct ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_BeginAsyncRequestFakeIP_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->BeginAsyncRequestFakeIP( params->nNumPorts );
    return 0;
}

#if defined(__x86_64__) || defined(__aarch64__)
NTSTATUS wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_BeginAsyncRequestFakeIP( void *args )
{
    struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_BeginAsyncRequestFakeIP_params *params = (struct wow64_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005_BeginAsyncRequestFakeIP_params *)args;
    struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *iface = (struct u_ISteamNetworkingSocketsSerialized_SteamNetworkingSocketsSerialized005 *)params->u_iface;
    params->_ret = iface->BeginAsyncRequestFakeIP( params->nNumPorts );
    return 0;
}
#endif
