#ifndef STACK_H
#define STACK_H

#define MAXSIZE 255

typedef struct stack
{
  datatype data[MAXSIZE];
  int top;
} SeqStack;

SeqStack *Init_Stack();
int Empty_Stack(SeqStack *s);
int Push_Stack(SeqStack *s, datatype x);
int Pop_Stack(SeqStack *s);
datatype Top_Stack(SeqStack *s);

#endif
