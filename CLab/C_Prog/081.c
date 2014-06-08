#include "head.h"

void main()
{
  long i = 0 , a = 0, b = 0;
  for (i = 1; i < 100; i++)
  {
    b = 809;
    a = b * i + 1;
    //    if ((8 * i < 100) && (9 * i < 1000) && (9 * i > 99) && (b * i = b * i + 1))
    if (b >= 1000 && b <= 10000 && 8 * i < 100 && 9 * i >= 100)
      printf("%ld,%ld\n", b, 809 * i);
  }
}
