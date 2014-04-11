#include <stdio.h>

void main()
{
    int num1 = 1, num2 = 1;
    int temp = 1;
    int a = 1, b = 1; 
    printf("Please input two numbers,and seprated with ','\n");
    scanf("%d,%d",&num1,&num2);
    if(num1 < num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    a = num1, b = num2;
    while(b != 0)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
    printf("The max divisor is:%d\n",a);
    printf("The min multiple is %d\n",num1 * num2 / a);
}
