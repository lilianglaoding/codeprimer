#include <stdio.h>

/*void swap(int *r, int *s)
{
    int *t;
    t = r;
    r = s;
    s = t;
}*/

void swap(int **r, int **s)
{
    int *t;
    t = *r;
    *r = *s;
    *s = t;
}

main()
{
    int a = 1, b = 2, *p, *q;
    p = &a;
    q = &b;
    swap(&p,&q);
    printf("%d,%d\n",*p, *q);
}
