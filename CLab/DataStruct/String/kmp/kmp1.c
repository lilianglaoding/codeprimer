#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void GetNext(char *pattern, int next[])
{
    int j, k;
    j = 0;
    k = -1;

    next[0] = -1;
    while (pattern[j] != '\0')
    {
        if (k == -1 || pattern[k] == pattern[j])
        {
            k++;
            j++;
            if (pattern[k] != pattern[j])
            {
                next[j] = k;
            }
            else
            {
                next[j] = next[k];
            }
        }
        else
        {
            k = next[k];
        }
    }
    
    for (k = 0; k < j; k++)
    {
        printf("%d ", next[k]);
    }
    printf("\n");
}

int IndexKMP(char *str, char *pattern)
{
    int next[10] = {0};
    GetNext(pattern, next);
    int i, j;
    i = 0;
    j = 0;
    while (str[i] != '\0' && pattern[j] != '\0')
    {
        if (str[i] == pattern[j])
        {
            i++;
            j++;
        }
        else
        {
            if (next[j] >= 0)
            {
                j = next[j];
            }
            else
            {
                i++;
                j++;
            }
        }
    }
    if (pattern[j] == '\0')
        return i - strlen(pattern);
    return -1;
}

int main()
{
    char *str = "aaaaaaaaaaaaaab";
    char *pattern = "aaaaaaab";
    int index = IndexKMP(str, pattern);
    printf("%d\n", index);
    return 1;
}
