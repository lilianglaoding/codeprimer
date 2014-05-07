#include "print_ivec.h"

using namespace std;

//template <typename T>
void print_ivec(vector<int> &vector_tmp)
{
  for (vector<int>::const_iterator iter = vector_tmp.begin();
       iter != vector_tmp.end(); ++iter)
    cout << *iter << " ";
  cout << endl;
}

void print_ivec(vector<int> *vector_tmp)
{
  for (vector<int>::const_iterator iter = vector_tmp->begin();
       iter != vector_tmp->end(); ++iter)
    cout << *iter << " ";
  cout << endl;
}
