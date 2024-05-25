#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

struct U
{
  ui i, w;
};

bool comp(const U &l, const U &r)
{
  if (l.w != r.w)
    return l.w > r.w;

  return l.i < r.i;
}

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<U> u(n * 2);
  for (ui i = 0; i < 2 * n; i++)
    u[i] = {i, 0};

  vector<vector<char>> j(2 * n, vector<char>(m, '.'));
  for (auto &jj : j)
    for (auto &a : jj)
      cin >> a;

  for (ui i = 0; i < m; i++)
  {
    for (ui k = 1; k <= n; k++)
    {
      U *a = &u[k * 2 - 2], *b = &u[k * 2 - 1];
      switch (j[a->i][i])
      {
      case 'G':
        if (j[b->i][i] == 'C')
          a->w++;
        else if (j[b->i][i] == 'P')
          b->w++;
        break;

      case 'C':
        if (j[b->i][i] == 'P')
          a->w++;
        else if (j[b->i][i] == 'G')
          b->w++;
        break;

      case 'P':
        if (j[b->i][i] == 'G')
          a->w++;
        else if (j[b->i][i] == 'C')
          b->w++;
        break;

      default:
        break;
      }
    }

    sort(u.begin(), u.end(), comp);
  }

  for (auto &uu : u)
    cout << uu.i + 1 << endl;

  return 0;
}