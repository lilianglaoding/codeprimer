#include <iostream>
#include <string>

using namespace std;

bool str_subrange(const string &str1, const string &str2)
{
  if(str1.size() == str2.size())
    return str1 == str2;
  string::size_type size = (str1.size() < str2.size())
                           ? str1.size() : str2.size();
  string::size_type i = 0;
  while (i != size)
  {
    if (str1[i] != str2[i])
      return false;
    ++i;
  }
  return true;
}

int main()
{
  string s1 = "hello, world";
  string s2 = "hello";
  string s3 = "ollo";
  int i = str_subrange(s1, s2);
  int j = str_subrange(s1, s3);
  cout << i << "\t" << j << endl;
  return 0;
}
