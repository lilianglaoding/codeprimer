#include <stdio.h>
#include <math.h>

void main()
{
    int i = 0;
    int leap = 0;
    int count = 0;
    for (i = 1; i <= 100; i++)
    {
        int k = 1;
        for (k = 2; k <= sqrt(i); k++)
        {
            if (0 == i % k)
            {
                leap = 0;
                break;
            }
            else
                leap = 1;
        }
        if (1 == leap)
        {
            printf("%-4d",i);
            count++;
            if (0 == count % 10)
                printf("\n");
        }
        leap = 0;
    }
    printf("\n");
}
