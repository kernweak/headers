typedef enum _NETSETUPPROP_OPERATOR
{
  NETSETUPPROP_OPERATOR_MODIFIER_NOT = 0x10000,
  NETSETUPPROP_OPERATOR_MODIFIER_IGNORE_CASE = 0x20000,
  NETSETUPPROP_OPERATOR_NONE = 0,
  NETSETUPPROP_OPERATOR_EXISTS = 1,
  NETSETUPPROP_OPERATOR_NOT_EXISTS = 0x10001,
  NETSETUPPROP_OPERATOR_EQUALS = 2,
  NETSETUPPROP_OPERATOR_NOT_EQUALS = 0x10002,
  NETSETUPPROP_OPERATOR_GREATER_THAN = 3,
  NETSETUPPROP_OPERATOR_LESS_THAN = 4,
  NETSETUPPROP_OPERATOR_GREATER_THAN_EQUALS = 5,
  NETSETUPPROP_OPERATOR_LESS_THAN_EQUALS = 6,
  NETSETUPPROP_OPERATOR_EQUALS_IGNORE_CASE = 0x20002,
  NETSETUPPROP_OPERATOR_NOT_EQUALS_IGNORE_CASE = 0x30002,
  NETSETUPPROP_OPERATOR_BITMASK_ALL = 7,
  NETSETUPPROP_OPERATOR_BITMASK_ANY = 8,
  NETSETUPPROP_OPERATOR_CHANGED = 256,
  NETSETUPPROP_OPERATOR_CHANGED_ANY_IN_NAMESPACE = 257,
  NETSETUPPROP_OPERATOR_LIST_CONTAINS = 4096,
  NETSETUPPROP_OPERATOR_LIST_CONTAINS_IGNORE_CASE = 0x21000,
  NETSETUPPROP_OPERATOR_LIST_COUNT = 8192,
  NETSETUPPROP_OPERATOR_AND_OPEN = 0x100000,
  NETSETUPPROP_OPERATOR_AND_CLOSE = 0x200000,
  NETSETUPPROP_OPERATOR_OR_OPEN = 0x300000,
  NETSETUPPROP_OPERATOR_OR_CLOSE = 0x400000,
  NETSETUPPROP_OPERATOR_NOT_OPEN = 0x500000,
  NETSETUPPROP_OPERATOR_NOT_CLOSE = 0x600000,
  NETSETUPPROP_OPERATOR_XOR_OPEN = 0x700000,
  NETSETUPPROP_OPERATOR_XOR_CLOSE = 0x800000,
  NETSETUPPROP_TARGET_MODIFIER_PRINCIPAL_OBJECT = 0,
  NETSETUPPROP_TARGET_MODIFIER_TRANSACTION = 0x10000000,
  NETSETUPPROP_TARGET_MODIFIER_ANY_ON_PATH = 0x20000000,
  NETSETUPPROP_TARGET_MODIFIER_ALL_ON_PATH = 0x20010000,
  NETSETUPPROP_TARGET_MODIFIER_TOP_OF_PATH = 0x30000000,
  NETSETUPPROP_TARGET_MODIFIER_BOTTOM_OF_PATH = 0x40000000,
  NETSETUPPROP_TARGET_MODIFIER_GLOBAL = 0x50000000,
  NETSETUPPROP_TARGET_MODIFIER_ANY_PROPERTY = 0x60000000,
  NETSETUPPROP_OPERATOR_MASK_EVAL = 4095,
  NETSETUPPROP_OPERATOR_MASK_LIST = 0xfffff000,
  NETSETUPPROP_OPERATOR_MASK_MODIFIER = 0xf0000,
  NETSETUPPROP_OPERATOR_MASK_NOT_LOGICAL = 0xfffff,
  NETSETUPPROP_OPERATOR_MASK_LOGICAL = 0xff00000,
  NETSETUPPROP_OPERATOR_MASK_TARGET = -268435456,
} NETSETUPPROP_OPERATOR, *PNETSETUPPROP_OPERATOR;

