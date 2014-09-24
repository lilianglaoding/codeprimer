#ifdef DYNAMICSEARCH_H
#define DYNAMICSEARCH_H

typedef int datatype;

typedef struct node
{
  datatype data;
  struct node *lchild, *rchild;
} NodeType;

#endif
