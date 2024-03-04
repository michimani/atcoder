#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui l = s.length();
  for (; l--;)
    cout << "x";
  cout << endl;

  return 0;
}