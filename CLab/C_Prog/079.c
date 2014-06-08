#include <stdio.h>
#include <string.h>

void swap(char *str1, char *str2)
{
  char str[20];
  strcpy(str, str1);
  strcpy(str1, str2);
  strcpy(str2, str);
}

void main()
{
  char str1[20], str2[20], str3[20];
  printf("Please input three strings\n");
  scanf("%s",str1);
  scanf("%s",str2);
  scanf("%s",str3);
  if (strcmp(str1, str2) > 0)
  {
    swap(str1, str2);
  }
  if (strcmp(str1, str3) > 0)
  {
    swap(str1, str3);
  }
  if (strcmp(str2, str3) > 0)
  {
    swap(str2, str3);
  }
  printf("The sorted strings are %s, %s, %s\n",str1, str2, str3);
}
