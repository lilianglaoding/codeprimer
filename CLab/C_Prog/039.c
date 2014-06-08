#include <stdio.h>

#define N 15

void main()
{
    int i = 0,j = 0;
    int temp;
    int a[15] = {1,2,3,4,5,7,8,9,10};
    int num;
    scanf("%d",&num);
    for (i = 0; i < 9; i++)
    {
        if (num < a[i])
        {
            for (j = 8; j >= i; j--)
            {
                a[j + 1] = a[j];
            }
            a[i] = num;
            break;
        }
    }
    if (i == 9)
       a[i] = num;
    for (i = 0; i < 10; i++)
    {
       printf("%3d",a[i]);
    }
    printf("\n");
}
