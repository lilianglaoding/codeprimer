#include <stdio.h>
#include <stdlib.h>

//kmp algorithm:
// t1t

int StrIndex_KMP(char *s, char *t, int pos, int next[])
{
  int i = pos, j = 1;
  while (i < s[0] && j < t[0])
    if (j == 0 || s[i] == t[j])
    {
      i++;
      j++;
    }
    else
      j = next[j];
  if (j > t[0])
    return i - t[0];
  else
    return 0;
}

int main()
{
  
  //return 0;
}
