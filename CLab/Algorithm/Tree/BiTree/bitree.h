typedef int datatype;

typedef struct node
{
  datatype data;
  struct node *lchild, *rchild;
} BiTNode, *BiTree;

typedef struct
{
  BiTree link;
  int flag;
} stacktype;
