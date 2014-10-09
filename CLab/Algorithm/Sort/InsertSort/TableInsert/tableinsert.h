typedef int datatype;

typedef struct seqnode
{
    datatype data;
    int next;
} SeqNodeType;

typedef struct listnode
{
    datatype data;
    struct linknode *next;
} ListNodeType;
