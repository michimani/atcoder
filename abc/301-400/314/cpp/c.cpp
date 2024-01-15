#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n, m;
  string s;
  cin >> n >> m >> s;

  map<ui, vector<ui>> cidx;
  for (ui i = 0; i < n; i++)
  {
    ui c;
    cin >> c;
    cidx[c].push_back(i);
  }

  auto it = cidx.begin();
  while (it != cidx.end())
  {
    char tmp = s[it->second[it->second.size() - 1]];
    for (ui j = ui(it->second.size()) - 1; j > 0; j--)
    {
      s[it->second[j]] = s[it->second[j - 1]];
    }
    s[it->second[0]] = tmp;

    it++;
  }

  cout << s << endl;

  return 0;
}