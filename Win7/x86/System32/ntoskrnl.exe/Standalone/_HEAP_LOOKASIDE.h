typedef struct _SINGLE_LIST_ENTRY
{
  /* 0x0000 */ struct _SINGLE_LIST_ENTRY* Next;
} SINGLE_LIST_ENTRY, *PSINGLE_LIST_ENTRY; /* size: 0x0004 */

typedef union _SLIST_HEADER
{
  union
  {
    /* 0x0000 */ unsigned __int64 Alignment;
    struct
    {
      /* 0x0000 */ struct _SINGLE_LIST_ENTRY Next;
      /* 0x0004 */ unsigned short Depth;
      /* 0x0006 */ unsigned short Sequence;
    }; /* size: 0x0008 */
  }; /* size: 0x0008 */
} SLIST_HEADER, *PSLIST_HEADER; /* size: 0x0008 */

typedef struct _HEAP_LOOKASIDE
{
  /* 0x0000 */ union _SLIST_HEADER ListHead;
  /* 0x0008 */ unsigned short Depth;
  /* 0x000a */ unsigned short MaximumDepth;
  /* 0x000c */ unsigned long TotalAllocates;
  /* 0x0010 */ unsigned long AllocateMisses;
  /* 0x0014 */ unsigned long TotalFrees;
  /* 0x0018 */ unsigned long FreeMisses;
  /* 0x001c */ unsigned long LastTotalAllocates;
  /* 0x0020 */ unsigned long LastAllocateMisses;
  /* 0x0024 */ unsigned long Counters[2];
  /* 0x002c */ long __PADDING__[1];
} HEAP_LOOKASIDE, *PHEAP_LOOKASIDE; /* size: 0x0030 */

