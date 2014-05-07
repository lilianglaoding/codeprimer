#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  for (int val = 0; val <= 100; ++val){
    sum += val;
  }
  cout << "the sun from 1 to 100 is " << sum << endl;
  return 0;
}
