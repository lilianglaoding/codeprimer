#include <stdio.h>

#include "spmatrix.h"

SPMatrix *TransM1(SPMatrix *A)
{
  SPMatrix *B = (SPMatrix *)malloc(sizeof(SPMatrix));

  B->mu = A->nu;
  B->nu = A->mu;
  B->tu = A->tu;
  
  if (B->tu <= 0)
    return B;

  int p, q, col;
  q = 1;
  for (col = 1; col <= (A->nu); ++col)
  {
    for (p = 1; p <= (A->mu); ++p)
    {
      if (A->data[q].x == col)
      {
	B->data[q].x = A->data[q].y;
	B->data[q].y = A->data[q].x;
	B->data[q].v = A->data[q].v;
	++q;
      }
    }
  }
  return B;
}
