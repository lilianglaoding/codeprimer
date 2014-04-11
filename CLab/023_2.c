#include <stdio.h>

void draw(int row)
{
    int row_temp = row;
    if(0 == row_temp % 2)
    {
        printf("row number error,you should input an odd row number!\n");
        return;
    }
    int i, j, k;
    for(i = 1; i <= row_temp / 2 + 1; i++)
    {
        for(j = 1; j <= row_temp / 2 - i + 1; j++)
        {
            printf(" ");
        }
        for(k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i = 1; i <= row_temp / 2; i++)
    {
         for(j = 1; j <= i; j++)
         {
             printf(" ");
         }
         for(k = 1; k <= row_temp - 2 * i; k++)
         {
             printf("*");
         }
         printf("\n");
    }
}

void main()
{
    int row = 1;
    printf("Please input an odd row number:\n");
    scanf("%d",&row);
    draw(row);
}
