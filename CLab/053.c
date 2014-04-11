#include <stdio.h>

void main()
{
    int a, b;
    a = 0xFF;
    b = a ^ 0xFF;
    printf("\40:The a ^ b is %d\n",b);
    b = b ^ 0xFF;
    printf("\40:The b ^ 0xFF is %x\n",b);
}
