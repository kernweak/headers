typedef struct _WNF_NODE_HEADER
{
  /* 0x0000 */ unsigned short NodeTypeCode;
  /* 0x0002 */ unsigned short NodeByteSize;
} WNF_NODE_HEADER, *PWNF_NODE_HEADER; /* size: 0x0004 */

typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Shared : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0004 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0004 */

typedef struct _WNF_LOCK
{
  /* 0x0000 */ struct _EX_PUSH_LOCK PushLock;
} WNF_LOCK, *PWNF_LOCK; /* size: 0x0004 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _WNF_SCOPE_MAP_ENTRY
{
  /* 0x0000 */ struct _WNF_LOCK MapEntryLock;
  /* 0x0004 */ struct _LIST_ENTRY MapEntryHead;
} WNF_SCOPE_MAP_ENTRY, *PWNF_SCOPE_MAP_ENTRY; /* size: 0x000c */

typedef struct _WNF_SCOPE_MAP
{
  /* 0x0000 */ struct _WNF_NODE_HEADER Header;
  /* 0x0004 */ struct _WNF_SCOPE_INSTANCE* SystemScopeInstance;
  /* 0x0008 */ struct _WNF_SCOPE_INSTANCE* MachineScopeInstance;
  /* 0x000c */ struct _WNF_SCOPE_MAP_ENTRY ByDataScope[5];
} WNF_SCOPE_MAP, *PWNF_SCOPE_MAP; /* size: 0x0048 */

