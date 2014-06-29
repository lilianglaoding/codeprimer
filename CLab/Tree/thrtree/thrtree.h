#ifndef THRTREE_H
#define THRTREE_H

typedef char datatype;

typedef struct BiThrNode
{
  datatype data;
  struct BiThrNode *lchild;
  struct BiThrNode *rchild;
  unsigned ltag;
  unsigned rtag;
} BiThrNodeType, *BiThrTree;

#endif
