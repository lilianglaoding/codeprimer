#include <stdio.h>

void swap(int *x, int *y, int *z)
{
    int temp;
    if (*x > *y)
    {
        temp = *x;
        *x = *y;
        *y = temp;
    }
    if (*x > *z)
    {
        temp = *x;
        *x = *z;
        *z = temp;
    }
    if (*y > *z)
    {
        temp = *y;
        *y = *z;
        *z = temp;
    }
}

void main()
{
    int a, b, c;
    scanf("%d,%d,%d",&a,&b,&c);
    int *pointer1 = &a, *pointer2 = &b, *pointer3 = &c;
    swap(pointer1, pointer2, pointer3);
    printf("The sorted number is:%d,%d,%d\n",a,b,c);
}
