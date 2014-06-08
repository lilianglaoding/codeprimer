#include <stdio.h>

void main()
{
    int i = 0, j = 0, k = 0;
    int water_flower = 0;
    for(water_flower = 100; water_flower <= 999; water_flower++)
    {
        i = water_flower / 100;
        j = water_flower / 10 % 10;
        k = water_flower % 10;
        if(water_flower == i*i*i + j*j*j + k*k*k)
            printf("%-4d",water_flower);
    }
    printf("\n");
}
