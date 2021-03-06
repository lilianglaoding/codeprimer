#ifndef SPMATRIX_H
#define SPMATRIX_H

#define SMAX 1024

typedef struct
{
  int i, j;
  int v;
} SPNode;

typedef struct
{
  int mu, nu, tu;
  SPNode data[SMAX];
} SPMatrix;

#endif
