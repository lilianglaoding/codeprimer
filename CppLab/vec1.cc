#include <vector>
#include <list>
#include <deque>
#include <iostream>
//#include "print_ivec.h"
#include "print_ivec.cc"
using namespace std;

/*void print_ivec(vector<int> &vector_tmp)
{
  for (vector<int>::const_iterator iter = vector_tmp.begin();
       iter != vector_tmp.end(); ++iter)
    cout << *iter << " ";
  cout << endl;
  }*/

int main()
{
  vector<int> ivec(3, 1);
  vector<int> ivec1(ivec);
  //void print_ivec(vector<int> &ivec_tmp);
  /*for (vector<int>::iterator iter = ivec1.begin();
       iter != ivec1.end(); ++iter)
       cout << *iter << endl;*/
  print_ivec(ivec1);
  print_ivec(&ivec1);
  return 0;
}
