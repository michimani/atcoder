#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui l = ui(s.length());
  if (s[l - 2] == 'e' && s[l - 1] == 'r')
    cout << "er" << endl;
  else
    cout << "ist" << endl;

  return 0;
}