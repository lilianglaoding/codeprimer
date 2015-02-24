#include <stdio.h>

int main()
{
    int b = 3;
    int arr[] = {-3, 125, 8, 9, 10};
    short int *ptr = arr;
    //*(ptr++) += 1;
    ptr++;
    //printf("%d, %d\n", *ptr, *(ptr++));
    printf("%X, %X\n", arr + 1, ptr);
    //ptr++;
    printf("%d, %d\n", *arr, *ptr);
    return 0;
}
