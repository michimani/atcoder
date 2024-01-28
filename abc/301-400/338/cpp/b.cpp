#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  map<char, ui> cm;
  for (auto c : s)
  {
    cm[c]++;
  }

  map<ui, map<char, bool>> ccm;
  auto it = cm.begin();
  while (it != cm.end())
  {
    ccm[it->second][it->first] = true;
    it++;
  }

  cout << ccm.rbegin()->second.begin()->first << endl;
  return 0;
}