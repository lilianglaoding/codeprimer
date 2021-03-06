#include "string.h"
#include <cstring>
#include <iostream>

String::String(const char *str)
{
  std::cout << "default constructor called!" << std::endl;
  if (str == NULL)
  {
    m_data = new char[1];
    m_data[0] = '\0';
  }
  else
  {
    m_data = new char[strlen(str) + 1];
    strcpy(m_data, str);
  }
}

String::String(const String &another)
{
  std::cout << "copy constructor called!" << std::endl;
  m_data = new char[strlen(another.m_data) + 1];
  strcpy(m_data, another.m_data);
}

String::~String()
{
  std::cout << "destructor called!" << std::endl;
  delete [] m_data;
}

String &String::operator = (const String &rhs)
{
  std::cout << "operator = called!" << std::endl;
  if (this == &rhs)   //防止自身赋值，don't use *this == rhs, String didn't define ==
    return *this;
  delete [] m_data;
  m_data = new char[strlen(rhs.m_data) + 1];
  strcpy(m_data, rhs.m_data);
  return *this;
}
