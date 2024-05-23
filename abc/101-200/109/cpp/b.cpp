#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, bool> sm;

  string s;
  cin >> s;
  sm[s] = true;
  n--;

  for (; n--;)
  {
    string t;
    cin >> t;
    if (t[0] != s[s.length() - 1] || sm.count(t) > 0)
    {
      cout << "No" << endl;
      return 0;
    }

    sm[t] = true;
    s = t;
  }

  cout << "Yes" << endl;

  return 0;
}