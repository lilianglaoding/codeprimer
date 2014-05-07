#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int is_mersenne(int number)
{
    int i = 0;
    for(i = 1; i <= sqrt(number); i++)
    {
        if(0 == number % i)
            return 1;
        else
            return 0;
    }
}

void main()
{
    int number = 1;
    int factor = 2;
    scanf("%d",&number);
    printf("The number you input is:%d\n",number);
    /*for(factor = 2; factor <= number; factor++)
    {
        
        if(0 == number % factor)
        {
            printf("%d*",factor);
            number = number / factor;
        }
        else
            printf("%d",factor);
    }*/
    if(number < 0)
        printf("%d=-",number);
    else
        printf("%d=",number);
    number = abs(number);
    while(factor < number)
    {
        if(0 == number % factor)
        {
            printf("%d*",factor);
            number = number / factor;
        }
        else
        {
            factor++;
        }
        if(factor == number)
           break;
    }
    printf("%d\n",number);
    //printf("\n");
}
