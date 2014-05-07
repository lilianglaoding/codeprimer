#include <vector>
#include <string>
#include <iostream>

using namespace std;
int main()
{
  vector< vector<int> > vvec; //template should use > >, not >>, cout >>
  vector<int> ivec;
  for (size_t ix = 0; ix != 4; ++ix)
    ivec.push_back(ix);
  //for (size_t ix = 0; ix != 4; ++ix)
  //ivec.push_front(ix); //vector<int> has no member of push_front
  vector<int>::iterator iter1 = ivec.begin();
  for (size_t ix = 0; ix != 4; ++ix)
    iter1 = ivec.insert(iter1, ix);
  for (vector<int>::iterator iter = ivec.begin();
       iter != ivec.end(); ++iter)
    cout << *iter << " ";
  cout << endl;
  return 0;
}
