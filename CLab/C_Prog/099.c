#include "head.h"

void main()
{
  FILE *fp;
  int i = 0;
  int temp = 0;
  char str[100];
  char ch;
  if ((fp = fopen("A", "r")) == NULL)
  {
    printf("Can't open the file:\n");
    return;
  }
  for (i = 0; (ch = fgetc(fp)) != EOF; i++)
  {
    str[i] = ch;
  }
  fclose(fp);
  if ((fp = fopen("B", "r")) == NULL)
  {
    printf("Can't open the file:\n");
    return;
  }
  for (; (ch = fgetc(fp)) != EOF; i++)
  {
    str[i] = ch;
  }
  fclose(fp);
  if ((fp = fopen("C", "w")) == NULL)
  {
    printf("Can't open the file:\n");
    return;
  }
  for (temp = 0; temp < i; temp++)
  {
    fputc(str[temp], fp);
  }
  fclose(fp);
}
