#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h1, h2, h3, w1, w2, w3;
  cin >> h1 >> h2 >> h3 >> w1 >> w2 >> w3;

  vector<vector<vector<ui>>> wv(3, vector<vector<ui>>());

  // w1
  vector<vector<ui>> w1v;
  for (ui i = 1; i <= w1 - 2; i++)
  {
    for (ui j = 1; j <= w1 - i - 1; j++)
    {
      ui k = w1 - i - j;
      vector<ui> w1tmp = {i, j, k};
      w1v.push_back(w1tmp);
    }
  }
  if (w1v.size() == 0)
  {
    cout << 0 << endl;
    return 0;
  }
  wv[0] = w1v;

  // w2
  vector<vector<ui>> w2v;
  for (ui i = 1; i <= w2 - 2; i++)
  {
    for (ui j = 1; j <= w2 - i - 1; j++)
    {
      ui k = w2 - i - j;
      vector<ui> w2tmp = {i, j, k};
      w2v.push_back(w2tmp);
    }
  }
  if (w2v.size() == 0)
  {
    cout << 0 << endl;
    return 0;
  }
  wv[1] = w2v;

  // w3
  vector<vector<ui>> w3v;
  for (ui i = 1; i <= w3 - 2; i++)
  {
    for (ui j = 1; j <= w3 - i - 1; j++)
    {
      ui k = w3 - i - j;
      vector<ui> w3tmp = {i, j, k};
      w3v.push_back(w3tmp);
    }
  }
  if (w3v.size() == 0)
  {
    cout << 0 << endl;
    return 0;
  }
  wv[2] = w3v;

  ui ans = 0;
  for (ui w1i = 0; w1i < wv[0].size(); w1i++)
  {
    for (ui w2i = 0; w2i < wv[1].size(); w2i++)
    {
      for (ui w3i = 0; w3i < wv[2].size(); w3i++)
      {
        if ((wv[0][w1i][0] + wv[1][w2i][0] + wv[2][w3i][0] == h1) &&
            (wv[0][w1i][1] + wv[1][w2i][1] + wv[2][w3i][1] == h2) &&
            (wv[0][w1i][2] + wv[1][w2i][2] + wv[2][w3i][2] == h3))
        {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}