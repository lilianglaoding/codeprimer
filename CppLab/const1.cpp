#include <iostream>

using namespace std;

int main()
{
  int dval = 1;
  const int &ri = dval;
  //ri = 2;
  cout << "ri:" << ri << "dval:" << dval << endl;
}
