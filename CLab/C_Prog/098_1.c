#include "head.h"
 
void main()
{
  FILE *fp;
  char str[100], filename[10];
  int i = 0;
  if ((fp = fopen("testnn", "w")) == NULL)
  {
    printf("can't open the file\n");
    exit(0);
  }
  printf("Please input a string:\n");
  //gets(str);
  scanf("%s", str);
  while (str[i] != '!')
  {
    if (str[i] >= 'a' && str[i] <= 'z')
      str[i] = str[i] - 32;
    fputc(str[i], fp);
    i++;
  }
  fclose(fp);
  fp = fopen("testnn", "r");
  fgets(str, strlen(str) + 1, fp);
  printf("%s\n", str);
  fclose(fp);
}
