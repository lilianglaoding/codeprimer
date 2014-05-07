#include "head.h"

struct student {
  int x;
  char c;
} a;


void f(struct student *b)
{
  (*b).x = 20;  //b->x = 20 is the same as this
  (*b).c = 'y'; //b->c = 'y' is the same as this
}

void main()
{
  a.x = 3;
  a.c = 'a';
  f(&a);
  printf("%d,%c\n", a.x, a.c);
}

