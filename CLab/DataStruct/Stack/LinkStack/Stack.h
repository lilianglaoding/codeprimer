#ifndef STACK_H
#define STACK_H

typedef struct node
{
  int data;
  struct node *next;
} StackNode, *LinkStack;

#endif
