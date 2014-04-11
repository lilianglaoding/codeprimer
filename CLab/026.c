#include <stdio.h>

int fact(int n)
{
    if (1 == n)
        return 1;
    else
        return n * fact(n - 1);
}

void main()
{
    printf("%d\n",fact(5));
}
