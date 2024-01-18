#include <iostream>
#include <map>

using namespace std;
using ui = unsigned int;

void walk(map<ui, map<ui, bool>> &mm, ui &n, ui pos, ui prev, ui &cnt)
{
  if (cnt > n)
  {
    return;
  }

  cnt++;
  auto it = mm[pos].begin();
  while (it != mm[pos].end())
  {
    if (it->first != prev)
    {
      walk(mm, n, it->first, pos, cnt);
    }
    it++;
  }
}

int main()
{
  ui n, m;
  cin >> n >> m;

  if (m == 0 || m < n - 1)
  {
    cout << "No" << endl;
    return 0;
  }

  map<ui, map<ui, bool>> mm;
  for (ui i = 0; i < m; i++)
  {
    ui v1, v2;
    cin >> v1 >> v2;
    mm[v1][v2] = true;
    mm[v2][v1] = true;
  }

  auto it = mm.begin();
  ui has_one = 0;
  while (it != mm.end())
  {
    has_one += ui(it->second.size() == 1);
    it++;
  }

  if (has_one != 2)
  {
    cout << "No" << endl;
    return 0;
  }

  ui cnt = 0;
  walk(mm, n, 1, 0, cnt);

  if (cnt == n)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}