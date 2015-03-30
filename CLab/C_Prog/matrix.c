#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 6

typedef struct node
{
    int rownum;
    int colnum;
    int matrix[MAXSIZE][MAXSIZE];
} NodeType;

void mulmatrix(NodeType *mul, NodeType *p, NodeType *q)
{
    int i, j, k;
    int sum;
    if (!mul || !p || !q || p->rownum == 0 || p->colnum != q->rownum)
	return ;
    for (i = 0; i < p->rownum; i++)
	for (j = 0; j < q->colnum; j++)
	{
	    sum = 0;
	    for (k = 0; k < p->colnum; k++)
	    {
		sum = sum + p->matrix[i][k] * q->matrix[k][j];
	    }
	    p->matrix[i][j] = sum;
	}
}

void print(NodeType *p)
{
    int i, j;
    for (i = 0; i < p->rownum; i++)
    {
	for (j = 0; j < p->colnum; j++)
	    printf("%4d", p->matrix[i][j]);
	printf("\n");
    }
}

int main()
{
    int i, j;
    NodeType *mul = (NodeType *)malloc(sizeof(NodeType));
    NodeType *p = (NodeType *)malloc(sizeof(NodeType));
    NodeType *q = (NodeType *)malloc(sizeof(NodeType));
    p->rownum = 3;
    p->colnum = 4;
    for (i = 0; i < p->rownum; i++)
	for (j = 0; j < p->colnum; j++)
	    p->matrix[i][j] = 1;
    printf("---------------------\n");
    print(p);
    //NodeType *q = (NodeType *)malloc(sizeof(NodeType));
    q->rownum = 4;
    q->colnum = 3;
    for (i = 0; i < q->rownum; i++)
	for (j = 0; j < q->colnum; j++)
	    q->matrix[i][j] = 1;
    printf("---------------------\n");
    print(q);
    //return 0;
}
