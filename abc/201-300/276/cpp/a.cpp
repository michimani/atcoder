#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  for (ui i = s.length(); i > 0; i--)
  {
    if (s[i - 1] == 'a')
    {
      cout << i << endl;
      return 0;
    }
  }

  cout << -1 << endl;

  return 0;
}