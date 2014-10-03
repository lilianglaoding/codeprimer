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

