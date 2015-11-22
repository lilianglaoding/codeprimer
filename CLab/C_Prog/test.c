#include <stdio.h>
#include <stdlib.h>

struct S
{
    int i;
    int *p;
};

int main()
{
    int *ptr;
    //ptr = (int *)0x8000;
    //*ptr = 0xaabb;
    struct S s;
    int *q = &s.i;
    printf("&s.i:%x, &s.p:%x, q0: %x, q1:%x\n", &s.i, &s.p, q[0], q[1]);
    q[0] = 4;
    q[1] = 3;
    printf("q:   %x, q+1: %x\n", q, q + 1);
    s.p = q;
    printf("s.p[0]:%x, s.p[1]:%x\n", s.p[0], s.p[1]);
    s.p[1] = 1;
    s.p[0] = 2;
    return 0;
}
