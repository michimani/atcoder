#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int N = 0;
  unsigned int M = 0;
  cin >> N >> M;

  vector<int> ans_cand(M, 0);
  for (int i = 0; i < N; i++)
  {
    int l, r, s;
    cin >> l >> r >> s;
    for (unsigned int ex = 1; ex <= M; ex++)
    {
      if (int(ex) < l || r < int(ex))
      {
        ans_cand[ex - 1] += s;
      }
    }
  }

  sort(ans_cand.rbegin(), ans_cand.rend());

  cout << ans_cand[0] << endl;
}