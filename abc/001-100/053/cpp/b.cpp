#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  int a = -1, z = -1;
  for (ui i = 1; i <= s.length(); i++)
  {
    if (a == -1 && s[i - 1] == 'A')
      a = i;

    if (z == -1 && s[s.length() - i] == 'Z')
      z = s.length() - i + 1;
  }

  cout << z - a + 1 << endl;
  return 0;
}