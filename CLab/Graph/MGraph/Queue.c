#include <stdio.h>
#include <stdlib.h>

#include "Queue.h"

C_SeQueue *Init_Queue()
{
  C_SeQueue *q = (C_SeQueue *)malloc(sizeof(C_SeQueue));
  q->front = q->rear = -1;
  q->num = 0;
  return q;
}

int Empty_Queue(C_SeQueue *q)
{
  if (q->num == 0)
    return 1;
  else
    return 0;
}

int In_Queue(C_SeQueue *q, int x)
{
  if (q->num == MAXSIZE)
  {
    printf("queue is full\n");
    return 0;
  }
  q->rear = (q->rear + 1) % MAXSIZE;
  q->data[q->rear] = x;
  ++q->num;
  return 1;
}

int Out_Queue(C_SeQueue *q, int *x)
{
  if (Empty_Queue(q))
  {
    //printf("the Queue is empty--------\n");
    return 0;
  }
  q->front = (q->front + 1) % MAXSIZE;
  *x = q->data[q->front];
  //printf("%d\n", *x);
  --q->num;
  return 1;
}

void Destroy_Queue(C_SeQueue *q)
{
  free(q);
}
