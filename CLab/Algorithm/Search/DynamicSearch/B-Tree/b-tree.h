#define m 5

typedef int datatype;

// node (n, A0, K1, A1, K2, ..., Kn, An)

typedef struct node
{
    int keynum;
    struct node *parent;
    datatype key[m];        //key[0] is not used
    struct node *nptr[m];
    datatype *eptr[m];
} NodeType;

typedef struct
{
    NodeType *pt;
    int i;
    int tag;    // 1--success, 0--failure
} Result;
