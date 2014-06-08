#include <stdio.h>
#include <string.h>

void main()
{
    char letter;
    printf("Please input the first leter of someday\n");
    while ((letter = getchar()) != 'Y')
    {
        switch (letter)
        {
            case 'S':
            printf("Please input the second letter\n");
            if ((letter = getchar()) == 'a')
                printf("Saturday\n");
            else if((letter = getchar()) == 'u')
                printf("Sunday\n");
            else
                printf("data error!\n");
                break;
            case 'T':
            printf("Please input the second letter\n");
            if ('h' == (letter = getchar()))
                printf("Thursday\n");
            else if ('u' == (letter = getchar()))
                printf("Tuesday\n"); 
            else
                printf("data error\n");
                break;
            case 'M':
                printf("Monday\n");
                break;
            case 'W':
                printf("Wednesday\n");
                break;
            case 'F':
                printf("Friday\n");
                break;
            default:
                printf("data error!\n");
        }
    }
}
