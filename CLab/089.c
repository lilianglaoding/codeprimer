#include "head.h"

void output(int *a, int number);

void add_5(int *a, int number)
{
  int i = 0;
  for (i = 0; i < number; i++)
  {
    *(a + i) += 5;
  }
}

void divide_10(int *a, int number)
{
  int i = 0;
  for (i = 0; i < number; i++)
  {
    *(a + i) = *(a + i) % 10;
  }
}

void swap(int *a, int number)
{
  int i = 0, j = 0;
  int t = 0;
  for (i = 0, j = 0; i < number / 2; i++, j++)
  {
    t = *(a + i);
    *(a + i)  = *(a + number - j - 1);
    *(a + number - j - 1) = t;
    output(a, number);
  }
}

void output(int *a, int number)
{
  int i = 0;
  for (i = 0; i < number; i++)
  {
    printf("%-4d", a[i]);
  }
  printf("\n");
}

void main()
{
  int i = 0;
  int a[4] = {1, 2, 3, 4};
  add_5(a, 4);
  output(a, 4);
  divide_10(a, 4);
  output(a, 4);
  swap(a, 4);
  output(a, 4);
  /*  for (i = 0; i < 4; i++)
  {
    printf("%-4d", a[i]);
    }*/
  printf("\n");
}
