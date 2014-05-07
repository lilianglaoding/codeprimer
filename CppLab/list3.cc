#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
  list<int> ilist(10, 1);
  ilist.push_front(2);
  ilist.push_back(3);
  list<int>::iterator iter1 = find(ilist.begin(), ilist.end(), 3);
  list<int>::iterator iter2 = find(ilist.begin(), ilist.end(), 2);
  ilist.erase(iter1, iter2); //dangerous!
  return 0;
}
