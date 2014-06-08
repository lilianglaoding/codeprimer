#include <stdio.h>
#define N 9

void main()
{
     int a[N] = {1,2,3,4,5,6,7,8,9};
     int temp;
     int i = 0;
     for (i = 0; i < N / 2; i++)
     {
         temp = a[i];
         a[i] = a[N - i - 1];
         a[N - i - 1] = temp;
     }
     for (i = 0; i < N; i++)
         printf("%3d",a[i]);
     printf("\n");
}
