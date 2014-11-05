#define m 5

typedef int datatype;

typedef struct node
{
    struct node *parent;
    datatype key[m + 1];
    struct node *nptr[m + 1];
    datatype *eptr[m + 1];
} NodeType;

typedef struct
{
    NodeType *pt;
    int i;
    int tag;    // 1--success, 0--failure
} Result;
