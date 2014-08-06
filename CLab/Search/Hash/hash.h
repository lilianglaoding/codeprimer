typedef int KeyType;

typedef struct node
{
  KeyType key;
  struct node *next;
} NodeType;

#define M 8

typedef NodeType *OpenHash[M];

int CreateHashTbl(OpenHash l_tbl, ElemType *eptr)
{
  int d, finished;
  int i;
  for (i = 0; i <= M; i++)
  {
    
  }
}


