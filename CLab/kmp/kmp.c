#include <stdio.h>
#include <stdlib.h>

//kmp algorithm:

int StrIndex_KMP(char *s, char *t, int pos, int next[])
{
  int i = pos, j = 1;
  while (i <= s[0] && j <= t[0])
    if (j == 0 || s[i] == t[j])
    {
      i++;
      j++;
    }
    else
      j = next[j]; //compare from tj
  if (j > t[0])
    return i - t[0];
  else
    return 0;
}

//get next function
void GetNext(char t[], int next[])
{
  int i = 1, j = 0;
  next[1] = 0;
  while (i < t[0])
  {
    if (j == 0 || t[i] == t[j])
    {
      i++;
      j++;
      next[i] = j;
    }
    else
      j = next[i];
  }
}

int main()
{
  char t[10] = "9abcaababc";
  char *s = "9abcaababc";
  //s[0] = 9;
  t[0] = 9;
  int next[9];
  GetNext(t, next);
  int index = StrIndex_KMP(s, t, 1, next);
  printf("index: %d\n", index);
  return 0;
}
