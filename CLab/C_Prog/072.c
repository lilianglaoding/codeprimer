#include <stdio.h>
#include <stdlib.h>

#define NUM 5

typedef struct node {
    int data;
    struct node *next;
} LNode, *LinkList;

void MemFree(LinkList head)
{
    if (NULL == head)
        return ;
    LinkList p = NULL;
    while (head != NULL)
    {
        p = head;
        head = head->next;
        free(p);
    }
}

LinkList CreateList()
{
    LNode *head = NULL;
    head = (LNode *)malloc(sizeof(LNode));
    //head->next = NULL; //this will be set as NULL when in a global mode
    //printf("%x\n",head->next);
    return head;
}

//preinsert
void InsertList(LinkList head)
{
    if (NULL == head)
        return;
    printf("Please input the number and seperated with Enter\n");
    int i = 0;
    LNode *ptr = NULL;
    for (i = 0; i < NUM; i++)
    {
        ptr = (LNode *)malloc(sizeof(LNode));
        if (NULL == ptr)
            return;
        scanf("%d",&ptr->data);
        ptr->next = head->next;
        head->next = ptr;
    }
}

void CatList(LinkList head1, LinkList head2)
{
  
  if (NULL == head1 || NULL == head2)
  {
    return;
  }
  LinkList ptr = NULL;
  ptr = head1;
  while (ptr->next != NULL)
  {
    ptr = ptr->next;
  }
  ptr->next = head2->next;
  free(head2);
  //head->next = head1;
}

void OutputList(LinkList head)
{
    if (NULL == head)
        return;
    printf("The list is:\n");
    while (head->next != NULL)
    {
        printf("%-4d",head->next->data);
        head = head->next;
    }
    printf("\n");
}

int main()
{
  //LinkList head = NULL;
    LinkList head1 = NULL;
    LinkList head2 = NULL;
    //head = CreateList();
    printf("-------List1-------\n");
    head1 = CreateList();
    InsertList(head1);
    OutputList(head1);
    printf("-------List2-------\n");
    head2 = CreateList();
    InsertList(head2);
    OutputList(head2);
    CatList(head1, head2);
    printf("-------List--------\n");
    OutputList(head1);
    MemFree(head1);
    return 0;
}
