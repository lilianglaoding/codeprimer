#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    int int_num;
    int str_num;
    struct node* next;
}LNode, *LinkList;

int FindSting(char* input_string, int string_index, char* output_string, int max_output_strlen)
{
    if (NULL == input_string)
        return -1;
    int i = 0;
    int sum = 0;
    while (0 != *(input_string + i))
    {
        while (0 != *(input_string + i) && 32 != *(input_string + i))
        {
            sum = sum * 10 + (*(input_string + i) - 48);
            
        }
    }
}

void main()
{
}
