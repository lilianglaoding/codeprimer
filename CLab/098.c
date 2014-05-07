#include "head.h"

void tosuper(char *a)
{
  int i = 0;
  while (*(a + i) != '\0')
  {
    if (*(a + i) >= 'a' && *(a + i) <= 'z')
    {
      *(a + i) = *(a + i) - 32;
    }
    i++;
  }
}

void putfile(FILE *fp, char *a)
{
  int i = 0;
  while (*(a + i) != '\0')
  {
    fputc(*(a + i), fp);
    i++;
  }
}

void main()
{
  char str[100] = "I want to buy NOKIA lumia 720T";
  FILE *fp;
  fp = fopen("filetest", "w");
  if (fp == NULL)
  {
    printf("Can't open the file\n");
    return;
  }
  printf("%s\n", str);
  tosuper(str);
  printf("%s\n", str);
  putfile(fp, str);
  fclose(fp);
}
