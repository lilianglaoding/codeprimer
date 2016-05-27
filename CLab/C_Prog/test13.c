#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 1024

typedef struct NodeType
{
    unsigned int data;
    struct NodeType *lchild;
    struct NodeType *rchild;
} BiTreeNode, *BiTree;

void CreateRoot(BiTreeNode **t)
{
    if (*t == NULL)
    {
        *t = (struct NodeType *)malloc(sizeof(struct NodeType));
        (*t)->data = 65535;
        (*t)->lchild = NULL;
        (*t)->rchild = NULL;
    }
    return ;
}

void InsertLchild(BiTreeNode *t, unsigned int x)
{
    BiTree p = NULL;
    p = (BiTreeNode *)malloc(sizeof(BiTreeNode));
    p->data = x;
    p->lchild = NULL;
    p->rchild = NULL;

    if (t->lchild == NULL)
        t->lchild = p;
    else
    {
        p->lchild = t->lchild;
        t->lchild = p;
    }
    return ;
}

void InsertRchild(BiTreeNode *t, unsigned int x)
{
    BiTree p = NULL;
    p = (BiTreeNode *)malloc(sizeof(BiTreeNode));
    p->data = x;
    p->lchild = NULL;
    p->rchild = NULL;

    if (t->rchild == NULL)
        t->rchild = p;
    else
    {
        p->rchild = t->rchild;
        t->rchild = p;
    }
    return ;
}

void PreOrder(BiTreeNode *t)
{
    if (t == NULL)
        return ;
    printf("%d ", t->data);
    PreOrder(t->lchild);
    PreOrder(t->rchild);
}

void InOrder(BiTreeNode *t)
{
    if (t == NULL)
        return ;
    InOrder(t->lchild);
    printf("%d ", t->data);
    InOrder(t->rchild);
}

void PostOrder(BiTreeNode *t)
{
    if (t == NULL)
        return ;
    PostOrder(t->lchild);
    PostOrder(t->rchild);
    printf("%d ", t->data);
}

void Destroy(BiTreeNode *t)
{
    if (t == NULL)
        return ;
    Destroy(t->lchild);
    Destroy(t->rchild);
    free(t);
}

void LevelVisit(BiTreeNode *t)
{
    BiTreeNode *Queue[MAXSIZE];
    int front, rear;
    front = -1;
    rear = 0;
    Queue[rear] = t;
    while (front != rear)
    {
        front++;
        printf("%d ", Queue[front]->data);
        if (Queue[front]->lchild != NULL)
        {
            rear++;
            Queue[rear] = Queue[front]->lchild;
        }
        if (Queue[front]->rchild != NULL)
        {
            rear++;
            Queue[rear] = Queue[front]->rchild;
        }
    }
}

void PreOrderInsert(BiTree *t)
{
    int x;
    scanf("%d", &x);
    if (x == 0)
    {
        *t = NULL;
    }
    else
    {
        *t = (BiTreeNode *)malloc(sizeof(BiTreeNode));
        (*t)->data = x;
        PreOrderInsert(&((*t)->lchild));
        PreOrderInsert(&((*t)->rchild));
    }
}

void NRPreOrder(BiTreeNode *t)
{
    BiTreeNode *p = NULL;
    BiTreeNode *stack[MAXSIZE];
    int top = -1;

    p = t;
    while (!(p == NULL && top == -1))
    {
        while (p)
        {
            printf("%d ", p->data);
            top++;
            stack[top] = p;
            p = p->lchild;
        }

        if (top == -1)
            return ;
        else
        {
            p = stack[top];
            top--;
            p = p->rchild;
        }
    }
}

int main()
{
    BiTreeNode *t = NULL;
    CreateRoot(&t);
    int i = 0;
    for (i = 0; i < 10; i++)
    {
        InsertLchild(t, i);
        InsertRchild(t, i);
    }
    PreOrder(t);
    printf("\n");
    NRPreOrder(t);
    printf("\n");
    LevelVisit(t);
    printf("\n");
    Destroy(t);
    return 0;
}
