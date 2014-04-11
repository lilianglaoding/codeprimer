#include <iostream>

using namespace std;

int main()
{
  const int i = 1;
  int j = 2;
  const int *ptr = &i;
  int *p = ptr; //can not assign const to non-const
  return 0;
}
