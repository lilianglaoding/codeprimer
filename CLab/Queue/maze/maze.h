#ifndef MAZE_H
#define MAZE_H

typedef struct
{
  int x, y;
  int pre;
} SqType;

SqType sq[num];

int front, rear;

#endif
