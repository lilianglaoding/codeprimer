#include <stdio.h>
#include <stdlib.h>

#include "staticsearch.h"

// if found, return the No. , else return -1
int Seq_Search(S_TBL *s, datatype x)
{
  int i = 0;
  while (s->data[i] != x && i < s->length)
    i++;
  if (i == s->length)
    return -1;
  else
    return i;
}

// if found, return the No. , else return -1
int Binary_Search(S_TBL *s, datatype x)
{
  int low = 0, high = s->length - 1;
  int mid;
  while (low < high)
  {
    mid = (low + high) / 2;
    if (s->data[mid] < x)
      low = mid + 1;
    else if (s->data[mid] > x)
      high = mid - 1;
    else
      break;
  }
  if (s->data[mid] = x)
    return mid;
  else
    return -1;
}

int main()
{
  int i;
  S_TBL *s;
  s = (S_TBL *)malloc(sizeof(S_TBL));
  s->length = MAXSIZE;
  for (i = 0; i < s->length; i++)
    s->data[i] = i;
  printf("%d\n", Binary_Search(s, 222));
  free(s);
  return 0;
}
