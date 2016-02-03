#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSIZE 20

typedef struct student
{
    char name[MAXSIZE];
    int age;
    int grade;
    int class;
    int row;
    int number;
    int score;
} stperson;

int sum(stperson stu)
{
    return 0;
}

int main()
{
    stperson st;
    st.age;
    int a = sum(st);
    return 0;
}
