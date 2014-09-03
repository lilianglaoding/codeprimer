#ifndef LINKLIST_H
#define LINKLIST_H

typedef int datatype;

typedef struct node
{
  datatype data;
  struct node *next;
} LNode, LinkList;

#endif
