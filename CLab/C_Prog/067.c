#include <stdio.h>

/*int main()
{
    int array[10];
    input(array, 10);
    swap(array, 10);
    output(array, 10);
    return 0;
}*/

void input(int array[], int length)
{
    int i = 0;    
    for(i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }
    return ;
}

/*void swap(int array[], int length)
{
    int temp = 0;
    int i = 0;
    for (i = 0; i < length; i++)
    {
        if (array[i] > array[0])
        {
            temp = array[0];
            array[0] = array[i];
            array[i] = temp;
            continue;
        }
        if (array[i] < array[length - 1])
        {
            temp = array[length - 1];
            array[length - 1] = array[i];
            array[i] = temp;
        }
    }
}*/

void swap(int array[], int length)
{
    int *head = array;
    int *tail = array + length - 1;
    int *p = array;
    int *max, *min;
    max = min = array;
    int temp;
    for (p = array; p <= tail; p++)
    {
        if (*p > *max)
	{
            max = p;
	    //printf("debug max %d\n",*max);
	}
        else if (*p < *min)
            min = p;
    }
    temp = array[0];
    array[0] = *max;
    *max = temp;
    temp = array[length - 1];
    array[length - 1] = *min;
    *min = temp;
}

void output(int array[], int length)
{
    int i = 0;
    for (i = 0; i < length; i++)
    {
        printf("%4d",array[i]);
    }
    printf("\n");
}

void main()
{
    int array[10] = {0};
    input(array, 10);
    printf("The input number is:\n");
    output(array, 10);
    swap(array, 10);
    printf("The swaped number is:\n");
    output(array, 10);
}
