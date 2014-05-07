#include <stdio.h>

void main()
{
    static int k[10];
    int i, j, n, s;
    for(j = 2; j < 1000; j++)
    {
        n = -1;
        s = j;
        for(i = 1; i <= j; i++)
        {
            if(0 == j % i)
            {
               n++;
               s = s - i;
               k[n] = i;
            }
        }
        if(0 == s)
            printf("%d\n",j);
    }
}
