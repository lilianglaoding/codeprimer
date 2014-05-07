#include <stdio.h>

void main()
{
    long int number;
    long int a, b, c, d, e;
    scanf("%d",&number);
    a = number / 10000;
    b = number % 10000 / 1000;
    d = number % 100 / 10;
    e = number % 10;
    if (a == e && b == d)
    {
        printf("This is a huiwen shu\n");
    }
    else
        printf("This is not a huiwen shu\n");
}
