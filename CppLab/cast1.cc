#include <iostream>
#include <string>

using namespace std;

int main()
{
  int i = 65535;
  int *pi = &i;
  char *pc = reinterpret_cast<char *>(pi);
  cout << *pi << *pc << endl;
  ; //null statement
  return 0;
}
