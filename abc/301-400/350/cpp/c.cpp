#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<ui, ui> am;
  for (ui i = 1; i <= n; i++)
  {
    ui a;
    cin >> a;
    if (i != a)
      am[i] = a;
  }

  ui ans = 0;
  string ansl = "";

  bool sw = true;
  while (sw)
  {
    sw = false;

    for (auto m : am)
    {
      if (m.first != m.second)
      {
        ui t = am[m.second];
        am[m.second] = m.second;
        am[m.first] = t;
        ans++;

        if (ansl.length() != 0)
          ansl += "\n";
        if (m.first < m.second)
          ansl += to_string(m.first) + " " + to_string(m.second);
        else
          ansl += to_string(m.second) + " " + to_string(m.first);
        sw = true;
      }
    }
  }

  cout << ans << endl;
  cout << ansl << endl;

  return 0;
}