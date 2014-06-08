#include <stdio.h>

void main()
{
    int sum = 0;
    int i = 0, j = 0;
    int range = 1;
    int factor = 1;
    for(range = 1; range <= 1000; range++)
    {
        sum = 0;
        i = range;
        factor = 2;
        while(factor <= i)
        {
            if(0 == i % factor)
            {
                i = i / factor;
                sum = sum + factor;
            }
            else
            {
                factor++;
            }
        }
        if(range == sum + 1)
            printf("%-3d",range);
    }
    printf("\n");
}
