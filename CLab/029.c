#include <stdio.h>

void main()
{
    long int a, b, c, d, e;
    long int number;
    scanf("%ld",&number);
    a = number / 10000;
    b = number % 10000 / 1000;
    c = number % 1000 / 100;
    d = number % 100 / 10;
    e = number % 10;
    if (0 != a)
        printf("There are five:%d,%d,%d,%d,%d\n",e, d, c, b, a);
    else if (0 != b)
        printf("There are four:%d,%d,%d,%d\n",e, d, c, b);
    else if (0 != c)
        printf("There are three:%d,%d,%d\n",e, d, c);
    else if (0 != d)
        printf("There are two:%d,%d\n",e, d);
    else
        printf("There are one:%d\n",e);
}   
