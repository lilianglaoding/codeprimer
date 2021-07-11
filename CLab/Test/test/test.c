#include <stdio.h>
#include <stdlib.h>

typedef struct linklist
{
    int data;
    struct linklist *next;
} * LinkList;

int main()
{
    int a = 0;
    LinkList list;
    list->next = NULL;
    printf("Hello, world!\n");
    return 0;
}
