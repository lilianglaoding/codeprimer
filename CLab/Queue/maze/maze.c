#include <stdio.h>

#include "maze.h"

//find a shortest way in maze

int maze(int maze[][], int move[8])
{
  int i, j, x, y, d;
  i = 1;
  j = 1;
  x = 1;
  j = 1;
  sq[0].x = 1;
  sq[0].y = 1;
  sq[0].pre = -1;
  front = -1;
  rear = 0;
  SqType temp;
  temp.x = 1;
  temp.y = 1;
  temp.pre = -1;
  In_Queue(sq, temp);
  while (front <= rear)
  {
    Out_Queue(sq, &temp);
    x = temp.x;
    y = temp.y;
    for (int v = 0; v < 8; ++v)
    {
      x = x + move[v].x;
      y = y + move[v].y;
      temp.x = x;
      temp.y = y;
      temp.pre = front;
      if (maze[x][y] == 0)
      {
	In_Queue(sq, temp);
	maze[x][y] = -1;
      }
      if (x == m && y == n)
      {
	print_path(sq);
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
  SqType temp;
  int pre = rear;
  printf("%d,%d", sq[pre].x, sq[pre].y);
  int pre = sq[pre].pre;
}
