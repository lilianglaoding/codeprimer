#include <stdio.h>

#define P 3

#define S(a) P*a*a

int main()
{
  int ar = S(3+5+1);
  printf("%d",ar);
  return 0;
}
