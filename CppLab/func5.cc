//overload functions for add(int, int) add(float, float)

#include <iostream>

using namespace std;

int add(int x, int y)
{
  return x + y;
}

float add(float x, float y)
{
  return x + y;
}

int main()
{
  int a = 3, b = 4;
  float c = 2.3, d = 3.2;
  cout << add(a, b) << "\t" << add(c, d) <<endl;
  return 0;
}
