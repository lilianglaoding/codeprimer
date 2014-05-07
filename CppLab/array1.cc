#include <iostream>

using namespace std;

int main()
{
  const unsigned array_size = 3;
  int ia[array_size] = {0, 1, 2};
  string sa[array_size] = {"hi", "world"};
  for (int i = 0; i != 3; ++i)
    cout << sa[i] << endl;
  const size_t as = 10;
  int a[as] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = 0;
  double d = 1;
  //p = &d;
  void *pv = &d;
  p = (int *)pv;  //here may lost data
  return 0;
}
