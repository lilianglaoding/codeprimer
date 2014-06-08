#include <stdio.h>

void main()
{
   int score;
   printf("Please input the score between 0 and 100:\n");
   scanf("%d",&score);
   (score >= 90)?(printf("A\n")):(score>=60)?(printf("B\n")):printf("C\n");
}
