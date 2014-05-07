#include <iostream>

using namespace std;

void move(char getone, char putone)
{
  cout << getone << "-->" << putone << endl;
}

void hanoi(int n, char one, char two, char three)
{
  if (n == 1)
    move(one, three);
  else
  {
    hanoi(n - 1, one, three, two);
    move(one, three);
    hanoi(n - 1, two, one, three);
  }
}

int main()
{
  int m;
  cout << "Enter the number of diskes:";
  cin >> m;
  cout << "the steps to moving" << m << " diskes:" << endl;
  hanoi(m, 'A', 'B', 'C');
}
