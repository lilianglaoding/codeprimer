#include <iostream>

using namespace std;

void swap(int **p, int **q)
{
  int *temp = *p;
  *p = *q;
  *q = temp;
}

int ptrswap(int *&v1, int *&v2)
{
  int *tmp = v1;
  v1 = v2;
  v2 = tmp;
}

int main()
{
  int i = 10, j = 20;
  int *pi = &i, *pj = &j;
  cout << "Before swap:\t*pi:" << *pi << "\t*pj:" << *pj << endl;
  swap(&pi, &pj);
  cout << "After swap:\t*pi:" << *pi << "\t*pj" << *pj << endl;
  return 0;
}
