#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#define  LEN sizeof(struct student)
struct student
{
 int num;
 int score;
 struct student *next;
};
int main()
{
 struct student *creat(struct student *head, int *num);
 void Prin(struct student *head, int n);
 struct student *insert(struct student *head);
 struct student *head = NULL;
 int num;
// printf("Please input num and score:\n");
 head = creat(head, &num);
 Prin(head, num);
 return 0;
}
struct student *creat(struct student *head, int *num)
{
 struct student *p = NULL, *pr = head;
 int n= 0;
 printf("Please input num and score\n");
 p = pr = (struct student *)malloc(sizeof(struct student));
 scanf("%d %d", &p->num, &p->score);
 head = NULL;
 while (p->num != 0 && p->score != 0)
 {
  n = n + 1;
  if (n == 1)
  {
   head = p;
  }
  else
  {
   pr->next=p;
  }
  pr=p;
  p=(struct student*)malloc(sizeof(struct student));
  scanf("%d %d",&p->num,&p->score);
 }
 pr->next=NULL;
 *num = n;
 return head;
}
void Prin(struct student *head, int n)
{
 struct student *p = head;
 //printf("%d\n",head->num);
 printf("\nNow, These %d recored are:\n", n);
 if (head!=NULL)
 {
  do 
  {
   printf("%d %d\n",p->num,p->score);
   p=p->next;
  } while (p!=NULL);
 }
}
struct student *insert(struct student *head)
{
 return 0;
}
