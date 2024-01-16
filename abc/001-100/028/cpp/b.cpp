#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  map<char, ui> cc = {
      {'A', 0},
      {'B', 0},
      {'C', 0},
      {'D', 0},
      {'E', 0},
      {'F', 0},
  };

  string s;
  cin >> s;
  for (char c : s)
  {
    cc[c]++;
  }

  auto it = cc.begin();
  string ans = "";
  while (it != cc.end())
  {
    if (ans.length() > 0)
    {
      ans += " ";
    }
    ans += to_string(it->second);
    it++;
  }

  cout << ans << endl;
  return 0;
}