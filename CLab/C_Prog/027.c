#include <stdio.h>

void reverse(int n)
{
    char c;
    if (1 == n)
    {
        c = getchar();
        printf("\n");
        putchar(c);
    }
    else
    {
        c = getchar();
        reverse(n - 1);
        putchar(c);
    }
}

void main()
{
    reverse(5);
    printf("\n");
}
