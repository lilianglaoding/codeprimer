#include <stdio.h>

void main()
{
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int sum = 0;
    int i = 0;
    for (i = 0; i < 3; i++)
        sum = sum + a[i][i];
    printf("%d\n",sum);
}
