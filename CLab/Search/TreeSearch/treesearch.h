#ifndef TREESEARCH_H
#define TREESEARCH_H

typedef int KeyType;

typedef struct
{
  KeyType key;
  int data;
} datatype;

typedef struct node
{
  datatype data;
  struct node *lchild, *rchild;
} NodeType;

#endif
