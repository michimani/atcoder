#include <iostream>
#include <vector>

using namespace std;
using ui = unsigned int;
using ll = long long;

int main()
{
  ui n, q;
  cin >> n >> q;

  vector<vector<ll>> p(n, vector<ll>(2, 0));
  for (ui i = 0; i < n; i++)
  {
    p[i][0] = ll(i + 1);
  }

  ui move = 0;
  for (ui i = 0; i < q; i++)
  {
    ui k;
    string c;
    cin >> k >> c;

    if (k == 1)
    {
      ui head_idx = (n - move) % n;
      ll new_x = p[head_idx][0];
      ll new_y = p[head_idx][1];
      if (c == "R")
      {
        new_x++;
      }
      else if (c == "L")
      {
        new_x--;
      }
      else if (c == "U")
      {
        new_y++;
      }
      else if (c == "D")
      {
        new_y--;
      }
      else
      {
        // noop
      }

      ui new_head_idx = (head_idx + n - 1) % n;
      p[new_head_idx][0] = new_x;
      p[new_head_idx][1] = new_y;
      move = (move + 1) % n;
    }
    else
    {
      ui org_idx = ui(stoi(c)) - 1;
      cout << p[(org_idx + n - move) % n][0] << " " << p[(org_idx + n - move) % n][1] << endl;
    }
  }

  return 0;
}