typedef struct _NET_BUFFER_LIST_CONTEXT
{
  /* 0x0000 */ struct _NET_BUFFER_LIST_CONTEXT* Next;
  /* 0x0008 */ unsigned short Size;
  /* 0x000a */ unsigned short Offset;
  /* 0x0010 */ unsigned char* ContextData /* zero-length array */;
} NET_BUFFER_LIST_CONTEXT, *PNET_BUFFER_LIST_CONTEXT; /* size: 0x0010 */

