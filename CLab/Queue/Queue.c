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

int main()
{
  C_SeQueue *q;
  int x = 1;
  q = Init_Queue();
  int is_empty = 0;
  is_empty = Empty_Queue(q);
  if (is_empty)
    printf("the queue is empty\n");
  else
    printf("the queue is not empty\n");
  for (int i = 0; i < 10; ++i)
    In_Queue(q, i);
  is_empty = Empty_Queue(q);
  if (is_empty)
    printf("the queue is empty\n");
  else
    printf("the queue is not empty\n");
  Out_Queue(q, &x);
  printf("the out data is: %d\n", x);
  Out_Queue(q, &x);
  printf("the out data is: %d\n", x);
  Out_Queue(q, &x);
  printf("the out data is: %d\n", x);
  Destroy_Queue(q);
  return 0;
}
