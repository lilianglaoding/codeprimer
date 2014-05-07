#include <stdio.h>
//another solution:
//set same two array:first and second
//first is store original data,second is moved data
//put the m numbers in second,and copy the other data in second close to 
//the m numbers
void move(int *array, int n, int m)
{
    int *arr_end = array + n;
    int *p = array;
    int *ptr = array;
    int temp = 0;
    int i = n;
    int j = m;
    for (p = array; p < array + j; p++)
    {
        temp = *(arr_end - 1);
        printf("%d\n",temp);
        for (ptr = arr_end - 1; ptr > array; ptr--)
        {
            *ptr = *(ptr - 1);
        }
        *array = temp;
    }
    return ;
}

void main()
{
    int array[] = {0,1,2,3,4,5,6,7,8,9,10};
    move(array,11,4);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        printf("%4d",array[i]);
    }
    printf("\n");
}
