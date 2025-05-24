#include <iostream>
#include <vector>
#include <map>
#include <iomanip>
#include <set>

using namespace std;
using ld = long double;

string key(int a, int b)
{
  return to_string(a) + "-" + to_string(b);
}

int main()
{
  int x, y;
  cin >> x >> y;

  map<int, vector<string>> s;
  map<int, vector<string>> d;
  for (int i = 1; i <= 6; i++)
  {
    for (int j = 1; j <= 6; j++)
    {
      s[i + j].push_back(key(i, j));
      d[abs(i - j)].push_back(key(i, j));
    }
  }

  set<string> c;
  for (auto &k : s)
    if (k.first >= x)
      for (auto kk : k.second)
        c.insert(kk);
  for (auto &k : d)
    if (k.first >= y)
      for (auto kk : k.second)
        c.insert(kk);

  cout << fixed << setprecision(10) << ld(c.size()) / ld(36) << endl;

  return 0;
}