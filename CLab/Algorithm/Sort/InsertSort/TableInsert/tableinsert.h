typedef int datatype;

typedef struct seqnode
{
    datatype data;
    int next;
} SeqNodeType;

typedef struct listnode
{
    datatype data;
    struct listnode *next;
} ListNodeType;
