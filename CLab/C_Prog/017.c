#include <stdio.h>

void main()
{
    char c;
    int letters = 0, space = 0, digital = 0, others = 0;
    while((c = getchar()) != '\n')
    {
        if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            letters++;
        else if(' ' == c)
            space++;
        else if(c >= '0' && c <= '9')
            digital++;
        else
            others++;
    }
    printf("The number of letters is:%d\n",letters);
    printf("The number of space is %d\n",space);
    printf("The number of digital is %d\n",digital);
    printf("The number of others is %d\n",others);
}
