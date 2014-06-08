#include <stdio.h>
#include <math.h>

void main()
{
    long int i;
    long int x, y;
    for(i = 1; i <= 100000; i++)
    {
        x = sqrt(i + 100);
        y = sqrt(i + 168);
	if(x * x == i + 100 && y * y == i + 168)
            printf("%d\n",i);
    }
}
