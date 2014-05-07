#include <stdio.h>

float OddSum(int n)
{
  float sum = 0;
  int i = 0;
  for (i = 1; i <= n; i += 2)
  {
    sum = sum + (float)1 / (float)i;
  }
  return sum;n
}

float EvenSum(int n)
{
  float sum = 0;
  int i = 0;
  for (i = 2; i <= n; i += 2)
  {
    sum = sum + (float)1 / (float)i;
  }
  return sum;
}

void main()
{
  float (*funcptr)() = NULL;
  printf("please input a number:\n");
  int num = 1;
  float sum = 0;
  scanf("%d",&num);
  if (0 == (num % 2))
  {
    sum = EvenSum(num);
  }
  else
  {
    sum = OddSum(num);
  }
  printf("sum:%f\n",sum);
}
