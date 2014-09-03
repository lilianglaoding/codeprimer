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
  printf("ms: %d\n", ms);
  printf("ns: %d\n", ns);
  //if (ms == 0 && ns > 0 || ms > 0 && ns > 0 && A[0] < B[0])
  if (ms == 0 && ns > 0 || ms > 0 && ns > 0 && A[0] < B[0])
    return -1;
  else
    return 1;
}

int main()
{
  int a[7] = {0, 1, 2, 3, 4, 4, 5};
  int b[MAXSIZE] = {0, 1, 2, 3, 4, 5};
  int comp = compare(a, b, 7, MAXSIZE);
  printf("%d\n", comp);
}
