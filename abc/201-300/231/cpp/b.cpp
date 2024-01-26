#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, ui> sc;
  for (ui i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    sc[s]++;
  }

  string ans = "";
  ui mx = 0;
  auto it = sc.begin();
  while (it != sc.end())
  {
    if (mx < it->second)
    {
      mx = it->second;
      ans = it->first;
    }
    it++;
  }

  cout << ans << endl;
  return 0;
}