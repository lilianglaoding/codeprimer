#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tagarc
{
    int row;
    int col;
    int vertex;
} arc;

int sum(int *arr, int size)
{
    int i = 0;
    int sum = 0;
    for (i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int main()
{
    arc arcagle;
    arcagle.row = 1;
    int a[10] = {1, 2, 3, 4};
    int sum = sum(a, 10);
    return 0;
}
















