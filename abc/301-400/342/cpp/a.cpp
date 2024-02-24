#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  map<char, vector<ui>> cm;

  for (ui i = 1; i <= s.size(); i++)
    cm[s[i - 1]].push_back(i);

  auto it = cm.begin();
  while (it != cm.end())
  {
    if (it->second.size() == 1)
    {
      cout << it->second[0] << endl;
      return 0;
    }

    it++;
  }

  return 0;
}