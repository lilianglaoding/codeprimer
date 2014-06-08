#include "head.h"

void main()
{
  long sum = 0, s = 1;
  int j;
  //long sum_all = 0;
  for (j = 1; j <= 8; j++)
  {
    printf("\n%ld", sum);
    if (j < 2)
      s *= 4;
    else
      s *= 8;
    sum += s;
    //sum_all += sum;
  }
  printf("\nsum = %ld\n", s);
}
