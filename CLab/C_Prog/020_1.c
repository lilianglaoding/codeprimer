#include <stdio.h>

void main()
{
    double sn = 100.0, hn = sn / 2;
    int n;
    for(n = 2; n <= 10; n++)
    {
        sn = sn + 2 * hn;
        hn = hn / 2;
    }
    printf("%lf\n",sn);
    printf("%lf\n",hn);
}
