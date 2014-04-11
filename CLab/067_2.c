#include <stdio.h>

void output(int array[], int length);

void input(int array[], int length)
{
    int i = 0;    
    for(i = 0; i < length; i++)
    {
        scanf("%d",&array[i]);
    }
    return ;
}

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
	    printf("debug max %d\n",*max);
	}
        else if (*p < *min)
            min = p;
    }
    printf("-----swap------\n");
    printf("max %d\n",*max);
    printf("min %d\n",*min);
    temp = array[0];
    array[0] = *max;
    printf("debug array[0]:%d\n",array[0]);
    *max = temp;
    temp = array[length - 1];
    printf("debug array[%d]:%d\n",length - 1,array[length - 1]);
    array[length - 1] = *min;
    *min = temp;
    output(array, length);
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
    printf("---------main-----------\n");
    printf("array[0]:%d\n",array[0]);
    printf("array[9]:%d\n",array[9]);
    printf("The swaped number is:\n");
    output(array, 10);
    //output(array, 10);
}
