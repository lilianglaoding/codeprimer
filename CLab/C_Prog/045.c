#include <stdio.h>

void main()
{
    register int i;
    int tmp = 0;
    for (i = 0; i <= 100; i++)
        tmp += i;
    printf("The sum is %d\n",tmp);
}
