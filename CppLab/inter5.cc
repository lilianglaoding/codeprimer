#include <iostream>
#include <iterator>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
  string s("First,Middle,Last");
  string::reverse_iterator rcomma = find(s.rbegin(), s.rend(), ',');
  cout << string(s.rbegin(), rcomma) << endl;
  //cout << string(rcomma, s.rbegin()) << endl; //run-time error
  cout << string(rcomma.base(), s.end()) << endl;
  return 0;
}
