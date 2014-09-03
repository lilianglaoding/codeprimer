#ifndef MAZE_H
#define MAZE_H

#define m 6
#define n 8

int maze[m + 2][n + 2];

typedef struct
{
  int x, y;
} item;

//(0,1),(1,1),(1,0),(1,-1),(0,-1),(-1,-1),(-1,0),(-1,1)
item move[8];

typedef struct
{
  int x, y, d;
} datatype;

#endif
