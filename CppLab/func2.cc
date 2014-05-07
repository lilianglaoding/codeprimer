#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[]) //main(int argc, int **argv)
{
  int i[2] = {1, 2};
  cout << sizeof(i) << sizeof(*i) << sizeof(i)/sizeof(*i) << endl;
  return 0;
}
