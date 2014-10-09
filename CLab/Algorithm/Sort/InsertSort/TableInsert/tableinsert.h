typedef int datatype;

typedef struct seqnode
{
    datatype data;
    int next;
} SeqNodeType;

typedef struct linknode
{
    datatype data;
    struct linknode *next;
} LinkNodeType;
