#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  ui mx = 0;
  vector<string> s(n);
  for (auto &sv : s)
  {
    cin >> sv;
    mx = max(mx, ui(sv.length()));
  }

  reverse(s.begin(), s.end());

  string t = "";
  for (ui i = 0; i < mx; i++)
  {
    t = "";
    for (auto &ss : s)
    {
      if (ss.length() > i)
      {
        cout << t << ss[i];
        t = "";
      }
      else
      {
        t += "*";
      }
    }
    cout << endl;
  }

  return 0;
}