#include <stdio.h>
#include <stdlib.h>

#include "seqstack.h"

SeqStack *Init_Stack()
{
  SeqStack *s;
  s = (SeqStack *)malloc(sizeof(SeqStack));
  if (s == NULL)
    return;
  s->top = -1;
  return s;
}

int Empty_Stack(SeqStack *s)
{
  return (s->top == -1);
}

datatype Top_Stack(SeqStack *s)
{
  if (Empty_Stack(s))
    return 0;
  return s->data[s->top];
}

int Push_Stack(SeqStack *s, datatype x)
{
  if (s->top == MAXSIZE - 1)
    return 0;
  s->top++;
  s->data[s->top] = x;
  return 1;
}

int Pop_Stack(SeqStack *s)
{
  if (Empty_Stack(s))
    return 0;
  s->top--;
  return 1;
}

void Destroy_Stack(SeqStack *s)
{
  if (s == NULL)
    return ;
  free(s);
}
