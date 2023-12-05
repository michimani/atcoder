#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
  unsigned int h, w;
  cin >> h >> w;
  vector<string> g(h);
  for (auto &r : g)
  {
    cin >> r;
  }

  unsigned int n = min(h, w);
  vector<int> s(n, 0);
  for (unsigned int hi = 1; hi < h - 1; hi++)
  {
    for (unsigned int wi = 1; wi < w - 1; wi++)
    {
      if (g[hi][wi] != '#' ||
          g[hi - 1][wi - 1] != '#' ||
          g[hi - 1][wi + 1] != '#' ||
          g[hi + 1][wi - 1] != '#' ||
          g[hi + 1][wi + 1] != '#')
      {
        continue;
      }

      unsigned int dd = min(min(hi, h - hi - 1), min(wi, w - wi - 1));

      unsigned int c = 1;
      for (unsigned int d = 2; d <= dd; d++)
      {
        if (g[hi - d][wi - d] == '#' &&
            g[hi - d][wi + d] == '#' &&
            g[hi + d][wi - d] == '#' &&
            g[hi + d][wi + d] == '#')
        {
          c++;
        }
        else
        {
          break;
        }
      }
      s[c - 1]++;
    }
  }

  for (unsigned int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      cout << " ";
    }

    cout << s[i];
  }

  cout << endl;

  return 0;
}