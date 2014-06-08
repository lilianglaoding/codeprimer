#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 255

int stringcat(char* str,char* str1,char* str2)
{
    int i = 0;
    int j = 0;
    for(i = 0; i <= strlen(str1)-1; i++)
    {
        str[i] = str1[i+1];
    }
    //i = i - 1;
    for(j = 0; j <= strlen(str2)-1; j++)
    {
        str[i+j] = str2[j+1];
    }
    return 0;
}

void main()
{
    char str[MAXSIZE];
    char str1[] = "hello";
    char str2[] = "world";
    printf("%d\n",strlen(str1));
    stringcat(str,str1,str2);
    puts(str);
    for(int i = 0; i <= 9; i++)
        printf("%c",str[i]);
    printf("\n");
    printf("%c\n",str[5]);
}
