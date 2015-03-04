#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

/*int main()
{
    float a = 1.0f;
    float b = 0.0f;
    cout << (int &)a << endl;
    printf("%X\n", (int &)a);
    cout << boolalpha << ((int)a == (int &)a) << endl;
    cout << boolalpha << ((int)b == (int &)b) << endl;
    return 0;
    }*/
int main()
{
    unsigned char a = 0xa5;
    unsigned char b = ~a >> 4 + 1;
    printf("%d\n", (729&271));
    printf("%d\n", ((729^271)>>1));
    printf("%d\n", (729&271) + ((729^271)>>1));
    return 0;
}
/*
int f(int x, int y)
{
    return (x&y)+((x^y)>>1);
}

int main()
{
    int x = 729, y = 271;
    int a = f(x, y);
    printf("%d\n", (729&271) + ((729^271)>>1));
    return 0;
    }*/
