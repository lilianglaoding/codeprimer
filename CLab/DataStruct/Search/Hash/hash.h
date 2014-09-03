typedef int KeyType;

typedef struct node
{
  KeyType key;
  struct node *next;
} NodeType;

#define M 8

typedef NodeType *OpenHash[M];

typedef int ElemType;


