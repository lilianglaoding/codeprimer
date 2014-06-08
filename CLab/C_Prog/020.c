#include <stdio.h>

float height(int num);
float length_sum(int num);

float length_sum(int num)
{
   if(1 == num)
       return 100;
   else
       return length_sum(num - 1) + 2 * height(num - 1);
}

float height(int num)
{
    if(1 == num)
        return 50;
    else
        return height(num - 1) / 2;
}

void main()
{
    float length = 0;
    float height1 = 0;
    length = length_sum(10);
    height1 = height(10);
    printf("The total length is:%f\n",length);
    printf("The 10 times height is:%f\n",height1);
    return ;
}
