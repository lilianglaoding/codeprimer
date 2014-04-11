#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  ofstream myfile;
  myfile.open("example.txt");
  myfile << "Wrinting this to a file.\n";
  myfile.close();
  return 0;
}
