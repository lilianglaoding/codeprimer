#include <stdio.h>

/*int con_add(int add, int num)
{
}*/

void main()
{
    int add = 0, num = 0;
    int sum = 0;
    int i = 1, j = 1;
    int temp;
    printf("Please input the number and ther number you want to loop:\n");
    scanf("%d,%d",&add, &num);
    temp = add;
    while(i <= num)
    {
        
        sum = sum + add;
        add = add * 10 + temp;
        i++;
    }
    printf("The sum:",sum);
    for(i = 1; i <= num; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d",temp);
        }
        if(i == num)
            break;
        else
            printf(" + ");
    }
    printf(" = %d\n",sum);
}
