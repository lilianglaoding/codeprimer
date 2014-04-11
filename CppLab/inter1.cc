//#include <iterator>
#include <iostream>
#include <list>

using namespace std;

int main()
{
  list<int> ilist, ilist2, ilist3;
  //ilist contains: 3 2 1 0
  for (list<int>::size_type i = 0; i != 4; ++i)
  {
    ilist.push_front(i);
  }
  //ilist2 contains: 0 1 2 3
  copy(ilist.begin(), ilist.end(), front_inserter(ilist2));
  //ilist3 contains: 3 2 1 0
  copy(ilist.begin(), ilist.end(), inserter(ilist3, ilist3.begin()));
  copy(ilist.begin(), ilist.end(), inserter(ilist3, ilist3.begin()));
  for (list<int>::iterator it = ilist3.begin(); it != ilist3.end(); ++it)
    cout << *it << endl;
  return 0;
}
