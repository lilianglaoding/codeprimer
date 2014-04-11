#include <iostream>
#include <vector>

using namespace std;

int main()
{
  const vector<int> ivec(10, 1);
  //the return type of ivec.begin() depends on the type of ivec
  vector<int>::const_iterator it = ivec.begin();
  //*it = 20;
  cout << *it << endl;
  return 0;
}
