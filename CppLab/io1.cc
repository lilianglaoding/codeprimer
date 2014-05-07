#include <iostream>

using namespace std;

int main()
{
  int ival;
  cin >> ival;
  //cin.clear();
  if (!cin)
  {
    //cin.clear();
    cout << "input error" << ival << endl;
  }
  else
    cout << "input right" << endl;
  return 0;
}
