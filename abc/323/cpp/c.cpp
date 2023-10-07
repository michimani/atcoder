#include <iostream>
#include <vector>
#include <tuple>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
  unsigned long N = 0, M = 0;
  cin >> N >> M;

  vector<int> A(M, 0);
  for (unsigned long i = 0; i < M; i++)
  {
    cin >> A[i];
  }

  tuple<int, int> max_score = {0, 0};
  vector<tuple<int, vector<int>>> user; // score, not_ans_scores
  for (unsigned long i = 0; i < N; i++)
  {
    string s = "";
    cin >> s;
    vector<int> not_ans;
    int score = int(i);
    for (unsigned long si = 0; si < s.size(); si++)
    {
      if (s[si] == 'x')
      {
        not_ans.push_back(A[si]);
      }
      else
      {
        score += A[si];
      }
    }

    sort(not_ans.rbegin(), not_ans.rend());
    user.push_back({score, not_ans});
    if (get<1>(max_score) < score)
    {
      max_score = {int(i), score};
    }
  }

  sort(A.rbegin(), A.rend());

  for (unsigned long i = 0; i < user.size(); i++)
  {
    if (int(i) == get<0>(max_score))
    {
      cout << 0 << endl;
      continue;
    }

    int remain = get<1>(max_score) - get<0>(user[i]);
    int need_ans = 0;
    vector<int> not_ans_score = get<1>(user[i]);
    for (unsigned long nai = 0; nai < not_ans_score.size(); nai++)
    {
      if (remain <= 0)
      {
        break;
      }
      if (remain > 0)
      {
        need_ans++;
      }
      remain -= not_ans_score[nai];
    }

    cout << need_ans << endl;
  }
}