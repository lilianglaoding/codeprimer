#include <stdio.h>
#define N 10

void sort1(int *array,int num)
{
    int i = 0, j = 0;
    int temp;
    for (i = 0; i < num - 1; i++)
    {
        for (j = 0; j < num - i - 1; j++)
        {
            if (*(array + j + 1) < *(array + j))
            {
                temp = *(array + j + 1);
                *(array + j + 1) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}

void sort2(int *array, int num)
{
    int i = 0, j = 0;
    int temp;
    for (i = 0; i < num - 2; i++)
    {
        for (j = i + 1; j < num - 1; j++)
        {
            if (*(array + i) > *(array + j))
            {
                temp = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = temp;
            }
        }
    }
}

void main()
{
    int i = 0;
    int a[N] = {10,9,8,7,6,5,4,3,2,1};
    int b[N] = {10,9,8,7,6,5,4,3,2,1};
    sort1(a,10);
    for (i = 0; i < 10; i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
    printf("-----------------------------------------");
    printf("\n");
    sort2(b,10);
    for (i = 0; i < 10; i++)
    {
        printf("%4d",a[i]);
    }
    printf("\n");
}
