#include <stdio.h>

#define exchange(a,b) \
{\
    int t;\
    t = a;\
    a = b;\
    b = t;\
}

void main()
{
    int x = 10;
    int y = 20;
    printf("x = %d; y = %d\n",x,y);
    exchange(x,y)
    printf("x = %d; y = %d\n",x,y);
}
