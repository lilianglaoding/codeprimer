#include <list>
#include <iostream>

using namespace std;

int main()
{
  list<int> ilist(10, 1);
  list<int>::iterator first = ilist.begin(), last = ilist.end();
  cout << endl << "before insert, size: " << ilist.size() << endl;
  while (first != last)
  {
    first = ilist.insert(++first, 4);
    ++first;
  }
  //cout << "before insert, size: " << ilist.size() << endl;
  int cnt = 0;
  for (list<int>::iterator iter = ilist.begin();
       iter != ilist.end(); ++iter)
    cout << *iter << " " << "cnt: " << ++cnt << " " << endl;
  cout << "after insert, size: " << ilist.size() << endl;
  cout << endl;
  return 0;
}
