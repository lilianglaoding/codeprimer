#include <stdio.h>
#include <math.h>

void main()
{
    int *p;
    const int i = 10;
    p = &i;,
    //p = (int *)&i;
    *p = *p + 1;
    printf("i:%d,*p:%d\n",i,*p);
}
