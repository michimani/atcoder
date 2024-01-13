#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  ui k;
  cin >> s >> k;

  map<string, bool> pm;
  for (ui i = k - 1; i < s.size(); i++)
  {
    string tmp = {s[i]};
    for (ui j = k - 1; j > 0; j--)
    {
      tmp = s[i - j] + tmp;
    }

    pm[tmp] = true;
  }

  cout << pm.size() << endl;
  return 0;
}