#include <stdio.h>
#include <stdlib.h>

#include "Huffman.h"

void HuffmanTree(HNodeType HuffNode[])
{
  int i, j;
  int m1, m2, x1, x2;
  int n;

  scanf("%d", &n);

  for (i = 0; i < n * 2 - 1; ++i)
  {
    HuffNode[i].weight = 0;
    HuffNode[i].parent = -1;
    HuffNode[i].lchild = -1;
    HuffNode[i].rchild = -1;
  }
  
  for (i = 0; i < n; ++i)
    scanf("%d", &HuffNode[i].weight);
  
  for (i = 0; i < n - 1; ++i)
  {
    m1 = m2 = MAXVALUE;
    x1 = x2 = 0;
    for (j = 0; j < n + i; ++j)
    {
      if (HuffNode[j].parent == -1 && HuffNode[j].weight < m1)
      {
	m2 = m1;
	x2 = x1;
	m1 = HuffNode[j].weight;
	x1 = j;
      }
      else if (HuffNode[j].parent == -1 && HuffNode[j].weight < m2)
      {
	m2 = HuffNode[j].weight;
	x2 = j;
      }
    }
    HuffNode[n + i].weight = HuffNode[x1].weight + HuffNode[x2].weight;
    HuffNode[n + i].lchild = x1;
    HuffNode[n + i].rchild = x2;
    HuffNode[x1].parent = n + i;
    HuffNode[x2].parent = n + i;
  }
}

void HuffmanCode()
{
  HNodeType HuffNode[MAXNODE];
  HCodeType HuffCode[MAXLEAF], cd[MAXLEAF];
  int i, j, n, c;   // n is the num of leaf
  HNodeType p;
  HuffmanTree(HuffNode);
  for (i = 0; i < n; i++)
  {
    cd[i].start = MAXBIT - 1;
    p = HuffNode[i].parent;
    j = MAXBIT - 1;
    c = i;
    for (p != -1)
    {
      if (p.lchild == c)
	cd[i].bit[cd[i].start] = 0;
      else
	cd[i].bit[cd[i].start] = 1;
      cd[i].start--;
      c = p;
      p = p.parent;
    }
    
    for (j = cd[i].start + 1; j <= MAXBIT - 1; j++)
      HuffCode[i].bit[j] = cd[i].bit[j];
    HuffCode[i].start = cd[i].start;
  }
  
  for (i = 0; i < n; i++)
  {
    for (j = HuffCode[i].start + 1; j < MAXBIT - 1; j++)
      printf("%d", HuffCode[i].bit[j]);
    printf("\n");
  } 
}
