#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ui = unsigned int;

void add_score(vector<ui> &target_idx, vector<pair<ui, ui>> &score)
{
  for (auto const idx : target_idx)
    score[idx].second++;
}

int main()
{
  ui n, m;
  cin >> n >> m;

  vector<string> s(n);
  for (auto &ss : s)
    cin >> ss;

  vector<pair<ui, ui>> score(n);
  vector<ui> all_idx(n);
  for (ui i = 0; i < n; i++)
  {
    score[i].first = i;
    score[i].second = 0;
    all_idx[i] = i;
  }

  ui x = 0, y = 0;
  vector<ui> x_idx = {}, y_idx = {};
  for (ui i = 0; i < m; i++)
  {
    // vote i
    x = 0, y = 0;
    x_idx = {}, y_idx = {};
    for (ui j = 0; j < n; j++)
    {
      // user j
      if (s[j][i] == '0')
      {
        x++;
        x_idx.push_back(j);
      }
      else
      {
        y++;
        y_idx.push_back(j);
      }
    }

    if (x == 0 || y == 0)
    {
      // noop
    }
    else if (x < y)
    {
      // 0
      add_score(x_idx, score);
    }
    else if (x > y)
    {
      // 1
      add_score(y_idx, score);
    }
  }

  sort(score.begin(), score.end(),
       [](const pair<ui, ui> &a, const pair<ui, ui> &b)
       { return a.second > b.second; });

  ui max = score[0].second;
  vector<ui> mi = {score[0].first + 1};
  for (ui i = 1; i < n; i++)
  {
    if (max != score[i].second)
      break;

    mi.push_back(score[i].first + 1);
  }

  sort(mi.begin(), mi.end());

  cout << mi[0];
  for (ui i = 1; i < mi.size(); i++)
    cout << " " << mi[i];
  cout << endl;

  return 0;
}