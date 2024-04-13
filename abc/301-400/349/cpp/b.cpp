#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  string s;
  cin >> s;

  map<char, ui> cm;
  for (auto c : s)
    cm[c]++;

  map<ui, vector<char>> cv;
  for (auto &it : cm)
    cv[it.second].push_back(it.first);

  for (ui i = 1; i <= cv.rbegin()->first; i++)
  {
    if (cv[i].size() != 2 && cv[i].size() != 0)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}