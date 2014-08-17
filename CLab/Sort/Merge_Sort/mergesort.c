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
