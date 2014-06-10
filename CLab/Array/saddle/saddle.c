#include <stdio.h>

//min in row, max in col

void saddle(int (*array)[5], int m, int n)
{
  int row = m;
  int col = n;
  int min;
  int i, j;
  int x, y = 0;
  for (i = 0; i < row; ++i)
  {
    min = array[i][0];
    for (j = 0; j < col; ++j)
    {
      if (array[i][j] < min)
      {
	min = array[i][j];
	x = i;
	y = j;
      }
    }
    /*
    int k;
    for (k = 0; k < row; ++k)
    {
      if (array[k][y] > min)
	break;
    }
    if (k == row)
      printf("the saddle of row %d is %d\n",i, min);*/
    for (j = 0; j < n; ++j)
      if (array[i][j] == min)
	{
	  int k = j;
	  int p = 0;
	  while (p < m && array[p][j] <= min)
	    p++;
	  if (p >= m)
	    printf("the saddle of row %d is %d\n", i, min);
	}
  }
}

int main()
{
  int array[4][5] = {{17, 18, 19, 20, 21}, {16, 17, 18, 19, 20}, {15, 16, 17, 18, 19}, {14, 15, 16, 17, 18}};
  for (int i = 0; i < 4; ++i)
  {
    for (int j = 0; j < 5; ++j)
    {
      printf("%d\t", array[i][j]);
    }
    printf("\n");
  }
  saddle(array, 4, 5);
  return 1;
}
