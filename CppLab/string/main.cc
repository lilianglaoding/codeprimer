#include "string.h"

int main()
{
  String str1("abcde");
  String str2;
  String str3(str1);
  String st4 = "ab"; //implicit transfer, default constructor called
  str2 = str3;
  return 0;
}
