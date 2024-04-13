#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  ui sl = s.length();

  map<string, bool> ss;
  for (ui si = 0; si < sl; si++)
  {
    string t = "";
    for (ui i = 0; i < sl; i++)
      t += s[(si + i) % sl];

    ss[t] = true;
  }

  cout << ss.begin()->first << endl;
  cout << ss.rbegin()->first << endl;
  return 0;
}