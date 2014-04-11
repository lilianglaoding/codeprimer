#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
  vector<int> vec;
  istream_iterator<int> in_iter(cin);
  istream_iterator<int> eof;
  while (in_iter != eof)  //eof = Ctrl + D
    vec.push_back(*in_iter++);
  vector<int>::iterator it = vec.begin();
  for ( ; it != vec.end(); )
    cout << *it++ << endl;
  return 0;
}
