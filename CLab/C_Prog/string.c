#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 10

int stringcat(char* str,char* str1,char* str2)
{
    int i = 0;
    int j = 0;
    for(i = 0; i <= strlen(str1)-1; i++)
    {
        str[i] = str1[i];
    }
    //i = i - 1;
    for(j = 0; j <= strlen(str2)-1; j++)
    {
        str[i+j] = str2[j];
    }
    str[i+j] = '\0';
    return 0;
}

void main()
{
    char str[MAXSIZE];
    char str1[] = "hello";
    char str2[] = "world";n
    printf("%d\n",strlen(str1));
    stringcat(str,str1,str2);
    puts(str);
    puts(str1);
    puts(str2);
    for(int i = 0; i <= 9; i++)
        printf("%c",str[i]);
    printf("\n");
    printf("%c\n",str[5]);
}
