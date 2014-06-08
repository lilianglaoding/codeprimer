#include <stdio.h>

void main()
{
    int sum = 0;
    int i = 0;
    int range = 1;
    int factor = 1;
    for(range = 1; range <= 1000; range++)
    {
        sum = 1;
        i = range;
        factor = 2;
        while(factor < i)
        {
            if(0 == i % factor)
            {
                sum = sum + factor;
                //factor++;
            }
            factor++;
        }
        if(range == sum)
            printf("%-5d",range);
    }
    printf("\n");
}
