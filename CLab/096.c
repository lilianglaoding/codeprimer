#include "head.h"

void main()
{
  char str1[20], str2[20], *p1, *p2;
  int sum = 0;
  printf("Please input the first string:\n");
  scanf("%s", str1);
  printf("Please input the second string:\n");
  scanf("%s", str2);
  p1 = str1;
  p2 = str2;
  while (*p1 != '\0')
  {
    if (*p1 == *p2)
    {
      while (*p1 == *p2 && *p2 != '\0')
      {
        p1++;
        p2++;
      }
    }
    else
      p1++;
    if (*p2 == '\0')
      sum++;
    p2 = str2;
  }
  printf("%d\n", sum);
  getchar();
}
