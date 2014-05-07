#include <stdio.h>
#include <string.h>

#define MAXSIZE 20

int StrLength(char *str);

void main()
{
    int length = 0;
    //char str[MAXSIZE];
    char *str = "Hellocpp";
    printf("Please input a string:\n");
    //scanf("%s", str);
    length = StrLength(str);
    printf("The length of the string is %d\n",length);
}

int StrLength(char *str)
{
    char *pointer = NULL;
    pointer = str;
    int i = 0;
    int count = 0;
    while (*(pointer + i) != '\0')
    {
        count++;
        i++;
    }
    return count;
}
