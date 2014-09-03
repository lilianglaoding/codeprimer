#include <stdio.h>

#include "maze.h"
#include "Stack.h"

//if find a path, return 1, otherwise, return 0;
int path(int maze[m][n], item move[8])
{
  SeqStack *s;
  s = Init_Stack();
  
  int x, y, d;
  int i, j;     //current position
  datatype temp;
  temp.x = 1;
  temp.y = 1;
  temp.d = -1;
  Push_Stack(s, temp);
  while (!Empty_Stack(s))
  {
    Pop_Stack(s, &temp);
    x = temp.x;
    y = temp.y;
    d = temp.d + 1;
    while (d < 8)
    {
      i = x + move[d].x;
      j = y + move[d].y;
      if (maze[i][j] == 0)
      {
	temp.x = i;
	temp.j = j;
	temp.d = d;
	Push_Stack(s, temp);
	x = i;
	y = j;
	maze[i][j] = -1;
	if (i == m && j == n)
	  return 1;
	else
	  d = 0;
      }
      else
	d++;
    }
  }
  return 0;
}
  
