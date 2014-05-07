//vector is a class template, it can hold int, 
//char, string and other type element;

#include <vector>
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string word;
  vector<string> text;
  while (cin >> word)
    text.push_back(word);
  for (vector<string>::const_iterator iter = text.begin();
       iter != text.end(); ++iter)
    cout << *iter << endl;
  return 0;
}
