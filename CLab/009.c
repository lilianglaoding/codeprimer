#include <stdio.h>

void main()
{
    int i, j;
    for(i = 0; i < 8; i++)
    {
        for(j = 0; j < 8; j++)
        {
            if(0 == (i + j) % 2)
                printf("%c",99);
            else
                printf(" ");
        }
        printf("\n");
    }
}
