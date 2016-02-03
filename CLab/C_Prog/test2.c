#include <stdio.h>

int main()
{
    int a = 5, b = 4;
    int c = a - b;
    c = unsigned(c) >> (sizeof(int) * 8 - 1);
    printf("%d\n", c);
    printf("%d",a);
    return 0;
}
