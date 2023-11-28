#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
  unsigned int n, q;
  cin >> n >> q;

  vector<int> balls(n);
  map<int, unsigned int> b_idx;
  for (unsigned int b = 1; b <= n; b++)
  {
    balls[b - 1] = int(b);
    b_idx[int(b)] = b - 1;
  }

  for (unsigned int i = 0; i < q; i++)
  {
    int x;
    cin >> x;
    unsigned int target_idx = b_idx[x] + 1;
    if (target_idx >= n)
    {
      target_idx = b_idx[x] - 1;
    }
    int tmp = balls[target_idx];
    balls[target_idx] = x;
    balls[b_idx[x]] = tmp;

    b_idx[tmp] = b_idx[x];
    b_idx[x] = target_idx;
  }

  for (unsigned int i = 0; i < n; i++)
  {
    if (i > 0)
    {
      cout << " ";
    }
    cout << balls[i];
  }

  cout << endl;
  return 0;
}