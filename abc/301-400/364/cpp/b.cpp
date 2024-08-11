#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  pair<int, int> s;
  cin >> s.first >> s.second;

  vector<vector<char>> g(h + 2, vector<char>(w + 2, '#'));
  for (ui i = 1; i <= h; i++)
    for (ui j = 1; j <= w; j++)
      cin >> g[i][j];

  string x;
  cin >> x;

  map<char, pair<int, int>> m = {
      {'U', {-1, 0}},
      {'D', {1, 0}},
      {'R', {0, 1}},
      {'L', {0, -1}},
  };

  for (auto c : x)
  {
    pair<int, int> mo = m[c];
    ui nh = s.first + mo.first, nw = s.second + mo.second;

    if (g[ui(nh)][ui(nw)] != '#')
    {
      s.first = nh;
      s.second = nw;
    }
  }

  cout << s.first << " " << s.second << endl;

  return 0;
}