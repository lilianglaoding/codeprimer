#include <stdio.h>

void output(long b, long i)
{
  printf("\n%ld/%ld = 809 * %ld + %ld\n\n", b, i, i, b % i);
}

void main()
{
  long int a, b, i;
  a = 809;
  for (i = 10; i < 100; i++)
  {
    b = i * a + 1;
    if (8 * i < 100 && 9 * i >= 100)
      output(b, i);
  }
}
