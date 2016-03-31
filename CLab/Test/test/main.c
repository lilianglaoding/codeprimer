#include <stdio.h>
#include <stdlib.h>

typedef struct std
{
    char *name;
    int age;
    int class;
    int grade;
} student;

int main()
{
    student stu;
    int a;
    stu.name = "liliang";
    stu.age = 15;
    stu.grade = 4;
    stu.class = 3;        
    printf("Hello world!\n");
    printf("this is test program");
    return 0;
}
