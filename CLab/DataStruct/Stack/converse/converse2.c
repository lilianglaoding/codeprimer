#include <stdio.h>

void converse(int N, int r)
{
  //printf("%d\t", N % r);
  //N = N / r;
  if (N)
  {
    converse(N / r, r);
    printf("%d\t", N % r);
  }
}

int main()
{
  int N = 1024, r = 2;
  converse(N, r);
  printf("\n");
  return 0;
}
