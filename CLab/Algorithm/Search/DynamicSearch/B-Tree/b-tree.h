#define m 5

typedef int datatype;

// node (n, A0, K1, A1, K2, ..., Kn, An)

typedef struct node
{
    int keynum;
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
