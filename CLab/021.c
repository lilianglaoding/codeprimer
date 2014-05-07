#include <stdio.h>

int total_peach(int day)
{
    if(10 == day)
        return 1;
    else
        return (total_peach(day + 1) + 1) * 2;
}

void main()
{
    int peach = 0;
    int day = 0;
    peach = total_peach(1);
    printf("Total peach is:%d\n",peach);
}
