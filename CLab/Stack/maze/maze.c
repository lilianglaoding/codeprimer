#include <stdio.h>

#include "maze.h"
#include "Stack.h"

int path(int maze[m][n], item move[8])
{
  SeqStack *s;
  s = Init_Stack();
  datatype temp;
  int x, y ,d, i, j;
  temp.x = 1;
  temp.y = 1;
  type.d = -1;
  
  Push_Stack(s, temp);
  
  while (!Empty_Stack(s))
  {
    temp = Top_Stack(s);
    Pop_Stack(s);
    x = temp.x;
    y = temp.y;
    d = temp.d + 1;
    
    while (d < 8)
    {
      i = x + move[d].x;
      j = y + move[d].y;
      if (maze[i][j] == 0)
      {
	temp = {x, y, d};
	Push_Stack(s, temp);
	
	x = i;
	y = i;
	maze[i][j] = -1;
	
	if (x == m && y == n)
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
