#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui n;
  cin >> n;

  map<string, ui> sm;
  for (; n--;)
  {
    string s;
    cin >> s;

    sm[s]++;
  }

  map<ui, vector<string>> ss;
  for (auto &m : sm)
    ss[m.second].push_back(m.first);

  cout << ss.rbegin()->second[0] << endl;

  return 0;
}