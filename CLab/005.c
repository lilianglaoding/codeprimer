#include <stdio.h>

void main()
{
    int i, j, k, t;
    scanf("%d,%d,%d",&i, &j, &k);
    if(i > j)
    {
        t = i;
        i = j;
        j = t;
    }
    if(i > k)
    {
        t = i;
        i = k;
        k = t;
    }
    if(j > k)
    {
        t = j;
        j = k;
        k = t;
    }
    printf("%d,%d,%d\n",i, j, k);
}
