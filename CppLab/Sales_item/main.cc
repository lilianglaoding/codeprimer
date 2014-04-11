#include <iostream>
#include "Sales_item.h"

int main()
{
  Sales_item item("0-201-82470-1");
  item.display(std::cout);
  Sales_item item1(std::cin);
  item1.display(std::cout);
  Sales_item *p = new Sales_item();
  p->display(std::cout);
  Sales_item *p1 = new Sales_item;
  p1->display(std::cout);
  return 0;
}
