#include <stdio.h>
#include <math.h>

void main()
{
    int i = 0;
    int j = 0;
    for (i = 1; i <= 100; i++)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if (0 == i % j)
                break;
            else
            {
                printf("%-4d",i);
                break;
            }
        }
    }
    printf("\n");
}
