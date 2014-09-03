#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

LinkStack Init_Stack()
{
  return NULL;
}

int Empty_Stack(LinkStack top)
{
  return top == NULL;
}

LinkStack Push_Stack(LinkStack top, int x)
{
  LinkStack ptr = (LinkStack)malloc(sizeof(StackNode));
  ptr->data = x;
  ptr->next = top;
  top = ptr;
  return top;
}

LinkStack Pop_Stack(LinkStack top)
{
  LinkStack ptr = NULL;
  if (Empty_Stack(top))
    return NULL;
  ptr = top;
  top = top->next;
  free(ptr);
  return top;
}

int Top_Stack(LinkStack top)
{
  if (Empty_Stack(top))
    return 0;
  return top->data;
}

int main()
{
  LinkStack top;
  top = Init_Stack();
  int is_empty = Empty_Stack(top);
  if (is_empty)
    printf("the stack is empty\n");
  else
    printf("the stack is not empty\n");
  for (int i = 0; i < 10; ++i)
  {
   top = Push_Stack(top, i);
  }
  is_empty = Empty_Stack(top);
  if (is_empty)
    printf("the stack is empty\n");
  else
    printf("the stack is not empty\n");
  top = Pop_Stack(top);
  int x = Top_Stack(top);
  printf("the top is: %d\n", x);
  return 0;
}
