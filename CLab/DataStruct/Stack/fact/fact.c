#include <stdio.h>

int fact(int n)
{
  if (n == 0)
    return 1;
  else
    return n * fact(n - 1);
}

int main()
{
  int n = 4;
  printf("%d\n", fact(n));
}
