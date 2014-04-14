n#include <iostream>
#include "Sales_item.h"

/*Sales_item::Sales_item(const std::string &book):
  isbn(book), units_sold(0), revenue(0) { }*/

Sales_item::Sales_item(std::istream &is)
{
  is >> isbn >> units_sold >> revenue;
  //is >> *this;
}

double Sales_item::avg_price() const
{
  if (units_sold)
    return revenue / units_sold;
  else
    return 0;
}

//Sales_item operator+(const Sales_item &, const Sales_item &);
