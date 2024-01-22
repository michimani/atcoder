#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  const string p = "WBWBWWBWBWBW";
  const ui ps = ui(p.length());
  const vector<string> o = {"Do", "Do", "Re", "Re", "Mi", "Fa", "Fa", "So", "So", "La", "La", "Si"};

  string s;
  cin >> s;

  bool found = false;
  ui f = 0;
  while (!found)
  {
    bool ok = true;
    for (ui i = 0; i < ps; i++)
    {
      if (p[(i + f) % ps] != s[i])
      {
        ok = false;
        break;
      }
    }

    if (ok)
    {
      found = true;
      break;
    }

    f++;
  }

  cout << o[(f + ps) % ps] << endl;
  return 0;
}