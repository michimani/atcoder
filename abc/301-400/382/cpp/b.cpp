#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, d;
  cin >> n >> d;

  string s;
  cin >> s;

  for (ui i = n - 1; i >= 0; i--)
  {
    if (d == 0)
      break;

    if (s[i] == '.')
      continue;

    s[i] = '.';
    d--;
  }

  cout << s << endl;

  return 0;
}