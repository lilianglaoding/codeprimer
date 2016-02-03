#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[8];
    int age;
    int class;
    int row;
    int col;
};

int main()
{
    struct student stu;
    stu.age = 5;
    stu.class = 4;
    return 0;
}
