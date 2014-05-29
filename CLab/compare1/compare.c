#include <stdio.h>

#define MAXSIZE 6

int compare(int *a, int *b, int m, int n)
{
  int i = 0;
  int j;
  int ms = 0;
  int ns = 0;
  int A[MAXSIZE], B[MAXSIZE];
  while (i < m && i < n && a[i] == b[i])
    ++i;
  for (j = i; j < m; ++j)
  {
    A[j - i] = a[j];
    ++ms;
  }
  for (j = i; j < n; ++j)
  {  
    B[j - i] = b[j];
    ++ns;
  }
  if (ms == ns && ms == 0)
    return 0;
}
