#include <string>
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

void UpperCase(char str[])
{
  cout << sizeof(str) << "\t" << strlen(str) << endl;
  for (size_t i = 0; i < strlen(str); ++i)
    if ('a' <= str[i] && str[i] <= 'z')
      str[i] -= ('a' - 'A');
}

int main()
{
  char str[] = "aBcDefg";
  char s1[] = "ijklmnopq";
  cout << str << endl;
  cout << s1 << endl;
  UpperCase(str);
  UpperCase(s1);
  cout << str << endl;
  cout << s1 << endl;
  return 0;
}
