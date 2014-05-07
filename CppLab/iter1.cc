#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> ivec(10, 10);
  ivec.push_back(1);
  sort(ivec.begin(),ivec.end());
  vector<int>::iterator viter;
  for (viter = ivec.begin(); viter != ivec.end(); ++viter)
    cout << *viter << " ";
  cout << endl;
  return 0;
}
