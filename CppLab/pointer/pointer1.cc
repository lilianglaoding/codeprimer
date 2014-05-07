#include <iostream>
#include "pointer1.h"

int main()
{
  int obj = 0;
  HasPtr ptr1(&obj, 42);
  ptr1.set_ptr_val(43);
  std::cout << ptr1.get_ptr_val() << std::endl;
  return 0;
}
