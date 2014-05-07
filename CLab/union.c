#include <stdio.h>

void main()
{
  union
  {
    int i;
    float f;
  }
  i = 2;
  f = 2.2;
  printf("%d\n",i);
  printf("%f\n",f);
}
