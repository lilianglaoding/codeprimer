#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void main()
{
    char letter = '\0';
    char letter2;
    printf("Please input a letter:\n");
    //letter = getchar();
    scanf("%c",&letter);
    printf("The letter you input is %c\n",letter);
    switch (letter)
    {
        case 'M':
            printf("Monday\n");
            break;
        case 'W':
            printf("Wednesday\n");
            break;
        case 'F':
            printf("Friday\n");
            break;
        case 'S':
            printf("Please input second letter\n");
	    scanf("%c",&letter2);
	    printf("==========%c\n",letter2);
            if ('a' == letter2)
                printf("Saturday\n");
            else if ('u' == letter2)
                printf("Sunday\n");
            else
                printf("error input\n");
            break;
        case 'T':
            printf("Please input second letter\n");
            scanf("%c",&letter2);
            if ('u' == letter2)
                printf("Tuesday\n");
            else if ('h' == letter)
                printf("Thursday\n");
            else
                printf("error input\n");
            break;
        default:
            printf("error input\n");
    }
}
