#ifndef SALESITEM_H
#define SALESITEM_H
#include <string>
class Sales_item
{
  friend std::istream &opertor>>
    (std::istream &, Sales_item &);
  friend std::ostream &operator<<
    (std::ostream &, Sales_item &);
 public:
  double avg_price() const;
  bool same_isbn(const Sales_item &rhs) const
  {
    return isbn == rhs.isbn;
  }
  void display(std::ostream &os) const
  {
    do_display(os);
  }

  Sales_item(): units_sold(0), revenue(0.0) {}
  explicit Sales_item(const std::string &book = ""):
  isbn(book), units_sold(0), revenue(0.0) { }
  explicit Sales_item(std::istream &is);

 private:
  std::string isbn;
  unsigned units_sold;
  double revenue;
  void do_display(std::ostream &os) const
  {
    os << "isbn: " << isbn << "\t" 
       << "units_sold: " << units_sold << "\t"
       << "revenue: " << revenue << std::endl;
  }
};
Sales_item operator+(const Sales_item &, const Sales_item &);
#endif
