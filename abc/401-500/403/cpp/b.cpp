#include <iostream>

using namespace std;
using ui = unsigned int;

int main()
{
  string t;
  cin >> t;

  string u;
  cin >> u;

  for (ui i = 0; i <= t.size() - (int)u.size(); i++)
  {
    bool possible = true;

    for (ui j = 0; j < u.size() && possible; j++)
    {
      ui pos = i + j;

      possible = !(t[pos] != '?' && t[pos] != u[j]);
    }

    if (possible)
    {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}