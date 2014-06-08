#include <stdio.h>
#include <string.h>

void main()
{
    int i, j;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%c",99);
            if(i == j)
            {
                printf("\n");
                break;
            }
        }
    }
}
