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

  map<ui, vector<char *>> cs;
  for (ui i = 0; i < n; i++)
  {
    ui c;
    cin >> c;
    cs[c].push_back(&s[i]);
  }

  auto it = cs.begin();
  while (it != cs.end())
  {
    char tmp = *it->second[it->second.size() - 1];
    for (ui j = ui(it->second.size()) - 1; j > 0; j--)
    {
      *it->second[j] = *it->second[j - 1];
    }
    *it->second[0] = tmp;

    it++;
  }

  cout << s << endl;

  return 0;
}