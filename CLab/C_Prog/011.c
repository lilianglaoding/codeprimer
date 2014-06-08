#include <stdio.h>

#define MONTH_ERROR 0

int f(int month)
{
    int tmp_month = month;
    int tmp_sum;
    if(month > 0)
    {
        if(1 == tmp_month || 2 == tmp_month)
        {
            tmp_sum = 1;
            //return tmp_sum;
        }
        else
        {
            tmp_sum = f(month - 1) + f(month - 2);
        }
        return tmp_sum;
    }
    else
    {
        return MONTH_ERROR;
    }
}

void main()
{
    int month = 0; 
    int sum = 0;
    printf("=================================\n");
    printf("Please input the month:\n");
    scanf("%d",&month);
    printf("The month you input is:%d\n",month);
    sum = f(month);
    if(sum != MONTH_ERROR)
        printf("The total number of rabbit is:%d\n",sum);
    else
        printf("The month you input is illegal\n");
    printf("=================================\n");
}
