#include <stdio.h>
#include <math.h>

int main()
{
    int arr[] = {6, 7, 8, 9, 10};
    short int *p = arr;
    p++;
    printf("%d\n", *p);
    return 0;
}
