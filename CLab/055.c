#include <stdio.h>

void main()
{
    unsigned int a, b;
    a = 0xff;
    b = ~a;
    printf("%x\n",b);
    a = ~b;
    printf("%x\n",a);
}
