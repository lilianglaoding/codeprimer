#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

SeqStack *Init_Stack()
{
  SeqStack *s = (SeqStack *)malloc(sizeof(SeqStack));
  s->top = -1;
  return s;
}

int Empty_Stack(SeqStack *s)
{
  return s->top == -1;
}

int Push_Stack(SeqStack *s, int x)
{
  if (s->top + 1 == MAXSIZE)
    return 0;
  s->data[++s->top] = x;
  return 1;
}

int Pop_Stack(SeqStack *s)
{
  if (Empty_Stack(s))
    return 0;
  --s->top;
  return 1;
}

int Top_Stack(SeqStack *s)
{
  if (Empty_Stack(s))
    return 0;
  return s->data[s->top];
}





















