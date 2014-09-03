#define m 5

typedef datatype int;

typedef struct node
{
  int keynum;
  struct node *parent;
  KeyType key[m + 1];
  struct node *nptr[m + 1];
  datatype *eptr[m + 1];
} NodeType;

typedef struct
{
  NodeType *pt;
  int i;
  int tag;
} Result;
