#include <stdio.h>

void print_helloworld()
{
    printf("hello,world\n");
}


void print_helloworld_threetimes()
{
    for (int i = 0; i <= 2; i++)
    {
        print_helloworld();
    }
}

void main()
{
    print_helloworld_threetimes();
}
