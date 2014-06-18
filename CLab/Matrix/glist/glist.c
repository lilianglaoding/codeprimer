#include <stdio.h>
#include <stdlib.h>

#include "glist.h"

GList Head(GList ls)
{
  if (ls != NULL)
    return ls->hp;
  else
    return NULL;
}

GList Head(GList ls)
{
  if (ls != NULL)
    return ls->tp;
  else
    return NULL;
}

int Create(GList *ls, char *S)
{
  
}
