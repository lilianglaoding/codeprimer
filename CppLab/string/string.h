#ifndef STRING_H
#define STRING_H

#include <cstdlib>

class String
{
 public:
  String(const char *str = NULL);
  String(const String &another);
  ~String();
  String &operator = (const String &rhs);
 private:
  char *m_data;
};

#endif
