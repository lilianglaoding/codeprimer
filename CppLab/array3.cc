#include <iostream>
#include <string>

using namespace std;

int main()
{
  string *ps = new string[10];
  //for (string *p = ps; p != ps + 10; ++p)
  //cout << *p << " ";
  cout << endl;
  delete [] ps;
  return 0;
}
