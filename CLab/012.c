#include <stdio.h>
#include <math.h>

void main()
{
    int count = 0;
    int i = 0;
    int j = 0;
    for(int i = 101; i <= 200; i++)
    {
        for(j = 2; j <= sqrt(i); j++)
        {
            if(0 == i % j)
                break;
            else
            {
                printf("%-4d",i);
                count++;
                if(0 == count % 10)
                    printf("\n");
                break;
            }
        }
    }
    printf("\nThe number is:%d\n",count);
}
