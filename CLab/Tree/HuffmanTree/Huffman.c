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
  
  
}
