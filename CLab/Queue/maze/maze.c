#include <stdio.h>

#include "maze.h"

#define M 8
#define N 6
#define NUM (M) * (N)

//find a shortest way in maze

int maze(int maze[][], int move[8])
{
  int i, j, x, y;
  sq[0].x = 1;
  sq[0].y = 1;
  sq[0].pre = -1;
  front = 0;
  rear = 0;
  SqType sq[NUM];
  while (front <= rear)
  {
    x = sq[front].x;
    y = sq[front].y;
    for (int v = 0; v < 8; ++v)
    {
      i = x + move[v].x;
      j = y + move[v].y;
      if (maze[i][j] == 0)
      {
	++rear;
	sq[rear].x = i;
	sq[rear].y = j;
	sq[rear].pre = front;
	maze[x][y] = -1;
      }
      if (x == m && y == n)
      {
	print_path(sq, rear);
	restore_maze(maze[][]);
	return 1;
      }
    } // end for
    ++front;
  } // end while
  return 0;
}

void print_path(SqType sq[], int rear)
{
  int i = rear;
  do
  {
    printf("(%d,%d)<---", sq[i].x, sq[i].y);
    i = sq[i].pre;
  } while (i != -1)
}

void restore_maze(int maze[][])
{
  for (int i = 0; i < M; ++i)
    for (int j = 0; j < N; ++j)
    {
      if (maze[i][j] == -1)
      {
	maze[i][j] = 0;
      }
    }
}
