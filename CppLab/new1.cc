#include <iostream>
#include <vector>
using namespace std;

int main()
{
  double *pd = new double(3.3);
  delete pd;
  vector<string> *pvec2 = new vector<string>[10];
  delete [] pvec2;
  vector<string> *pvec1 = new vector<string>(10); 
  delete pvec1;
  int ival = 0;
  int *pi = &ival;
  void *pv = pi;
  double *pd1 = pv;
  ival = 3 + 3.142;
  cout << ival << endl;
  return 0;
}
