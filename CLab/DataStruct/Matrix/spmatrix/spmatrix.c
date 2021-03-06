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

SPMatrix *TransM2(SPMatrix *A)
{
  SPMatrix *B = (SPMatrix *)malloc(sizeof(SPNode));
  if (B == NULL)
    return NULL;

  B->mu = A->nu;
  B->nu = A->mu;
  B->tu = A->tu;

  if (B->tu <= 0)
    return NULL;

  int num[A->nu];
  int loc[A->nu];

  int i, j, k;

  for (i = 1; i <= A->nu; ++i)
    num[i] = 0;

  for (i = 1; i <= A->tu; ++i)
    num[A->data[i].j]++;

  loc[1] = 1;

  for (i = 2; i <= A->nu; ++i)
    loc[i] = loc[i - 1] + num[i - 1];

  for (i = 1; i <= A->tu; ++i)
  {
    j = A->data[i].j;
    k = loc[j];
    B->data[k].i = A->data[i].j;
    B->data[k].j = A->data[i].i;
    B->data[k].v = A->data[i].v;
    loc[j]++;
  }

  return B;  
}

SPMatrix *MulSMatrix(SPMatrix *A, SPMatrix *B)
{
  if (A == NULL || B == NULL)
    return NULL;
  
  SPMatrix *C = (SPMatrix *)malloc(sizeof(SPNode));
  if (C == NULL)
    return NULL;

  if (A->nu != B->mu)
    return NULL;
  
  C->mu = A->mu;
  C->nu = B->nu;

  if (A->tu * B->tu == 0)
  {
    C->tu = 0;
    return C;
  }

  int num[B->mu], loc[B->mu];
  int i, j, k;

  for (i = 1; i <= B->mu; ++i)
    num[i] = 0;
  
  for (i = 1; i <= B->tu; ++i)
    num[B->data[i].i]++;

  loc[1] = 1;
  
  for (i = 2; i <= B->mu; ++i)
    loc[i] = loc[i - 1] + num[i - 1];
  
  int temp[B->nu];
  
  int p = 1, q = 1, r = 0;
  
  for (i = 1; i <= A->mu; ++i)
  {
    for (j = 1; j <= B->nu; ++j)
      temp[j] = 0;

    while (p <= A->tu && A->data[p].i == i )
    {
      k = A->data[p].j;
      /*for (q = 1; q <= tu; ++q)
      {
	if (B->data[q].i == k)
	{
	  j = B->data[q].j;
	  temp[j] += A->data[p].v * B->data[q].v;
	}
	}*/
      if (k < B->mu)   //find the row, more efficient
	t = loc[k + 1];
      else
	t = B->tu + 1;
      for (q = loc[k]; q < t; ++q)
      {
	j = B->data[q].j;
	temp[j] += A->data[p].v * B->data[q].v;
      }
      ++p;
    }
    for (j = 1; j <= B->nu; ++j)
      if (temp[j])
      {
	r++;
	C->data[r] = temp[j];
	C->data[r].i = i;
	C->data[r].j = j;
      }
  }
  C->tu = r;

  return C;
}
