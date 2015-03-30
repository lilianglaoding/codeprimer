#include <list>
#include <iostream>

using namespace std;

bool is_same(list<int> &list1, list<int> &list2)
{
  if (list1.size() != list2.size())
    return false;
  list<int>::iterator iter1 = list1.begin(), iter2 = list2.begin();
  while (iter1 != list1.end())
  {
    if (*iter1++ != *iter2++)
      return false;
  }
  return true;
}

int main()
{
  list<int> list1(10, 1), list2(10, 1);
  bool result = is_same(list1, list2);
  if (result)
    cout << "The two lists are same!" << endl;
  else
    cout << "The two lists are not same!" << endl;
  return 0;
}
