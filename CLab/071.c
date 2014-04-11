#include <stdio.h>

#define NUM 2

struct student {
    char name[8];
    char sex;
    int score;
    };

struct student stu[NUM];
void input(struct student stu[])
{
    int i = 0;
    for (i = 0; i < NUM; i++)
    {
        printf("Please input the %d of %d students\n",i + 1, NUM);
        printf("name:\n");
        scanf("%s",&stu[i].name);
        getchar();
        printf("sex[F/M]:\n");
        scanf("%c",&stu[i].sex);
        getchar();
        //stu[i].sex = getchar();
        printf("score:\n");
        scanf("%d",&stu[i].score);
        getchar();
    }
}

void output(struct student stu[])
{
    int i = 0;
    for (i = 0; i < NUM; i++)
    {
        //printf("The %d of %d students:\n", i + 1, NUM);
        //printf("name:%s\n",stu[i].name);
        //printf("sex:%c\n",stu[i].sex);
        //printf("score:%d\n",stu[i].score);
        printf("[%d]:%-8s,%-3c,%-4d\n",i + 1,stu[i].name,stu[i].sex,stu[i].score);
    }
}

void main()
{
     //struct stu[NUM];
     input(stu);
     output(stu);
}
