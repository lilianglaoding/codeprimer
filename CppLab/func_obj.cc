#include <iostream>

struct absInt
{
  int operator()(int val)
  {
    return val < 0 ? -val : val;
  }
};

int main()
{
  int i = -42;
  absInt absobj;
  unsigned int ui = absobj(i);
  std::cout << ui << std::endl;
}
