#ifndef LINKMATRIX_H
#define LINKMATRIX_H

typedef struct node
{
  int row, col;
  struct node *down, *right;
  union
  {
    datatype v;
    struct node *next;
  } v_next;
} MNode, *MLink;

#endif
