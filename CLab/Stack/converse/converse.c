#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"

void converse(int N, int r)
{
  SeqStack *s;
  s = Init_Stack();
  while (N)
  {
    Push_Stack(s, N % r);
    N = N / r;
  }
  while (!Empty_Stack(s))
  {
    int temp = Top_Stack(s);
    Pop_Stack(s);
    printf("%d\t", temp);
  }
  printf("\n");
}

int main()
{
  int N = 1025, r = 2;
  converse(N, r);
  return 0;
}
