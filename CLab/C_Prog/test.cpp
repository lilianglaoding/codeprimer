#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main()
{
    float a = 1.0f;
    float b = 0.0f;
    cout << (int &)a << endl;
    printf("%X\n", (int &)a);
    cout << boolalpha << ((int)a == (int &)a) << endl;
    cout << boolalpha << ((int)b == (int &)b) << endl;
    return 0;
}
