typedef int datatype;

typedef struct node
{
    datatype data;
    int bf;
    struct node *lchild, *rchild;
} NodeType;
