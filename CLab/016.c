#include <stdio.h>
#include <math.h>

void main()
{
    int num1 = 1, num2 = 1;
    int divisor = 1;
    int multiple = 1;
    int temp = 1;
    printf("Please input the two number:\n");
    scanf("%d,%d",&num1,&num2);
    int factor = 1;
    for(factor = 1; factor <= num1 && factor <= num2; factor ++)
    {
        if((0 == num1 % factor) && (0 == num2 % factor))
            divisor = factor;
    }
    if(num1 > num2)
    {
        factor = num1;
        num1 = num2;
        num2 = factor;
    }
    factor = num1;
    while(0 != num2 % factor )
    {
        temp++;
        num2 = num2 * temp;
    }
    multiple = num2;
    printf("divisor:%d\n",divisor);
    printf("multiple:%d\n",multiple);
    //printf("multiple:%d\n",((num1*num2)/divisor)); //num2 is modified in the second while
}
