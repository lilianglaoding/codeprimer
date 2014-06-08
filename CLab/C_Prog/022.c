#include <stdio.h>

void main()
{
    char team1, team2, team;
    for(team1 = 'a'; team1 <= 'c'; team1++)
    {
        for(team2 = 'x'; team2 <= 'z'; team2++)
        {
            team = team2 - team1;
            if(team != 'x' - 'a' && team != 'x' - 'c' && team != 'z' - 'c')
                printf("%c---%c\n",team1, team2);
        }
    }
}
