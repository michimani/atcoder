#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  cin >> n >> m;

  string s, t;
  cin >> s >> t;

  bool is_p = true, is_s = true;
  for (ui i = 0; i < n; i++)
  {
    // prefix
    if (is_p)
    {
      is_p = s[i] == t[i];
    }

    // suffix
    if (is_s)
    {
      is_s = s[n - 1 - i] == t[m - 1 - i];
    }
  }

  if (is_p && is_s)
  {
    cout << 0 << endl;
  }
  else if (is_p)
  {
    cout << 1 << endl;
  }
  else if (is_s)
  {
    cout << 2 << endl;
  }
  else
  {
    cout << 3 << endl;
  }

  return 0;
}