#include <iostream>
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

//Sales_item operator+(const Sales_item &, const Sales_item &)
//{
//  return *this;
//}

std::ostream &operator<<(std::ostream &out, const Sales_item &s)
{
  out << s.isbn << "\t" << s.units_sold << "\t"
      << s.revenue << "\t" << s.avg_price();
  return out;
}

std::istream &operator>>(std::istream &in, Sales_item &s)
{
  double price;
  in >> s.isbn >> s.units_sold >> price;
  if (in)
    s.revenue = s.units_sold * price;
  else
    s = Sales_item("");
  return in;
}
