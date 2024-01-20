#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w, k;
  cin >> h >> w >> k;

  vector<vector<char>> g(h, vector<char>(w));

  vector<ui> okpc;

  for (ui i = 0; i < h; i++)
  {
    list<char> ok;
    ui pc = 0;
    for (ui j = 0; j < w; j++)
    {
      cin >> g[i][j];
      if (g[i][j] == 'x')
      {
        if (ok.size() == k)
        {
          okpc.push_back(pc);
        }
        ok.clear();
        pc = 0;
      }
      else
      {
        if (ok.size() == k)
        {
          okpc.push_back(pc);
          pc -= ui(ok.front() == '.');
          ok.pop_front();
        }
        ok.push_back(g[i][j]);
        pc += ui(g[i][j] == '.');
      }
    }

    if (ok.size() == k)
    {
      okpc.push_back(pc);
    }
  }

  for (ui j = 0; j < w; j++)
  {
    list<char> ok;
    ui pc = 0;
    for (ui i = 0; i < h; i++)
    {
      if (g[i][j] == 'x')
      {
        if (ok.size() == k)
        {
          okpc.push_back(pc);
        }
        ok.clear();
        pc = 0;
      }
      else
      {
        if (ok.size() == k)
        {
          okpc.push_back(pc);
          pc -= ui(ok.front() == '.');
          ok.pop_front();
        }
        ok.push_back(g[i][j]);
        pc += ui(g[i][j] == '.');
      }
    }

    if (ok.size() == k)
    {
      okpc.push_back(pc);
    }
  }

  if (okpc.size() == 0)
  {
    cout << -1 << endl;
    return 0;
  }

  sort(okpc.begin(), okpc.end());

  cout << okpc[0] << endl;

  return 0;
}