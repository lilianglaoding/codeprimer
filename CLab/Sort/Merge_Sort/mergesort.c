#include <stdio.h>
#include <stdlib.h>

// R[] consists of R[s..m] and R[m + 1.. t]
// and merge it to S[]
void Merge(int R[], int S[], int s, int m, int t)
{
  int i = s, j = m + 1;
  k = 0;
  while (i <= m && j <= t)
  {
    if (R[i] < R[j])
      S[k++] = R[i++];
    else
      S[k++] = R[j++];
  }
  while (i <= m)
    S[k++] = R[i++];
  while (j <= t)
    S[k++] = R[j++];
}

//////////////////////////////////////////////////////////////
//merge the R[] to R1[]
void MergePass(int R[], int R1[], int len, int n)
{
  int i;
  for (i = 1; i + 2 * len - 1 <= n; i = i + 2 * len)
    Merge(R, R1, i, i + len -1, i + 2 * len - 1);
  if (i + len - 1 < n)
    Merge(R, R1, i, i + len - 1; n);
  else if (i <= n)
    while (i <= n)
      R1[i++] = R[i++];
}

void MergeSort(int R[], int n)
{
  int len = 1;
  while (len < n)
  {
    MergePass(R, R1, len);
    len = len * 2;
    MergePass(R1, R, len);
  }
}

/////////////////////////////////////////////////////////////

void Msort(int R[], int R1[], int s, int t)
{
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

void MergeSort(int R[], int n)
{
  MSort(R, R1, 1, n);
}

//////////////////////////////////////////////////////////
