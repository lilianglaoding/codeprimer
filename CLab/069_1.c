#include <stdio.h>

void main()
{
    int i, k, m, n, num[50], *p;
    printf("Please input the total numbers:");
    scanf("%d",&n);
    p = num;
    for (i = 0; i < n; i++)
    {
        *(p + i) = i + 1;
    }
    i = 0;
    k = 0;
    m = 0;
    while (m < n - 1)
    {
        if (*(p + i) != 0)
            k++;
        if (3 == k)
        {
           *(p + i) = 0;
           k = 0;
           m++;
        }
        i++;
        if (i == n)
            i = 0;
    }
    while (0 == *p)
        p++;
    printf("%d is left\n", *p);
}
