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
    NodeType *rd;
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
	rd = lp->rchild;
	switch (rd->bf)
	{
	case LH:
	    (*p)->bf = RH;
	    lp->bf = EH;
	    break;
	case EH:
	    (*p)->bf = lp->bf = EH;
	    break;
	case RH:
	    (*p)->bf = EH;
	    lp->bf = LH;
	    break;
	}
	rd->bf = EH;
	L_Rotate(&((*p)->lchild));
	R_Rotate(p);
    }
}
