#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  unsigned int n;
  cin >> n;

  vector<long> L(n, 0);
  for (auto &l : L)
  {
    cin >> l;
  }

  unsigned int ans = 0;
  vector<vector<vector<bool>>> checked(n, vector<vector<bool>>(n, vector<bool>(n, false)));
  for (unsigned int i = 0; i < n; i++)
  {
    for (unsigned int j = 0; j < n; j++)
    {
      for (unsigned int k = 0; k < n; k++)
      {
        if (L[i] == L[j] || L[j] == L[k] || L[k] == L[i])
        {
          continue;
        }

        vector<unsigned int> c = {i, j, k};
        sort(c.begin(), c.end());
        if (i == k || j == k || checked[c[0]][c[1]][c[2]])
        {
          continue;
        }
        checked[c[0]][c[1]][c[2]] = true;

        if (
            (L[c[0]] > L[c[1]] && L[c[0]] > L[c[2]] && L[c[0]] < L[c[1]] + L[c[2]]) ||
            (L[c[1]] > L[c[2]] && L[c[1]] > L[c[0]] && L[c[1]] < L[c[2]] + L[c[0]]) ||
            (L[c[2]] > L[c[0]] && L[c[2]] > L[c[1]] && L[c[2]] < L[c[0]] + L[c[1]]))
        {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}