#ifndef HUFFMAN_H
#define HUFFMAN_H

#define MAXVALUE 10000
#define MAXLEAF 30
#define MAXNODE MAXLEAF * 2 - 1

typedef struct
{
  int weight;
  int parent;
  int lchild;
  int rchild;
} HNodeType;

#endif
