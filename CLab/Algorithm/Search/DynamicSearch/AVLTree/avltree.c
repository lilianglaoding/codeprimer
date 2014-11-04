#include <stdio.h>
#include <stdlib.h>

#include "avltree.h"

#define LH 1
#define EH 0
#define RH -1

void R_Rotate(NodeType **p)
{
    Nodetype *lp;
    lp = (*p)->lchild;
    (*p)->lchild = lp->rchild;
    lp->rchild = *p;
    *p = lp;
}

void L_Rotate(NodeType **p)
{
    NodeType *lp;
    lp = (*p)->rchild;
    (*p)->rchild = lp->lchild;
    lp->lchild = *p;
    *p = lp;
}

void Left_Balance(NodeType **p)
{
    NodeType *lp;
    lp = (*p)->lchild;
    switch ((*p)->bf)
    {
    case LH:
	(*p)->bf = lp->bf = EH;
	R_Rotate(p);
	break;
    case EH:
	(*p)->bf = LH;
	break;
    case RH:
	
    }
}
