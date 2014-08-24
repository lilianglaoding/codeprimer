#include <stdio.h>
#include <stdlib.h>

void Merge(int R[], int R1[], int s, int m, int t)
{
  int i = s, j = m + 1;
  int k = s;
  while (i < m && j < t)
    if (R[i] < R[j])
      R1[k++] = R[i++];
    else
      R1[k++] = R[j++];
  while (i < m)
    R1[k++] = R[i++];
  while (j < t)
    R1[k++] = R[j++];
}

void MSort(int R[], int R1[], int s, int t)
{
  int m;
  if (s == t)
    R1[s] = R[s];
  else
  {
    m = (s + t) / 2;
    MSort(R, R1, s, m);
    MSort(R, R1, m + 1, t);
    Merge(R1, R, s, m, t);
  }
}

void MergeSort(int R, int n)
{
  Msort(R, 0, n - 1);
}

int main()
{
  int R[5] = {1, 0, 2, 5, 3};
  int R1[5];
  
  return 0;
}
