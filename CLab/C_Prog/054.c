#include <stdio.h>

void main()
{
    unsigned int a, b, c, d;
    scanf("%x",&a);
    b = a >> 4;
    c = ~(~0 << 4);
    d = b & c;
    printf("%x\n%x\n",a,d);
}
