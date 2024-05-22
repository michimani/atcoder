#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string s, t;
  cin >> s >> t;

  ui l = ui(s.length());

  for (ui d = 0; d < l; d++)
  {
    bool ok = true;
    for (ui i = 0; i < l; i++)
    {
      if (s[(i + d) % l] != t[i])
      {
        ok = false;
        continue;
      }
    }

    if (ok)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}