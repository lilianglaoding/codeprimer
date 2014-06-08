#include <stdio.h>

int age(int n)
{
    if (1 == n)
        return 10;
    else
        return (age(n - 1) + 2);
}

void main()
{
    printf("%d\n",age(5));
}
