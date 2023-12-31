#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;
using ull = unsigned long long;

int main()
{
  ui n;
  cin >> n;

  vector<vector<char>> g(n, vector<char>(n, '0'));
  for (auto &r : g)
  {
    for (auto &c : r)
    {
      cin >> c;
    }
  }

  vector<string> list;
  string st;
  for (ui i = 0; i < n; i++)
  {
    for (ui j = 0; j < n; j++)
    {
      // down
      st = "";
      for (ui ii = 0; ii <= n - 1; ii++)
      {
        st += g[(i + ii) % n][j];
      }
      list.push_back(st);

      // up
      st = "";
      for (ui ii = 0; ii <= n - 1; ii++)
      {
        st += g[(i + n - ii) % n][j];
      }
      list.push_back(st);

      // right
      st = "";
      for (ui jj = 0; jj <= n - 1; jj++)
      {
        st += g[i][(j + jj) % n];
      }
      list.push_back(st);

      // left
      st = "";
      for (ui jj = 0; jj <= n - 1; jj++)
      {
        st += g[i][(j + n - jj) % n];
      }
      list.push_back(st);

      // right down
      st = "";
      for (ui ij = 0; ij <= n - 1; ij++)
      {
        st += g[(i + ij) % n][(j + ij) % n];
      }
      list.push_back(st);

      // right up
      st = "";
      for (ui ij = 0; ij <= n - 1; ij++)
      {
        st += g[(i + ij) % n][(j + n - ij) % n];
      }
      list.push_back(st);

      // left down
      st = "";
      for (ui ij = 0; ij <= n - 1; ij++)
      {
        st += g[(i + n - ij) % n][(j + ij) % n];
      }
      list.push_back(st);

      // left up
      st = "";
      for (ui ij = 0; ij <= n - 1; ij++)
      {
        st += g[(i + n - ij) % n][(j + n - ij) % n];
      }
      list.push_back(st);
    }
  }

  sort(list.rbegin(), list.rend());

  cout << list[0] << endl;
  return 0;
}