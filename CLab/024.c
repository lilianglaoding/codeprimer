#include <stdio.h>

void main()
{
    double fenzi = 2;
    double fenmu = 1;
    double sum = 0;
    double temp = 0;
    for (int i = 1; i <= 20; i++)
    {
        sum = sum + fenzi / fenmu;
        temp = fenzi;
        fenzi = fenzi + fenmu;
        fenmu = temp;
    }
    printf("%f\n",sum);
}
