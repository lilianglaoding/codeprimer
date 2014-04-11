#include <stdio.h>

void main()
{
  //range 1..1000
  int i = 0, count = 0, j = 0;
  for (i = 0; i <= 10; i++)
  {
    count = i;
    for (j = 0; j <= 4; j++)
    {
      count = count * 5 + 1;
    }
    printf("%d:%d\n", i, count);
  }
}
