#ifndef THRTREE_H
#define THRTREE_H

typedef char datatype;

typedef struct BiThrNode
{
  datatype data;
  struct BiThrNode *lchild;
  struct BiThrNode *rchild;
  unsigned ltag;              // 1---thread, 0---child
  unsigned rtag;              // 1---thread, 0---child
} BiThrNodeType, *BiThrTree;

#endif
