#ifndef BITREE_H
#define BITREE_H

typedef int datatype;

typedef struct BiTNode
{
  datatype data;
  struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

#endif
