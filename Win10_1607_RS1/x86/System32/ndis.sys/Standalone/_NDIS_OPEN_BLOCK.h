typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _NDIS_OPEN_BLOCK
{
  /* 0x0220 */ struct _NDIS_CO_AF_BLOCK* NextAf;
  /* 0x0224 */ void* MiniportCoCreateVcHandler /* function */;
  /* 0x0228 */ void* MiniportCoRequestHandler /* function */;
  /* 0x022c */ void* CoCreateVcHandler /* function */;
  /* 0x0230 */ void* CoDeleteVcHandler /* function */;
  /* 0x0234 */ void* CmActivateVcCompleteHandler /* function */;
  /* 0x0238 */ void* CmDeactivateVcCompleteHandler /* function */;
  /* 0x023c */ void* CoRequestCompleteHandler /* function */;
  /* 0x0240 */ void* CoRequestHandler /* function */;
  /* 0x0244 */ struct _LIST_ENTRY ActiveVcHead;
  /* 0x024c */ struct _LIST_ENTRY InactiveVcHead;
  /* 0x0254 */ long PendingAfNotifications;
  /* 0x0258 */ struct _KEVENT* AfNotifyCompleteEvent;
  /* 0x025c */ void* MiniportCoOidRequestHandler /* function */;
  /* 0x0260 */ void* CoOidRequestCompleteHandler /* function */;
  /* 0x0264 */ void* CoOidRequestHandler /* function */;
} NDIS_OPEN_BLOCK, *PNDIS_OPEN_BLOCK; /* size: 0x0268 */

