#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

void gen(vector<vector<unsigned int>> &choices, vector<vector<unsigned int>> &balls_list, vector<unsigned int> balls, map<unsigned int, bool> selected, unsigned int pos)
{
  if (pos == choices.size())
  {
    balls_list.push_back(balls);
    return;
  }

  if (selected[choices[pos][0]] && selected[choices[pos][1]])
  {
    gen(choices, balls_list, balls, selected, pos + 1);
    return;
  }

  if (!selected[choices[pos][0]])
  {
    vector<unsigned int> tmp_balls = balls;
    tmp_balls.push_back(choices[pos][0]);
    map<unsigned int, bool> tmp_selected = selected;
    tmp_selected[choices[pos][0]] = true;
    gen(choices, balls_list, tmp_balls, tmp_selected, pos + 1);
  }

  if (!selected[choices[pos][1]])
  {
    vector<unsigned int> tmp_balls = balls;
    tmp_balls.push_back(choices[pos][1]);
    map<unsigned int, bool> tmp_selected = selected;
    tmp_selected[choices[pos][1]] = true;
    gen(choices, balls_list, tmp_balls, tmp_selected, pos + 1);
  }
}

int main()
{
  unsigned int n, m;
  cin >> n >> m;

  vector<vector<unsigned int>> conds(n + 1, vector<unsigned int>(n + 1, 0));
  for (unsigned int i = 0; i < m; i++)
  {
    unsigned int a, b;
    cin >> a >> b;
    conds[a][b]++;
  }

  unsigned int k;
  cin >> k;

  vector<vector<unsigned int>> choices(k, vector<unsigned int>(2, 0));
  for (unsigned int i = 0; i < k; i++)
  {
    cin >> choices[i][0] >> choices[i][1];
  }

  vector<vector<unsigned int>> balls_list;
  vector<unsigned int> balls;
  map<unsigned int, bool> selected;
  gen(choices, balls_list, balls, selected, 0);

  unsigned int ans = 0;
  for (auto &b : balls_list)
  {
    sort(b.begin(), b.end());
    unsigned int tmp_ans = 0;
    for (unsigned int i = 0; i < b.size(); i++)
    {
      for (unsigned int j = i + 1; j < b.size(); j++)
      {
        tmp_ans += conds[b[i]][b[j]];
      }
    }

    ans = max(ans, tmp_ans);
  }

  cout << ans << endl;
  return 0;
}