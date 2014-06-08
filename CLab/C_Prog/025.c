#include <stdio.h>

double jiecheng(int n)
{
    int i = n;
    double outcome = 1;
    for (; i >= 1; i--)
    {
        outcome = outcome * i;
    }
    return outcome;
}

void main()
{
    int num = 1;
    double sum = 0;
    for (; num <= 20; num ++)
    {
        sum = sum + jiecheng(num);
    }
    printf("%f\n",sum);
}
