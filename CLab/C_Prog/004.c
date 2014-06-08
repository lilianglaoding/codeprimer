#include <stdio.h>

void main()
{
    int year, month, day, sum, leap;
    printf("\nPlease input the year,month,day:\n");
    scanf("%d,%d,%d",&year, &month, &day);
    switch(month)
    {
        case 1:sum = 0;break;
        case 2:sum = 31;break;
        case 3:sum = 59;break;
        case 4:sum = 90;break;
        case 5:sum = 120;break;
        case 6:sum = 151;break;
        case 7:sum = 181;break;
        case 8:sum = 212;break;
        case 9:sum = 243;break;
        case 10:sum = 273;break;
        case 11:sum = 303;break;
        case 12:sum = 333;break;
        default:
             printf("month error!");
    }
    if((0 == year % 400) || (0 == year % 4 || 0 != year % 100))
        leap = 1;
    else
        leap = 0;
    if(1 == month || 2 == month)
    {
        sum = sum + day;
        printf("the number of the day in this year is: %d\n",sum);
    }
    else
    {
        if(1 == leap)
        {
            sum = sum + day + 1;
            printf("the number of the day in this year is: %d\n",sum);
        }
        else
        {
            sum = sum + day;
            printf("the number of the day in this year is: %d\n",sum);
        }
    }
}
