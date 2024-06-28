#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w;
  cin >> h >> w;

  vector<vector<char>> g;
  vector<bool> skip_w(w, true);
  for (ui i = 0; i < h; i++)
  {
    vector<char> t(w, '.');
    bool skip = true;
    for (ui j = 0; j < w; j++)
    {
      cin >> t[j];
      if (t[j] == '#')
      {
        skip = false;
        skip_w[j] = false;
      }
    }

    if (!skip)
      g.push_back(t);
  }

  vector<vector<char>> gg;
  for (ui i = 0; i < g.size(); i++)
  {
    for (ui j = 0; j < w; j++)
      if (!skip_w[j])
        cout << g[i][j];
    cout << endl;
  }

  return 0;
}