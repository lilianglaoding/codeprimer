#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
  istream_iterator<int> cin_it(cin);
  istream_iterator<int> end_of_stream;
  vector<int> vec(cin_it, end_of_stream);
  sort(vec.begin(), vec.end());
  ostream_iterator<int> output(cout, " ");
  unique_copy(vec.begin(), vec.end(), output);
  cout << endl;
  return 0;
}
