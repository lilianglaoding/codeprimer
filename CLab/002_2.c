#include <stdio.h>

void main()
{
    char i, j, k;
    for(i = 'x'; i <= 'z'; i++)
        for(j = 'x'; j <= 'z'; j++)
            for(k = 'x'; k <= 'z'; k++)
            {
                if(i != j && i != k && j != k && i != 'x' && k != 'z' && k != 'z')
                    printf("a---%c\tb---%c\tc---%c\n",i, j, k);
            }
}
