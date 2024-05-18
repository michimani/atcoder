#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui l = 3;
  for (; l--;)
  {
    string s;
    cin >> s;
    cout << char(s[0] - 32);
  }

  cout << endl;

  return 0;
}