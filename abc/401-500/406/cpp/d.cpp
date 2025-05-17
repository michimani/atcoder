#include <iostream>
#include <vector>
#include <set>

using namespace std;
using ui = unsigned int;

int main()
{
  ui h, w, n;
  cin >> h >> w >> n;

  vector<set<ui>> row_gomi(h + 1);
  vector<set<ui>> col_gomi(w + 1);

  for (ui i = 0; i < n; i++)
  {
    ui r, c;
    cin >> r >> c;
    row_gomi[r].insert(c);
    col_gomi[c].insert(r);
  }

  ui q;
  cin >> q;

  for (ui i = 0; i < q; i++)
  {
    ui type, pos;
    cin >> type >> pos;

    if (type == 1)
    {
      cout << row_gomi[pos].size() << endl;
      for (ui col : row_gomi[pos])
        col_gomi[col].erase(pos);

      row_gomi[pos].clear();
    }
    else
    {
      cout << col_gomi[pos].size() << endl;
      for (ui row : col_gomi[pos])
        row_gomi[row].erase(pos);

      col_gomi[pos].clear();
    }
  }

  return 0;
}