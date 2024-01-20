#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  string s;
  cin >> s;

  for (ui i = 2; i < n; i++)
  {
    if (s[i - 2] == 'A' && s[i - 1] == 'B' && s[i] == 'C')
    {
      cout << i - 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}