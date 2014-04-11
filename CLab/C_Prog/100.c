#include "head.h"

struct student {
  char num[6];
  char name[10];
  int score[3];
  float average;
} stu[5];

void main()
{
  int i = 0, j = 0, sum = 0;
  FILE *fp;
  for (i = 0; i < 5; i++)
  {
    printf("student NO:", i);
    scanf("%s", stu[i].num);
    printf("name:");
    scanf("%s", stu[i].name);
    sum = 0;
    for (j = 0; j < 3; j++)
    {
      printf("score %d:", j + 1);
      scanf("%d", &stu[i].score[j]);
      sum = sum + stu[i].score[j];
    }
    stu[i].average = sum / 3.0;
  }
  fp = fopen("student.txt", "w");
  for (i = 0; i < 5; i++)
  {
    if (fwrite(&stu[i], sizeof(struct student), 1, fp) != 1)
      printf("file write error!\n");
  }
  fclose(fp);
}
