#include <stdio.h>
#include <string.h>

int main()
{
    char *a = "this";
    char *b = 0;
    char *c = strstr(a, b);
    printf("%s\n", c);
    return 0;
}

















