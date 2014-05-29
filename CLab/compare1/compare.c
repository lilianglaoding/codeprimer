#include <stdio.h>

#define MAXSIZE 6

int compare(int *a, int *b, int m, int n)
{
  int i = 0;
  int j;
  int A[MAXSIZE], B[MAXSIZE];
  while (i < m && i < n && a[i] == b[i])
    ++i;
  for (j = i; j < m && j < n; ++j)
  {
    if (a[j] - b[i])
  }
}
