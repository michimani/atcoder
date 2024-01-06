#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  s[s.length() - 1] = '4';
  cout << s << endl;
  return 0;
}