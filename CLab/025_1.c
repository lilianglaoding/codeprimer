#include <stdio.h>

void main()
{
    int num = 1;
    double outcome = 1;
    double sum = 0;
    while (num <= 20)
    {
        outcome = outcome * num;
        sum = sum + outcome;
        num++;
    }
    printf("%f\n",sum);
}
