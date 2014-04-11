#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
  ostream_iterator<string> out_iter(cout, "\n");
  istream_iterator<string> in_iter(cin), eof;
  while (in_iter != eof)
    *out_iter++ = *in_iter++;
  return 0;
}
