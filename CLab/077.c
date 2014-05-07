#include <stdio.h>

void main()
{
  char *s[] = {"man", "woman", "girl", "boy", "sister"};
  char **q;
  int k;
  for (k = 0; k < 5; k++)
  {
    q = &s[k];
    printf("%s\n", *q);
  }
}
