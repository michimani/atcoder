#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;

  unsigned int n;
  cin >> n;

  for (unsigned int i = 0; i < n; i++)
  {
    unsigned int l, r;
    cin >> l >> r;
    string s_tmp(s.length(), '.');
    for (unsigned int si = 1; si <= s.length(); si++)
    {
      unsigned int p = si;
      if (l <= si && si <= r)
      {
        p = r - si + l;
      }

      s_tmp[si - 1] = s[p - 1];
    }

    s = s_tmp;
  }

  cout << s << endl;
  return 0;
}