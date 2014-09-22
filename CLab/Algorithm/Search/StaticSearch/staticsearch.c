#include <stdio.h>
#include <stdlib.h>

#include "staticsearch.h"

// if found, return the No. , else return -1
int Seq_Search(S_TBL *s, datatype x)
{
  int i = 0;
  while (s->data[i] != x && i < s->length)
    i++;
  if (i == length)
    return -1;
  else
    return i;
}

// if found, return the No. , else return -1
int Binary_Search(S_TBL *s, datatype x)
{
  int low = 0, high = s->length - 1;
  int mid;
  
}

int main()
{
  S_TBL *s;
  s = (S_TBL *)malloc(sizeof(S_TBL));
  s->length = MAXSIZE - 1;
}
