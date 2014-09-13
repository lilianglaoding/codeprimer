typedef int datatype;

typedef struct node
{
  datatype data;
  struct node *lchild, *rchild;
} BiTNode, *BiTree;
