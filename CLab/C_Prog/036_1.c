#include <stdio.h>
#include <math.h>

void main()
{
    int m, i, k, h = 0, leap = 1;
    for (m = 1; m <= 100; m++)
    {
        for (i = 2; i <= sqrt(m); i++)
            if (m % i == 0)
            {
                leap = 0;
                break;
            }
        if (leap)
        {
            printf("%-4d",m);
            h++;
        }
        leap = 1;
    }
}
