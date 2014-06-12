#include <stdio.h>

#include "spmatrix.h"

SPMatrix *TransM1(SPMatrix *A)
{
  SPMatrix *B = (SPMatrix *)malloc(sizeof(SPMatrix));

  B->mu = A->nu;
  B->nu = A->mu;
  B->tu = A->tu;
  
  if (B->tu <= 0 || B == NULL)
    return B;

  int p, q, col;
  q = 1;
  for (col = 1; col <= (A->nu); ++col)
  {
    for (p = 1; p <= (A->tu); ++p)
    {
      if (A->data[p].j == col)
      {
	B->data[q].i = A->data[p].j;
	B->data[q].j = A->data[p].i;
	B->data[q].v = A->data[p].v;
	++q;
      }
    }
  }
  return B;
}
