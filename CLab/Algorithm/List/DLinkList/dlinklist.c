#include <stdio.h>
#include <stdlib.h>

typedef datatype int;

typedef struct node
{
  datatype data;
  struct node *prior, *next;
} DLNode, *DLinkList;

// p->prior->next = p = p->next->prior;

// insert s behind p;
/**********************************
s->prior = p;
s->next = p->next;
p->next->prior = s;
p->next = s;
**********************************/

// insert s befor p;
/*********************************
s->prior = p->prior;
s->next = p;
p->prior->next = s;
p->prior = s;
 ********************************/
