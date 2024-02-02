#include <iostream>
#include <map>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, bool> sm;
  for (ui i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    string rs = s;
    reverse(s.begin(), s.end());
    if (sm.count(rs) > 0)
    {
      continue;
    }
    sm[s] = true;
  }

  cout << sm.size() << endl;
  return 0;
}