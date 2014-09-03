#ifndef AVLTREE_H
#define AVLTREE_H

typedef int datatype;

typedef struct NODE
{
  datatype data;
  int bf;
  struct NODE *lchild, *rchild;
} NodeType;

#endif
