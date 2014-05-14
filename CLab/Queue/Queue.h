#ifndef QUEUE_H
#define QUEUE_H

#define MAXSIZE 255

typedef struct
{
  int data[MAXSIZE];
  int front, rear;
  int num;
} C_SeQueue;

#endif
